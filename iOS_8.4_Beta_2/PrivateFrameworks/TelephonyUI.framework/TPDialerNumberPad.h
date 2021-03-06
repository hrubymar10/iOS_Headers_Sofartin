/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol> {
    <TPDialerKeypadDelegate> *_delegate;
    bool _playsSounds;
    TPDialerSoundController *_soundController;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <TPDialerKeypadDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool playsSounds;
@property(assign,retain) TPDialerSoundController * soundController;
@property(assign,readonly) Class superclass;

+ (id)dialerNumberPadFullCharacters;
+ (id)dialerNumberPadNumericCharacters;

- (void)buttonDown:(id)arg1;
- (void)buttonLongPressed:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)buttonUp:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)highlightKeyAtIndex:(long long)arg1;
- (long long)indexForHighlightedKey;
- (bool)playsSounds;
- (void)setDelegate:(id)arg1;
- (void)setPlaysSounds:(bool)arg1;
- (void)setSoundController:(id)arg1;
- (void)setSupportsHardPause:(bool)arg1;
- (id)soundController;
- (bool)supportsHardPause;

@end
