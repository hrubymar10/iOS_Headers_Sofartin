/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAudioOutputSettings : AVOutputSettings

@property(assign,readonly) NSDictionary * audioSettingsDictionary;

+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
+ (id)audioConverterPropertiesForAudioSettingsDictionary:(id)arg1;
+ (id)audioOutputSettingsWithAudioSettingsDictionary:(id)arg1;
+ (id)audioOutputSettingsWithTrustedAudioSettingsDictionary:(id)arg1;
+ (id)defaultAudioOutputSettings;
+ (id)registeredOutputSettingsClasses;

- (id)audioSettingsDictionary;
- (id)compatibleMediaTypes;
- (id)initWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
- (bool)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2;

@end
