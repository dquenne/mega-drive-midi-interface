#include <genesis.h>
#include <interface.h>
#include <main.h>

static const u16 MAX_X = 40;
static const char HEADER[] = "Sega Mega Drive MIDI Interface";

static void vsync(void);

int main(void)
{
    SYS_setVIntCallback(vsync);
    VDP_drawText(HEADER, (MAX_X - sizeof(HEADER)) / 2, 2);
    VDP_drawText(BUILD, (MAX_X - sizeof(BUILD)) / 2, 3);
    while (TRUE) {
        interface_tick();
        VDP_waitVSync();
    }
}

static void vsync(void)
{
    VDP_showFPS(FALSE);
}
