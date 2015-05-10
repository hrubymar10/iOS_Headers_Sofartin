/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFCancelationToken : NSObject <SBFCancelable> {
    NSMutableArray *_cancelationBlocks;
    bool _isCanceled;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

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