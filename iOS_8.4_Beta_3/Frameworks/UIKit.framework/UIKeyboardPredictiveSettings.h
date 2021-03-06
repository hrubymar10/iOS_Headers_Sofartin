/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardPredictiveSettings : _UISettings {
    bool _alwaysShowTypedText;
    NSString *_currentInputMode;
    bool _currentInputModeEnablePrediction;
    bool _didShowHUD;
    int _lastVolume;
    int _minLetters;
    bool _nextPage;
}

@property (nonatomic) bool alwaysShowTypedText;
@property (nonatomic) int messageCount;
@property (nonatomic) int minLetters;

+ (void)hideViaNotification;
+ (void)loadSettings;
+ (id)sharedInstance;

- (bool)_isShowingHUD;
- (id)_sharedHUD;
- (bool)alwaysShowTypedText;
- (void)cancel;
- (void)hide;
- (id)initWithDefaultValues;
- (int)messageCount;
- (int)minLetters;
- (void)next;
- (void)pressRingerButton;
- (void)previous;
- (void)saveSettings;
- (void)setAlwaysShowTypedText:(bool)arg1;
- (void)setMessageCount:(int)arg1;
- (void)setMinLetters:(int)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)settingsHUDConfiguration;
- (void)show;
- (void)show:(bool)arg1;
- (id)valueForKey:(id)arg1;

@end
