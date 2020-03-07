#include <types.h>

void expect_usb_sent_byte(u8 value);
void stub_usb_receive_byte(u8 value);
void stub_comm_read_returns_midi_event(u8 status, u8 data, u8 data2);
void expect_ym2612_write_reg(u8 part, u8 reg, u8 data);
void expect_ym2612_write_reg_any_data(u8 part, u8 reg);
void expect_ym2612_write_operator(u8 chan, u8 op, u8 baseReg, u8 data);
void expect_ym2612_write_operator_any_data(u8 chan, u8 op, u8 baseReg);
void expect_ym2612_write_channel(u8 chan, u8 baseReg, u8 data);
void expect_ym2612_write_channel_any_data(u8 chan, u8 baseReg);
void expect_synth_pitch_any(void);
void expect_synth_pitch(u8 channel, u8 octave, u16 freqNumber);
void expect_synth_volume_any(void);
void expect_synth_volume(u8 channel, u8 volume);

#define expect_psg_attenuation(chan, attenu)                                   \
    {                                                                          \
        expect_value(__wrap_psg_attenuation, channel, chan);                   \
        expect_value(__wrap_psg_attenuation, attenuation, attenu);             \
    }

#define expect_psg_frequency(chan, frequency)                                  \
    {                                                                          \
        expect_value(__wrap_psg_frequency, channel, chan);                     \
        expect_value(__wrap_psg_frequency, freq, frequency);                   \
    }

#define expect_any_psg_frequency()                                             \
    {                                                                          \
        expect_any(__wrap_psg_frequency, channel);                             \
        expect_any(__wrap_psg_frequency, freq);                                \
    }
