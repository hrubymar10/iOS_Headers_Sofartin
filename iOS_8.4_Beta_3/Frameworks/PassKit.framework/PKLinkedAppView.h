/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKLinkedAppView : UITableViewCell <SKStoreProductViewControllerDelegate> {
    UIActivityIndicatorView *_activityIndicator;
    bool _appInstalled;
    NSURL *_appLaunchURL;
    UILabel *_appName;
    bool _appNotAvailable;
    UILabel *_appPublisher;
    SSSoftwareLibraryItem *_foundLibraryItem;
    NSDictionary *_foundStoreItem;
    UIImageView *_iconView;
    UILabel *_loadingLabel;
    bool _lookupInitiated;
    UIColor *_mainLabelColor;
    UILabel *_price;
    SKStoreProductViewController *_productViewController;
    NSArray *_storeIDs;
    UIColor *_subTextLabelColor;
    UILabel *_tapToOpen;
    PKLinkedAppUserRatingView *_userRatingView;
    UIButton *_viewButton;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) bool appInstalled;
@property (nonatomic, retain) NSURL *appLaunchURL;
@property (nonatomic, retain) UILabel *appName;
@property (nonatomic) bool appNotAvailable;
@property (nonatomic, retain) UILabel *appPublisher;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SSSoftwareLibraryItem *foundLibraryItem;
@property (nonatomic, retain) NSDictionary *foundStoreItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) UILabel *loadingLabel;
@property (nonatomic) bool lookupInitiated;
@property (nonatomic) UIColor *mainLabelColor;
@property (nonatomic, retain) UILabel *price;
@property (nonatomic, retain) SKStoreProductViewController *productViewController;
@property (nonatomic, retain) NSArray *storeIDs;
@property (nonatomic) UIColor *subTextLabelColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *tapToOpen;
@property (nonatomic, retain) PKLinkedAppUserRatingView *userRatingView;
@property (nonatomic, retain) UIButton *viewButton;

- (bool)_anyAppIsInstalled:(id)arg1;
- (int)_bindingTypeForNewsstandItem:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)_cleanupViews;
- (struct CGSize { double x1; double x2; })_desiredSizeForNewsstandItem:(id)arg1;
- (int)_iconOptionsForItem:(id)arg1;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize { double x1; double x2; })arg2 requireStrictMatch:(bool)arg3;
- (int)_iconVariantForScale:(double)arg1 item:(id)arg2;
- (id)_imageForSize:(struct CGSize { double x1; double x2; })arg1 fromArtwork:(id)arg2 requireStrictMatch:(bool)arg3;
- (bool)_itemArtNeedsShine:(id)arg1;
- (bool)_itemIsNewsstandApp:(id)arg1;
- (void)_layoutLoadingView;
- (void)_layoutLockupView;
- (void)_layoutNotAvailableView;
- (id)_newsstandArtworkForItem:(id)arg1;
- (id)_priceForItem:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeFromImage:(id)arg1;
- (id)activityIndicator;
- (bool)appInstalled;
- (id)appLaunchURL;
- (id)appName;
- (bool)appNotAvailable;
- (id)appPublisher;
- (void)dealloc;
- (id)foundLibraryItem;
- (id)foundStoreItem;
- (id)iconView;
- (id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)loadingLabel;
- (bool)lookupInitiated;
- (id)mainLabelColor;
- (void)performStoreLookup;
- (id)price;
- (id)productViewController;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)reload;
- (void)reloadWithDelay:(double)arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setAppInstalled:(bool)arg1;
- (void)setAppLaunchURL:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAppNotAvailable:(bool)arg1;
- (void)setAppPublisher:(id)arg1;
- (void)setFoundLibraryItem:(id)arg1;
- (void)setFoundStoreItem:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setLoadingLabel:(id)arg1;
- (void)setLookupInitiated:(bool)arg1;
- (void)setMainLabelColor:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setProductViewController:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setSubTextLabelColor:(id)arg1;
- (void)setTapToOpen:(id)arg1;
- (void)setUserRatingView:(id)arg1;
- (void)setViewButton:(id)arg1;
- (id)storeIDs;
- (id)subTextLabelColor;
- (id)tapToOpen;
- (id)userRatingView;
- (id)viewButton;

@end
