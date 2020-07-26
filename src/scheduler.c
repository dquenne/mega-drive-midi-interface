#include "scheduler.h"
#include "comm_everdrive_pro.h"
#include "midi_psg.h"
#include "ui.h"
#include <types.h>

static u16 previousFrame;
static volatile u16 frame;

void scheduler_init(void)
{
    previousFrame = 0;
    frame = 0;
}

void scheduler_vsync(void)
{
    frame++;
}

static void onFrame(void)
{
    midi_psg_tick();
    ui_update();
    comm_everdrive_pro_tick();
}

void scheduler_doEvents(void)
{
    if (frame != previousFrame) {
        onFrame();
        previousFrame = frame;
    }
}
