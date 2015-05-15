/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface AirPlayReceiverContext : NSObject {
    struct { 
        unsigned int type; 
        unsigned long long format; 
        unsigned char input; 
        unsigned char loopback; 
        unsigned char varispeed; 
        unsigned char voice; 
        unsigned char volumeControl; 
        unsigned int activeType; 
        struct AirPlayReceiverSessionPrivate {} *session; 
        struct AudioStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } asbd; 
        struct OpaqueAUGraph {} *graph; 
        int converterNode; 
        struct OpaqueAudioComponentInstance {} *converterUnit; 
        int mixerNode; 
        struct OpaqueAudioComponentInstance {} *mixerUnit; 
        int varispeedNode; 
        struct OpaqueAudioComponentInstance {} *varispeedUnit; 
        int outputNode; 
        struct OpaqueAudioComponentInstance {} *outputUnit; 
        unsigned char outputStarted; 
        float outputVolume; 
        struct OpaqueAudioComponentInstance {} *inputUnit; 
        char *inputBuffer; 
        unsigned long long inputMaxLen; 
        unsigned char inputStarted; 
        NSObject<OS_dispatch_source> *ducker; 
    } _altAudioCtx;
    unsigned char _audioSessionActive;
    NSMutableSet *_hidDevices;
    unsigned int _hidIterator;
    struct IONotificationPort { } *_hidNotifier;
    struct { 
        unsigned int type; 
        unsigned long long format; 
        unsigned char input; 
        unsigned char loopback; 
        unsigned char varispeed; 
        unsigned char voice; 
        unsigned char volumeControl; 
        unsigned int activeType; 
        struct AirPlayReceiverSessionPrivate {} *session; 
        struct AudioStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } asbd; 
        struct OpaqueAUGraph {} *graph; 
        int converterNode; 
        struct OpaqueAudioComponentInstance {} *converterUnit; 
        int mixerNode; 
        struct OpaqueAudioComponentInstance {} *mixerUnit; 
        int varispeedNode; 
        struct OpaqueAudioComponentInstance {} *varispeedUnit; 
        int outputNode; 
        struct OpaqueAudioComponentInstance {} *outputUnit; 
        unsigned char outputStarted; 
        float outputVolume; 
        struct OpaqueAudioComponentInstance {} *inputUnit; 
        char *inputBuffer; 
        unsigned long long inputMaxLen; 
        unsigned char inputStarted; 
        NSObject<OS_dispatch_source> *ducker; 
    } _mainAudioCtx;
    unsigned int _powerAssertion;
    unsigned int _receiverUISessionID;
    unsigned char _receiverUIStarted;
    struct AirPlayReceiverSessionPrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; id x2; struct AirPlayReceiverServerPrivate {} *x3; struct AirPlayReceiverConnectionPrivate {} *x4; void *x5; struct { void *x_6_1_1; void *x_6_1_2; int (*x_6_1_3)(); int (*x_6_1_4)(); int (*x_6_1_5)(); int (*x_6_1_6)(); int (*x_6_1_7)(); int (*x_6_1_8)(); int (*x_6_1_9)(); int (*x_6_1_10)(); int (*x_6_1_11)(); int (*x_6_1_12)(); } x6; struct _opaque_pthread_mutex_t { long long x_7_1_1; BOOL x_7_1_2[56]; } x7; struct _opaque_pthread_mutex_t {} *x8; id x9; unsigned int x10; union { struct sockaddr { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[14]; } x_11_1_1; struct sockaddr_in { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; struct in_addr { unsigned int x_4_3_1; } x_2_2_4; BOOL x_2_2_5[8]; } x_11_1_2; struct sockaddr_in6 { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned short x_3_2_3; unsigned int x_3_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_3_2_5; unsigned int x_3_2_6; } x_11_1_3; } x11; unsigned char x12[16]; int x13; unsigned long long x14; unsigned char x15[6]; unsigned char x16; unsigned char x17; unsigned long long x18; unsigned int x19; unsigned long long x20; unsigned long long x21; unsigned int x22; struct { struct _CCCryptor {} *x_23_1_1; unsigned char x_23_1_2[16]; } x23; struct { /* ? */ } *x24; unsigned char x25[16]; unsigned char x26[16]; struct { unsigned int x_27_1_1; unsigned int x_27_1_2; unsigned int x_27_1_3; unsigned int x_27_1_4; unsigned long long x_27_1_5; unsigned long long x_27_1_6; unsigned long long x_27_1_7; unsigned long long x_27_1_8; unsigned long long x_27_1_9; unsigned long long x_27_1_10; unsigned int x_27_1_11; unsigned int x_27_1_12; unsigned int x_27_1_13; unsigned int x_27_1_14; unsigned int x_27_1_15; double x_27_1_16; double x_27_1_17; double x_27_1_18; double x_27_1_19; int x_27_1_20; unsigned int x_27_1_21; double x_27_1_22[3]; unsigned int x_27_1_23; double x_27_1_24; double x_27_1_25; double x_27_1_26; double x_27_1_27; unsigned char x_27_1_28; unsigned int x_27_1_29; unsigned char x_27_1_30; unsigned char x_27_1_31; unsigned int x_27_1_32; unsigned int x_27_1_33; unsigned int x_27_1_34; unsigned int x_27_1_35; unsigned int x_27_1_36; unsigned int x_27_1_37; unsigned char x_27_1_38; unsigned int x_27_1_39; unsigned int x_27_1_40; unsigned int x_27_1_41; unsigned int x_27_1_42; unsigned int x_27_1_43; unsigned int x_27_1_44; unsigned char x_27_1_45; unsigned char x_27_1_46; struct { double x_47_2_1; double x_47_2_2; double x_47_2_3; double x_47_2_4; double x_47_2_5; double x_47_2_6; double x_47_2_7; double x_47_2_8; } x_27_1_47; int x_27_1_48; unsigned int x_27_1_49; unsigned int x_27_1_50; struct AirTunesRetransmitNode {} *x_27_1_51; struct AirTunesRetransmitNode {} *x_27_1_52; struct AirTunesRetransmitNode {} *x_27_1_53; unsigned char x_27_1_54; long long x_27_1_55; long long x_27_1_56; long long x_27_1_57; long long x_27_1_58; long long x_27_1_59; unsigned int x_27_1_60; unsigned int x_27_1_61; unsigned int x_27_1_62; unsigned int x_27_1_63; unsigned long long x_27_1_64; unsigned long long x_27_1_65; unsigned long long x_27_1_66; unsigned long long x_27_1_67; unsigned long long x_27_1_68; unsigned int x_27_1_69; unsigned int x_27_1_70; } x27; unsigned char x28; unsigned char x29; unsigned char x30; unsigned int x31; int x32; unsigned char x33; unsigned char x34; unsigned char x35; struct HTTPClientPrivate {} *x36; int x37; int x38; unsigned char x39; struct PairingSessionPrivate {} *x40; struct { struct AirPlayReceiverSessionPrivate {} *x_41_1_1; unsigned int x_41_1_2; char *x_41_1_3; int x_41_1_4; int x_41_1_5; struct _opaque_pthread_t {} *x_41_1_6; struct _opaque_pthread_t {} **x_41_1_7; struct { id x_8_2_1; struct RTPPacketNode {} *x_8_2_2; struct RTPPacketNode {} *x_8_2_3; struct RTPPacketNode {} *x_8_2_4; struct RTPPacketNode { struct RTPPacketNode {} *x_5_3_1; struct RTPPacketNode {} *x_5_3_2; struct { union { unsigned int x_1_5_1; struct { struct { unsigned char x_1_7_1; unsigned char x_1_7_2; unsigned short x_1_7_3; unsigned int x_1_7_4; unsigned int x_1_7_5; } x_2_6_1; unsigned char x_2_6_2[1]; } x_1_5_2; unsigned char x_1_5_3[1472]; } x_3_4_1; int x_3_4_2; unsigned long long x_3_4_3; unsigned int x_3_4_4; } x_5_3_3; char *x_5_3_4; } x_8_2_5; unsigned int x_8_2_6; unsigned int x_8_2_7; unsigned int x_8_2_8; unsigned int x_8_2_9; unsigned int x_8_2_10; unsigned int x_8_2_11; unsigned long long x_8_2_12; unsigned char x_8_2_13; unsigned char x_8_2_14; unsigned int x_8_2_15; unsigned int x_8_2_16; unsigned int x_8_2_17; unsigned int x_8_2_18; char *x_8_2_19; } x_41_1_8; unsigned int x_41_1_9; unsigned int x_41_1_10; unsigned int x_41_1_11; unsigned int x_41_1_12; unsigned long long x_41_1_13; unsigned long long x_41_1_14; struct { unsigned long long x_15_2_1; unsigned int x_15_2_2; } x_41_1_15[30]; unsigned int x_41_1_16; float x_41_1_17; unsigned int x_41_1_18; struct { unsigned char x_19_2_1; struct { struct { unsigned int x_1_4_1[16]; unsigned char x_1_4_2[64]; unsigned long long x_1_4_3; } x_2_3_1; struct { unsigned int x_2_4_1; unsigned int x_2_4_2; unsigned int x_2_4_3; unsigned int x_2_4_4; unsigned int x_2_4_5; unsigned int x_2_4_6; unsigned int x_2_4_7; unsigned int x_2_4_8; unsigned int x_2_4_9; unsigned int x_2_4_10; unsigned int x_2_4_11; unsigned int x_2_4_12; unsigned int x_2_4_13; unsigned int x_2_4_14; unsigned char x_2_4_15[16]; unsigned long long x_2_4_16; unsigned char x_2_4_17[16]; } x_2_3_2; unsigned long long x_2_3_3; unsigned long long x_2_3_4; unsigned char x_2_3_5; } x_19_2_2; unsigned char x_19_2_3[32]; unsigned char x_19_2_4[8]; } x_41_1_19; struct { char *x_20_2_1; char *x_20_2_2; unsigned int x_20_2_3; unsigned int x_20_2_4; unsigned int x_20_2_5; unsigned int x_20_2_6; } x_41_1_20; union { struct sockaddr { unsigned char x_1_3_1; unsigned char x_1_3_2; BOOL x_1_3_3[14]; } x_21_2_1; struct sockaddr_in { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned short x_2_3_3; struct in_addr { unsigned int x_4_4_1; } x_2_3_4; BOOL x_2_3_5[8]; } x_21_2_2; struct sockaddr_in6 { unsigned char x_3_3_1; unsigned char x_3_3_2; unsigned short x_3_3_3; unsigned int x_3_3_4; struct in6_addr { union { unsigned char x_1_5_1[16]; unsigned short x_1_5_2[8]; unsigned int x_1_5_3[4]; } x_5_4_1; } x_3_3_5; unsigned int x_3_3_6; } x_21_2_3; } x_41_1_21; unsigned int x_41_1_22; unsigned short x_41_1_23; struct { unsigned char x_24_2_1; struct { struct { unsigned int x_1_4_1[16]; unsigned char x_1_4_2[64]; unsigned long long x_1_4_3; } x_2_3_1; struct { unsigned int x_2_4_1; unsigned int x_2_4_2; unsigned int x_2_4_3; unsigned int x_2_4_4; unsigned int x_2_4_5; unsigned int x_2_4_6; unsigned int x_2_4_7; unsigned int x_2_4_8; unsigned int x_2_4_9; unsigned int x_2_4_10; unsigned int x_2_4_11; unsigned int x_2_4_12; unsigned int x_2_4_13; unsigned int x_2_4_14; unsigned char x_2_4_15[16]; unsigned long long x_2_4_16; unsigned char x_2_4_17[16]; } x_2_3_2; unsigned long long x_2_3_3; unsigned long long x_2_3_4; unsigned char x_2_3_5; } x_24_2_2; unsigned char x_24_2_3[32]; unsigned char x_24_2_4[8]; } x_41_1_24; } x41; struct { struct AirPlayReceiverSessionPrivate {} *x_42_1_1; unsigned int x_42_1_2; char *x_42_1_3; int x_42_1_4; int x_42_1_5; struct _opaque_pthread_t {} *x_42_1_6; struct _opaque_pthread_t {} **x_42_1_7; struct { id x_8_2_1; struct RTPPacketNode {} *x_8_2_2; struct RTPPacketNode {} *x_8_2_3; struct RTPPacketNode {} *x_8_2_4; struct RTPPacketNode { struct RTPPacketNode {} *x_5_3_1; struct RTPPacketNode {} *x_5_3_2; struct { union { unsigned int x_1_5_1; struct { struct { unsigned char x_1_7_1; unsigned char x_1_7_2; unsigned short x_1_7_3; unsigned int x_1_7_4; unsigned int x_1_7_5; } x_2_6_1; unsigned char x_2_6_2[1]; } x_1_5_2; unsigned char x_1_5_3[1472]; } x_3_4_1; int x_3_4_2; unsigned long long x_3_4_3; unsigned int x_3_4_4; } x_5_3_3; char *x_5_3_4; } x_8_2_5; unsigned int x_8_2_6; unsigned int x_8_2_7; unsigned int x_8_2_8; unsigned int x_8_2_9; unsigned int x_8_2_10; unsigned int x_8_2_11; unsigned long long x_8_2_12; unsigned char x_8_2_13; unsigned char x_8_2_14; unsigned int x_8_2_15; unsigned int x_8_2_16; unsigned int x_8_2_17; unsigned int x_8_2_18; char *x_8_2_19; } x_42_1_8; unsigned int x_42_1_9; unsigned int x_42_1_10; unsigned int x_42_1_11; unsigned int x_42_1_12; unsigned long long x_42_1_13; unsigned long long x_42_1_14; struct { unsigned long long x_15_2_1; unsigned int x_15_2_2; } x_42_1_15[30]; unsigned int x_42_1_16; float x_42_1_17; unsigned int x_42_1_18; struct { unsigned char x_19_2_1; struct { struct { unsigned int x_1_4_1[16]; unsigned char x_1_4_2[64]; unsigned long long x_1_4_3; } x_2_3_1; struct { unsigned int x_2_4_1; unsigned int x_2_4_2; unsigned int x_2_4_3; unsigned int x_2_4_4; unsigned int x_2_4_5; unsigned int x_2_4_6; unsigned int x_2_4_7; unsigned int x_2_4_8; unsigned int x_2_4_9; unsigned int x_2_4_10; unsigned int x_2_4_11; unsigned int x_2_4_12; unsigned int x_2_4_13; unsigned int x_2_4_14; unsigned char x_2_4_15[16]; unsigned long long x_2_4_16; unsigned char x_2_4_17[16]; } x_2_3_2; unsigned long long x_2_3_3; unsigned long long x_2_3_4; unsigned char x_2_3_5; } x_19_2_2; unsigned char x_19_2_3[32]; unsigned char x_19_2_4[8]; } x_42_1_19; struct { char *x_20_2_1; char *x_20_2_2; unsigned int x_20_2_3; unsigned int x_20_2_4; unsigned int x_20_2_5; unsigned int x_20_2_6; } x_42_1_20; union { struct sockaddr { unsigned char x_1_3_1; unsigned char x_1_3_2; BOOL x_1_3_3[14]; } x_21_2_1; struct sockaddr_in { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned short x_2_3_3; struct in_addr { unsigned int x_4_4_1; } x_2_3_4; BOOL x_2_3_5[8]; } x_21_2_2; struct sockaddr_in6 { unsigned char x_3_3_1; unsigned char x_3_3_2; unsigned short x_3_3_3; unsigned int x_3_3_4; struct in6_addr { union { unsigned char x_1_5_1[16]; unsigned short x_1_5_2[8]; unsigned int x_1_5_3[4]; } x_5_4_1; } x_3_3_5; unsigned int x_3_3_6; } x_21_2_3; } x_42_1_21; unsigned int x_42_1_22; unsigned short x_42_1_23; struct { unsigned char x_24_2_1; struct { struct { unsigned int x_1_4_1[16]; unsigned char x_1_4_2[64]; unsigned long long x_1_4_3; } x_2_3_1; struct { unsigned int x_2_4_1; unsigned int x_2_4_2; unsigned int x_2_4_3; unsigned int x_2_4_4; unsigned int x_2_4_5; unsigned int x_2_4_6; unsigned int x_2_4_7; unsigned int x_2_4_8; unsigned int x_2_4_9; unsigned int x_2_4_10; unsigned int x_2_4_11; unsigned int x_2_4_12; unsigned int x_2_4_13; unsigned int x_2_4_14; unsigned char x_2_4_15[16]; unsigned long long x_2_4_16; unsigned char x_2_4_17[16]; } x_2_3_2; unsigned long long x_2_3_3; unsigned long long x_2_3_4; unsigned char x_2_3_5; } x_24_2_2; unsigned char x_24_2_3[32]; unsigned char x_24_2_4[8]; } x_42_1_24; } x42; int x43; int x44; unsigned char x45; unsigned short x46; unsigned short x47[512]; int x48; int x49; int x50; union { struct sockaddr { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[14]; } x_51_1_1; struct sockaddr_in { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; struct in_addr { unsigned int x_4_3_1; } x_2_2_4; BOOL x_2_2_5[8]; } x_51_1_2; struct sockaddr_in6 { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned short x_3_2_3; unsigned int x_3_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_3_2_5; unsigned int x_3_2_6; } x_51_1_3; } x51; unsigned int x52; unsigned char x53; unsigned int x54; unsigned int x55; unsigned int x56; struct AirTunesClockPrivate {} *x57; int x58; int x59; int x60; union { struct sockaddr { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[14]; } x_61_1_1; struct sockaddr_in { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; struct in_addr { unsigned int x_4_3_1; } x_2_2_4; BOOL x_2_2_5[8]; } x_61_1_2; struct sockaddr_in6 { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned short x_3_2_3; unsigned int x_3_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_3_2_5; unsigned int x_3_2_6; } x_61_1_3; } x61; unsigned int x62; unsigned char x63; int x64; struct _opaque_pthread_t {} *x65; struct _opaque_pthread_t {} **x66; int x67; int x68; int x69; struct _opaque_pthread_t {} *x70; struct _opaque_pthread_t {} **x71; unsigned int x72; unsigned long long x73; char *x74; struct AirTunesBufferNode {} *x75; struct AirTunesBufferNode { struct AirTunesBufferNode {} *x_76_1_1; struct AirTunesBufferNode {} *x_76_1_2; struct { /* ? */ } *x_76_1_3; char *x_76_1_4; unsigned long long x_76_1_5; char *x_76_1_6; unsigned int x_76_1_7; } x76; struct AirTunesBufferNode {} *x77; struct AirTunesBufferNode {} *x78; unsigned int x79; char *x80; unsigned long long x81; char *x82; unsigned long long x83; char *x84; unsigned long long x85; unsigned int x86; unsigned char x87; unsigned long long x88; unsigned long long x89; unsigned int x90; unsigned int x91; unsigned short x92; unsigned int x93; unsigned char x94; unsigned int x95; unsigned short x96; struct OpaqueAudioConverter {} *x97; char *x98; char *x99; struct AudioStreamPacketDescription { long long x_100_1_1; unsigned int x_100_1_2; unsigned int x_100_1_3; } x100; unsigned int x101; unsigned char x102; int x103; int x104; int x105; int x106; unsigned long long x107; unsigned long long x108; struct __CFDictionary {} *x109; unsigned char x110; unsigned char x111; unsigned int x112; unsigned char x113; unsigned char x114; unsigned char x115; unsigned int x116; unsigned int x117; unsigned int x118; unsigned char x119; unsigned int x120; unsigned int x121; unsigned int x122; unsigned char x123; struct AirPlayReceiverSessionScreenPrivate {} *x124; int x125; struct _opaque_pthread_t {} *x126; struct _opaque_pthread_t {} **x127; int x128; int x129; struct AirPlayRTPBuffer {} *x130; struct AirPlayRTPBuffer {} *x131; unsigned char x132; struct DashboardClientPrivate {} *x133; unsigned char x134; struct { unsigned char x_135_1_1; unsigned char x_135_1_2; unsigned char x_135_1_3; unsigned char x_135_1_4; unsigned char x_135_1_5; unsigned char x_135_1_6; unsigned char x_135_1_7; unsigned char x_135_1_8; unsigned char x_135_1_9; unsigned char x_135_1_10; unsigned char x_135_1_11; unsigned char x_135_1_12; unsigned char x_135_1_13; unsigned char x_135_1_14; unsigned char x_135_1_15; unsigned char x_135_1_16; unsigned int x_135_1_17; unsigned int x_135_1_18; unsigned short x_135_1_19; short x_135_1_20; short x_135_1_21; unsigned short x_135_1_22; unsigned short x_135_1_23; unsigned short x_135_1_24; unsigned short x_135_1_25; unsigned char x_135_1_26[6]; unsigned char x_135_1_27[6]; BOOL x_135_1_28; BOOL x_135_1_29; BOOL x_135_1_30; BOOL x_135_1_31; unsigned char x_135_1_32; unsigned char x_135_1_33; BOOL x_135_1_34[16]; unsigned char x_135_1_35; unsigned char x_135_1_36; unsigned char x_135_1_37; unsigned char x_135_1_38[1]; int x_135_1_39; unsigned short x_135_1_40[60]; } x135; unsigned long long x136; unsigned long long x137; unsigned int x138; unsigned int x139; unsigned int x140; } *_session;
    unsigned char _sessionStarted;
}

- (void)_handleAudioInterruption:(id)arg1;
- (void)_handleMediaServicesWereReset:(id)arg1;

@end
