/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechRequest : NSObject <NSSecureCoding> {
    NSAttributedString *_attributedText;
    unsigned int _audioQueueFlags;
    unsigned int _audioSessionID;
    bool _audioSessionIDIsValid;
    long long _footprint;
    long long _gender;
    NSString *_languageCode;
    bool _maintainsInput;
    NSURL *_outputPath;
    id _pauseHandler;
    double _pitch;
    double _rate;
    id _stopHandler;
    NSString *_text;
    bool _useCustomVoice;
    NSString *_voiceName;
    double _volume;
}

@property(assign,copy) NSAttributedString * attributedText;
@property(assign,readwrite) unsigned int audioQueueFlags;
@property(assign,readwrite) unsigned int audioSessionID;
@property(assign,readwrite) bool audioSessionIDIsValid;
@property(assign,readwrite) long long footprint;
@property(assign,readwrite) long long gender;
@property(assign,copy) NSString * languageCode;
@property(assign,readwrite) bool maintainsInput;
@property(assign,copy) NSURL * outputPath;
@property(assign,copy) id pauseHandler;
@property(assign,readwrite) double pitch;
@property(assign,readwrite) double rate;
@property(assign,copy) id stopHandler;
@property(assign,copy) NSString * text;
@property(assign,readwrite) bool useCustomVoice;
@property(assign,copy) NSString * voiceName;
@property(assign,readwrite) double volume;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributedText;
- (unsigned int)audioQueueFlags;
- (unsigned int)audioSessionID;
- (bool)audioSessionIDIsValid;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)footprint;
- (long long)gender;
- (id)initWithCoder:(id)arg1;
- (id)languageCode;
- (bool)maintainsInput;
- (id)outputPath;
- (id)pauseHandler;
- (double)pitch;
- (double)rate;
- (void)setAttributedText:(id)arg1;
- (void)setAudioQueueFlags:(unsigned int)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setAudioSessionIDIsValid:(bool)arg1;
- (void)setFootprint:(long long)arg1;
- (void)setGender:(long long)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setMaintainsInput:(bool)arg1;
- (void)setOutputPath:(id)arg1;
- (void)setPauseHandler:(id)arg1;
- (void)setPitch:(double)arg1;
- (void)setRate:(double)arg1;
- (void)setStopHandler:(id)arg1;
- (void)setText:(id)arg1;
- (void)setUseCustomVoice:(bool)arg1;
- (void)setVoiceName:(id)arg1;
- (void)setVolume:(double)arg1;
- (id)stopHandler;
- (id)text;
- (bool)useCustomVoice;
- (id)voiceName;
- (double)volume;

@end
