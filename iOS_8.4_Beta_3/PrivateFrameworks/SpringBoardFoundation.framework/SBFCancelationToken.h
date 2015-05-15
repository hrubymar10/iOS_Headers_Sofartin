/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFCancelationToken : NSObject <SBFCancelable> {
    NSMutableArray *_cancelationBlocks;
    bool _isCanceled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)tokenWithCancelationBlock:(id)arg1;
+ (id)tokenWrappingCancelable:(id)arg1;

- (void)addCancelationBlock:(id)arg1;
- (void)callCancelationBlocks:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (bool)isCanceled;
- (id)nts_cancel;

@end
