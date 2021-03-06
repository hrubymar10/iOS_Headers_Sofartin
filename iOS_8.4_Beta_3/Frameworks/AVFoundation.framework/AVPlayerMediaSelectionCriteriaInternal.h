/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerMediaSelectionCriteriaInternal : NSObject {
    bool _precludeMultichannelAudio;
    NSArray *_precludedMediaCharacteristics;
    NSArray *_precludedMediaSubTypes;
    bool _preferMultichannelAudio;
    NSArray *_preferredLanguages;
    NSArray *_preferredMediaCharacteristics;
    NSArray *_preferredMediaSubTypes;
    NSArray *_requiredMediaCharacteristics;
}

@property (nonatomic) bool precludeMultichannelAudio;
@property (nonatomic, retain) NSArray *precludedMediaCharacteristics;
@property (nonatomic, retain) NSArray *precludedMediaSubTypes;
@property (nonatomic) bool preferMultichannelAudio;
@property (nonatomic, retain) NSArray *preferredLanguages;
@property (nonatomic, retain) NSArray *preferredMediaCharacteristics;
@property (nonatomic, retain) NSArray *preferredMediaSubTypes;
@property (nonatomic, retain) NSArray *requiredMediaCharacteristics;

- (void)dealloc;
- (bool)precludeMultichannelAudio;
- (id)precludedMediaCharacteristics;
- (id)precludedMediaSubTypes;
- (bool)preferMultichannelAudio;
- (id)preferredLanguages;
- (id)preferredMediaCharacteristics;
- (id)preferredMediaSubTypes;
- (id)requiredMediaCharacteristics;
- (void)setPrecludeMultichannelAudio:(bool)arg1;
- (void)setPrecludedMediaCharacteristics:(id)arg1;
- (void)setPrecludedMediaSubTypes:(id)arg1;
- (void)setPreferMultichannelAudio:(bool)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (void)setPreferredMediaCharacteristics:(id)arg1;
- (void)setPreferredMediaSubTypes:(id)arg1;
- (void)setRequiredMediaCharacteristics:(id)arg1;

@end
