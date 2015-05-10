/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUStatusBarManager : NSObject {
    NSTimer *_callDurationUpdateTimer;
    NSString *_currentStatusBarString;
    <TUStatusBarManagerDelegate> *_delegate;
    bool _inCallServiceActive;
}

@property(assign,retain) NSTimer * callDurationUpdateTimer;
@property(assign,retain) NSString * currentStatusBarString;
@property(assign,readwrite) <TUStatusBarManagerDelegate> * delegate;
@property(assign,retain) TUCall * displayedCall;
@property(getter=isInCallServiceActive,assign,readwrite) bool inCallServiceActive;

- (id)callDurationUpdateTimer;
- (void)clearStatusBarInCallState;
- (id)currentStatusBarString;
- (void)dealloc;
- (id)delegate;
- (id)displayedCall;
- (void)emergencyCallBackModeChangedNotification;
- (id)init;
- (bool)isInCallServiceActive;
- (void)setCallDurationUpdateTimer:(id)arg1;
- (void)setCurrentStatusBarString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInCallServiceActive:(bool)arg1;
- (void)setStatusBarStyleOverridesForCall:(id)arg1;
- (bool)shouldSetStatusBarOverridesForCall:(id)arg1;
- (void)startListeningForNotifications;
- (id)statusBarPreambleForCall:(id)arg1;
- (void)updateStatusBarCallDuration;
- (void)updateStatusBarDurationForCall:(id)arg1;
- (void)updateStatusBarState;
- (void)updateStatusBarStateForCall:(id)arg1;

@end