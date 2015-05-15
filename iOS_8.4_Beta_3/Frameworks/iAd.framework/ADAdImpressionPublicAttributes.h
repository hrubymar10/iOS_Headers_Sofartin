/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADAdImpressionPublicAttributes : NSObject <NSSecureCoding> {
    NSString *_accessibilityLabel;
    int _action;
    bool _actionLeavesApplication;
    bool _actionViewControllerHidesStatusBar;
    unsigned long long _actionViewControllerPresentationOrientationMask;
    NSURL *_audioURL;
    NSString *_descriptionForLCD;
    NSString *_headlineForLCD;
    NSURL *_logoImageURL;
    double _minimumIntervalBetweenPresentations;
    long long _modalPresentationStyle;
    double _skipThreshold;
    NSURL *_staticImageURL;
    bool _unbranded;
    NSString *_uniqueIdentifier;
    NSArray *_videoAssets;
}

@property(assign,copy) NSString * accessibilityLabel;
@property(assign,readwrite) int action;
@property(assign,readwrite) bool actionLeavesApplication;
@property(assign,readwrite) bool actionViewControllerHidesStatusBar;
@property(assign,readwrite) unsigned long long actionViewControllerPresentationOrientationMask;
@property(assign,retain) NSURL * audioURL;
@property(assign,copy) NSString * descriptionForLCD;
@property(assign,copy) NSString * headlineForLCD;
@property(assign,retain) NSURL * logoImageURL;
@property(assign,readwrite) double minimumIntervalBetweenPresentations;
@property(assign,readwrite) long long modalPresentationStyle;
@property(assign,readwrite) double skipThreshold;
@property(assign,retain) NSURL * staticImageURL;
@property(assign,readwrite) bool unbranded;
@property(assign,copy) NSString * uniqueIdentifier;
@property(assign,retain) NSArray * videoAssets;

+ (bool)supportsSecureCoding;

- (id)_actionDescription;
- (id)accessibilityLabel;
- (int)action;
- (bool)actionLeavesApplication;
- (bool)actionViewControllerHidesStatusBar;
- (unsigned long long)actionViewControllerPresentationOrientationMask;
- (id)audioURL;
- (void)dealloc;
- (id)description;
- (id)descriptionForLCD;
- (void)encodeWithCoder:(id)arg1;
- (id)headlineForLCD;
- (id)initWithCoder:(id)arg1;
- (id)logoImageURL;
- (double)minimumIntervalBetweenPresentations;
- (long long)modalPresentationStyle;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAction:(int)arg1;
- (void)setActionLeavesApplication:(bool)arg1;
- (void)setActionViewControllerHidesStatusBar:(bool)arg1;
- (void)setActionViewControllerPresentationOrientationMask:(unsigned long long)arg1;
- (void)setAudioURL:(id)arg1;
- (void)setDescriptionForLCD:(id)arg1;
- (void)setHeadlineForLCD:(id)arg1;
- (void)setLogoImageURL:(id)arg1;
- (void)setMinimumIntervalBetweenPresentations:(double)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setSkipThreshold:(double)arg1;
- (void)setStaticImageURL:(id)arg1;
- (void)setUnbranded:(bool)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setVideoAssets:(id)arg1;
- (double)skipThreshold;
- (id)staticImageURL;
- (bool)unbranded;
- (id)uniqueIdentifier;
- (id)videoAssets;

@end
