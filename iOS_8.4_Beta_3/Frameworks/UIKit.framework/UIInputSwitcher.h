/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputSwitcher : NSObject {
    NSString *_newMode;
    int m_state;
    UIDelayedAction *m_switcherDelay;
    UIInputSwitcherView *m_switcherView;
}

+ (id)activeInstance;
+ (id)sharedInstance;

- (void)cancelSwitcherTimer;
- (void)clearHideSwitcherTimer;
- (void)clearSwitcherTimer;
- (void)dealloc;
- (bool)handleModifiersChangedEvent:(id)arg1;
- (void)handleRotate:(id)arg1;
- (bool)handleSwitchCommand:(bool)arg1;
- (void)hideSwitcher;
- (id)init;
- (bool)isVisible;
- (id)newMode;
- (void)setNewMode:(id)arg1;
- (void)showSwitcher;
- (bool)switchMode:(id)arg1 withDelay:(bool)arg2;
- (void)touchHideSwitcherTimer;
- (void)touchSwitcherTimer;

@end
