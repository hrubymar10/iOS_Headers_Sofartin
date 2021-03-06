/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSInvocation : NSObject {
    id _container;
    void *_frame;
    unsigned char _reserved;
    unsigned char _retainedArgs;
    void *_retdata;
    id _signature;
}

@property (readonly) bool argumentsRetained;
@property (readonly, retain) NSMethodSignature *methodSignature;
@property SEL selector;
@property id target;

+ (id)_gkInvocationWithBlock:(id)arg1;
+ (id)_invocationWithMethodSignature:(id)arg1 frame:(void*)arg2;
+ (id)_mapkit_invocationWithSelector:(SEL)arg1 target:(id)arg2;
+ (id)_mapkit_invocationWithSelector:(SEL)arg1 target:(id)arg2 arguments:(char *)arg3;
+ (void)executeBlock:(id)arg1;
+ (id)invocationWithBlock:(id)arg1;
+ (id)invocationWithMethodSignature:(id)arg1;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3;
+ (void)tsu_executeBlock:(id)arg1;
+ (id)tsu_invocationWithBlock:(id)arg1;

- (void)__gkPrepareForFakeCallbackWithNoData:(bool)arg1 orError:(id)arg2;
- (void)_addAttachedObject:(id)arg1;
- (void)_gkCallbackWithError:(id)arg1 queue:(id)arg2;
- (void)_gkClearArgumentAtIndex:(unsigned long long)arg1;
- (void)_gkClearCopiedArguments;
- (void)_gkClearTarget;
- (void)_gkCopyArguments;
- (bool)_gkHasReplyBlock;
- (void)_gkInvokeOnce;
- (void)_gkInvokeOnceWithTarget:(id)arg1;
- (void)_gkPrepareForCallWithError:(id)arg1;
- (void)_gkPrintBlockSignature;
- (id)_gkReplyHandlerInvocation;
- (bool)_hasBlockArgument;
- (void)_webkit_invokeAndHandleException:(id)arg1;
- (bool)argumentsRetained;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)getArgument:(void*)arg1 atIndex:(long long)arg2;
- (void)getReturnValue:(void*)arg1;
- (id)init;
- (void)invoke;
- (void)invokeSuper;
- (void)invokeUsingIMP:(int (*)arg1;
- (void)invokeWithTarget:(id)arg1;
- (id)methodSignature;
- (bool)mf_shouldLogInvocation;
- (void)retainArguments;
- (SEL)selector;
- (void)setArgument:(void*)arg1 atIndex:(long long)arg2;
- (void)setReturnValue:(void*)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)target;
- (id)userInfo;
- (bool)wantsReturnValue;

@end
