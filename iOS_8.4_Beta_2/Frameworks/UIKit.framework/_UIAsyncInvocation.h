/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAsyncInvocation : NSObject {
    id _invocationBlock;
    bool _invocationBlockHasBeenCalled;
    _UIAsyncInvocationObserver *_observer;
}

+ (id)emptyInvocation;
+ (id)invocationWithBlock:(id)arg1;

- (void)dealloc;
- (id)invoke;

@end
