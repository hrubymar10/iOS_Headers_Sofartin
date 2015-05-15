/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReviewsHistogramViewController : UIViewController {
    SKUIClientContext *_clientContext;
    SKUIReviewsHistogramView *_histogramView;
    SKUIReviewList *_reviewList;
}

@property(assign,readonly) UIControl * appSupportButton;
@property(assign,retain) SKUIClientContext * clientContext;
@property(assign,readwrite) long long personalStarRating;
@property(assign,retain) SKUIReviewList * reviewList;
@property(assign,readonly) UIControl * segmentedControl;
@property(assign,copy) NSArray * segmentedControlTitles;
@property(assign,readwrite) long long selectedSegmentIndex;
@property(assign,readonly) UIControl * starRatingControl;
@property(assign,copy) NSString * versionString;
@property(assign,readonly) UIControl * writeAReviewButton;

- (void).cxx_destruct;
- (id)_histogramView;
- (void)_reloadHistogram;
- (id)appSupportButton;
- (id)clientContext;
- (void)loadView;
- (long long)personalStarRating;
- (id)reviewList;
- (id)segmentedControl;
- (id)segmentedControlTitles;
- (long long)selectedSegmentIndex;
- (void)setClientContext:(id)arg1;
- (void)setPersonalStarRating:(long long)arg1;
- (void)setReviewList:(id)arg1;
- (void)setSegmentedControlTitles:(id)arg1;
- (void)setSelectedSegmentIndex:(long long)arg1;
- (void)setVersionString:(id)arg1;
- (id)starRatingControl;
- (id)versionString;
- (id)writeAReviewButton;

@end