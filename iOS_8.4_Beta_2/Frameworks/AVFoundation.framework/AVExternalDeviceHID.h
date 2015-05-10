/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExternalDeviceHID : NSObject {
    AVExternalDeviceHIDInternal *_externalDeviceHID;
}

@property(assign,readonly) NSString * UUID;
@property(assign,readwrite) long long inputMode;
@property(assign,readonly) NSString * screenID;

- (id)UUID;
- (id)_externalDevice;
- (id)_figEndpointHIDInputMode;
- (void)dealloc;
- (void)finalize;
- (id)initWithExternalDeviceAndHIDDictionary:(id)arg1 hidDictionary:(id)arg2;
- (long long)inputMode;
- (id)screenID;
- (void)setInputMode:(long long)arg1;

@end