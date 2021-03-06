/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPhysicalButton : NSObject <_UIResponderForwardable> {
    bool _abandonForwardingRecord;
    NSMutableArray *_forwardingRecord;
    NSMutableArray *_gestureRecognizers;
    long long _phase;
    UIResponder *_responder;
    double _timestamp;
    long long _type;
    UIWindow *_window;
}

@property (setter=_setForwardablePhase:, nonatomic) long long _forwardablePhase;
@property (setter=_setResponder:, nonatomic, retain) UIResponder *_responder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long phase;
@property (nonatomic, retain) UIResponder *responder;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic) long long type;
@property (nonatomic, retain) UIWindow *window;

- (void)_abandonForwardingRecord;
- (long long)_forwardablePhase;
- (id)_forwardingRecord;
- (bool)_isAbandoningForwardingRecord;
- (id)_mutableForwardingRecord;
- (void)_removeGestureRecognizer:(id)arg1;
- (id)_responder;
- (SEL)_responderSelectorForPhase:(long long)arg1;
- (void)_setForwardablePhase:(long long)arg1;
- (void)_setResponder:(id)arg1;
- (bool)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
- (void)dealloc;
- (id)gestureRecognizers;
- (long long)phase;
- (id)responder;
- (void)setGestureRecognizers:(id)arg1;
- (void)setPhase:(long long)arg1;
- (void)setResponder:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setWindow:(id)arg1;
- (double)timestamp;
- (long long)type;
- (id)window;

@end
