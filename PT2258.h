/* Arduino PT2258 Library
 *
 * This file is part of the Arduino PT2258 Library
 *
 */ 

/* channel adresses */
#define  CHANNEL1_VOLUME_STEP_01  0x90
#define  CHANNEL1_VOLUME_STEP_10  0x80
#define  CHANNEL2_VOLUME_STEP_01  0x50
#define  CHANNEL2_VOLUME_STEP_10  0x40
#define  CHANNEL3_VOLUME_STEP_01  0x10
#define  CHANNEL3_VOLUME_STEP_10  0x00
#define  CHANNEL4_VOLUME_STEP_01  0x30
#define  CHANNEL4_VOLUME_STEP_10  0x20
#define  CHANNEL5_VOLUME_STEP_01  0x70
#define  CHANNEL5_VOLUME_STEP_10  0x60
#define  CHANNEL6_VOLUME_STEP_01  0xb0
#define  CHANNEL6_VOLUME_STEP_10  0xa0
#define  MASTER_VOLUME_1STEP     0xe0
#define  MASTER_VOLUME_10STEP    0xd0
#define  MUTE                    0x08
#define  SYSTEM_RESET            0xc0 


#ifndef PT2258_h
#define PT2258_h

class PT2258 {
    
private:
    unsigned char HEX2BCD (unsigned char x);
    int writeI2CChar(unsigned char c);

public:
    int init(void); 
    void setMute(char);
    void setChannelVolume(unsigned char chvol, char chno);
    void setMasterVolume(unsigned char mvol);
};

#endif
