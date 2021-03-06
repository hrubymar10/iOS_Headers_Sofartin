/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISFetchReviewOperation : ISOperation {
    long long _assetType;
    bool _backgroundReview;
    unsigned long long _itemIdentifier;
    ISReview *_review;
    unsigned long long _softwareVersionIdentifier;
    NSURL *_url;
}

@property long long assetType;
@property (getter=isBackgroundReview) bool backgroundReview;
@property unsigned long long itemIdentifier;
@property (retain) ISReview *review;
@property unsigned long long softwareVersionIdentifier;
@property (retain) NSURL *url;

- (void)_fetchReviewInformation;
- (long long)assetType;
- (void)dealloc;
- (bool)isBackgroundReview;
- (unsigned long long)itemIdentifier;
- (id)review;
- (void)run;
- (void)setAssetType:(long long)arg1;
- (void)setBackgroundReview:(bool)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (void)setReview:(id)arg1;
- (void)setSoftwareVersionIdentifier:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (unsigned long long)softwareVersionIdentifier;
- (id)url;

@end
