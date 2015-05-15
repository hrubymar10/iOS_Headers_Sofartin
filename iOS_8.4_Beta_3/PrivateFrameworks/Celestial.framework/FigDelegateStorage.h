/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigDelegateStorage : NSObject {
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _lock;
}

@property (readonly) id delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;

+ (void)initialize;

- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (void)invokeDelegateCallbackWithBlock:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

@end
