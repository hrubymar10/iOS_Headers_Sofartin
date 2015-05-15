/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface _TRConnectionTargetAction : NSObject {
    SEL _action;
    NSObject<OS_dispatch_queue> *_queue;
    id _target;
}

@property(assign,readonly) SEL action;
@property(assign,readonly) NSObject<OS_dispatch_queue> * queue;
@property(assign,readonly) id target;

- (void).cxx_destruct;
- (SEL)action;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 queue:(id)arg3;
- (id)queue;
- (id)target;

@end
