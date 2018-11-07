#include <midi.h>
#include <types.h>

void __wrap_synth_init(void);
void __wrap_synth_noteOn(u8 channel);
void __wrap_synth_noteOff(u8 channel);
void __wrap_synth_pitch(u8 channel, u8 octave, u16 freqNumber);
void __wrap_synth_totalLevel(u8 channel, u8 totalLevel);
u8 __wrap_comm_read(void);
void __wrap_fm_writeReg(u16 part, u8 reg, u8 data);
void __wrap_midi_noteOff(u8 chan);
void __wrap_midi_noteOn(u8 chan, u8 pitch, u8 velocity);
void __wrap_YM2612_writeReg(const u16 part, const u8 reg, const u8 data);
