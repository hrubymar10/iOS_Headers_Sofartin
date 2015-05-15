/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSpeechVoice : NSObject {
    long long _footprint;
    long long _gender;
    NSString *_identifier;
    bool _isCustomVoice;
    bool _isDefault;
    NSString *_language;
    NSString *_name;
    <TTSSpeechService> *_service;
    bool _useVoiceBooster;
}

@property(assign,readwrite) long long footprint;
@property(assign,readwrite) long long gender;
@property(assign,retain) NSString * identifier;
@property(assign,readwrite) bool isCustomVoice;
@property(assign,readonly) bool isDefault;
@property(assign,retain) NSString * language;
@property(assign,retain) NSString * name;
@property(assign,readonly) bool useVoiceBooster;

- (void).cxx_destruct;
- (void)_initializeVoiceBooster;
- (void)_routeChange:(id)arg1;
- (id)description;
- (long long)footprint;
- (long long)gender;
- (id)identifier;
- (id)init;
- (bool)isCustomVoice;
- (bool)isDefault;
- (id)language;
- (id)name;
- (id)service;
- (void)setFootprint:(long long)arg1;
- (void)setGender:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsCustomVoice:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setService:(id)arg1;
- (bool)useVoiceBooster;

@end