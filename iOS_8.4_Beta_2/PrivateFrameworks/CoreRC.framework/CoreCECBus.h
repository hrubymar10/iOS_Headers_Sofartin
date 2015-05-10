/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreCECBus : CoreRCBus {
    bool _hasLink;
    union CECOSDName { 
        unsigned char bytes[15]; 
        struct { 
            unsigned char length; 
            unsigned char characters[14]; 
        } string; 
    } _osdNameASCII;
    unsigned long long _physicalAddress;
    unsigned long long _systemAudioModeStatus;
    struct CECLanguage { 
        unsigned char characters[3]; 
    } _tvLanguageCodeASCII;
}

@property(assign,readonly) CoreCECDevice * activeSource;
@property(assign,readwrite) bool hasLink;
@property(assign,readonly) NSString * osdName;
@property(assign,readwrite) union CECOSDName { unsigned char x1[15]; struct { unsigned char x_2_1_1; unsigned char x_2_1_2[14]; } x2; } osdNameASCII;
@property(assign,readwrite) unsigned long long physicalAddress;
@property(assign,readwrite) unsigned long long systemAudioModeStatus;
@property(assign,readonly) NSString * tvLanguageCode;
@property(assign,readwrite) struct CECLanguage { unsigned char x1[3]; } tvLanguageCodeASCII;

+ (bool)supportsSecureCoding;

- (id)activeSource;
- (id)addDeviceWithType:(unsigned long long)arg1 error:(id*)arg2;
- (id)delegate;
- (id)description;
- (id)deviceOnBusWithLogicalAddress:(unsigned char)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLink;
- (id)init;
- (id)initWithBus:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhysicalAddress:(unsigned long long)arg1;
- (void)notifyDelegateActiveSourceChangedFrom:(id)arg1 newActiveSource:(id)arg2;
- (void)notifyDelegateLinkStateUpdated;
- (id)osdName;
- (union CECOSDName { unsigned char x1[15]; struct { unsigned char x_2_1_1; unsigned char x_2_1_2[14]; } x2; })osdNameASCII;
- (unsigned long long)physicalAddress;
- (id)rootPhysicalDevice;
- (void)setDelegate:(id)arg1;
- (void)setHasLink:(bool)arg1;
- (bool)setOSDName:(id)arg1 error:(id*)arg2;
- (void)setOsdNameASCII:(union CECOSDName { unsigned char x1[15]; struct { unsigned char x_2_1_1; unsigned char x_2_1_2[14]; } x2; })arg1;
- (void)setPhysicalAddress:(unsigned long long)arg1;
- (void)setSystemAudioModeStatus:(unsigned long long)arg1;
- (bool)setTvLanguageCode:(id)arg1 error:(id*)arg2;
- (void)setTvLanguageCodeASCII:(struct CECLanguage { unsigned char x1[3]; })arg1;
- (unsigned long long)systemAudioModeStatus;
- (id)tvLanguageCode;
- (struct CECLanguage { unsigned char x1[3]; })tvLanguageCodeASCII;

@end
