/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISPostReviewOperation : ISOperation <ISStoreURLOperationDelegate> {
    bool _backgroundReview;
    ISReview *_review;
}

@property(getter=isBackgroundReview,assign,readwrite) bool backgroundReview;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) ISReview * review;
@property(assign,readonly) Class superclass;

- (id)_httpBody;
- (void)dealloc;
- (bool)isBackgroundReview;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)review;
- (void)run;
- (void)setBackgroundReview:(bool)arg1;
- (void)setReview:(id)arg1;

@end