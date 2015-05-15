/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumListViewControllerSpec : NSObject {
    UIImage *_addSharedAlbumPlaceholderImage;
    long long _albumDeletionConfirmationStyle;
    bool _allowsAlbumCountSubtitle;
    long long _cellContentViewLayout;
    int _collageFastImageFormat;
    int _collageQualityImageFormat;
    double _collageSpacing;
    UIImage *_emptyAlbumPlaceholderImage;
    UIImage *_emptySharedAlbumPlaceholderImage;
    PUPhotoDecoration *_emptyStackPhotoDecoration;
    int _fastImageFormat;
    PUFeedViewControllerSpec *_feedViewControllerSpec;
    PUPhotosGridViewControllerSpec *_gridViewControllerSpec;
    UIImage *_hiddenAlbumPlaceholderImage;
    double _maxSearchBarWidth;
    PUPhotosPanoramaViewControllerSpec *_panoramaViewControllerSpec;
    PUPhotosPickerViewControllerSpec *_photosPickerViewControllerSpec;
    int _qualityImageFormat;
    double _sectionFooterHeight;
    double _sectionHeaderHeight;
    bool _shouldUseCollageForCloudFeedPlaceholder;
    bool _shouldUseShortTitleForStandInAlbumList;
    bool _shouldUseTableView;
    bool _showsAlbumBadgeOnCellContentView;
    bool _showsAlbumBadgeOnStackView;
    bool _showsDeleteButtonOnCellContentView;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _stackOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _stackPerspectiveInsets;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _stackPerspectiveOffset;
    PUPhotoDecoration *_stackPhotoDecoration;
    struct CGSize { 
        double width; 
        double height; 
    } _stackSize;
    unsigned long long _stackViewStyle;
    bool _usesStackTransitionToGrid;
}

@property(assign,readonly) UIImage * addSharedAlbumPlaceholderImage;
@property(assign,readonly) long long albumDeletionConfirmationStyle;
@property(assign,readonly) bool allowsAlbumCountSubtitle;
@property(assign,readonly) bool canDisplaySearchActionInNavigationBar;
@property(assign,readonly) long long cellContentViewLayout;
@property(assign,readonly) int collageFastImageFormat;
@property(assign,readonly) int collageQualityImageFormat;
@property(assign,readonly) double collageSpacing;
@property(assign,readonly) struct CGSize { double x1; double x2; } contentSizeForViewInPopover;
@property(assign,readonly) bool displaysSearchInPopover;
@property(assign,readonly) UIImage * emptyAlbumPlaceholderImage;
@property(assign,readonly) UIImage * emptySharedAlbumPlaceholderImage;
@property(assign,readonly) PUPhotoDecoration * emptyStackPhotoDecoration;
@property(assign,readonly) int fastImageFormat;
@property(assign,readonly) PUFeedViewControllerSpec * feedViewControllerSpec;
@property(assign,readonly) PUPhotosGridViewControllerSpec * gridViewControllerSpec;
@property(assign,readonly) UIImage * hiddenAlbumPlaceholderImage;
@property(assign,readonly) double maxSearchBarWidth;
@property(assign,readonly) PUPhotosPanoramaViewControllerSpec * panoramaViewControllerSpec;
@property(assign,readonly) PUPhotosPickerViewControllerSpec * photosPickerViewControllerSpec;
@property(assign,readonly) int qualityImageFormat;
@property(assign,readonly) double sectionFooterHeight;
@property(assign,readonly) double sectionHeaderHeight;
@property(assign,readonly) bool shouldUseCollageForCloudFeedPlaceholder;
@property(assign,readonly) bool shouldUseShortTitleForStandInAlbumList;
@property(assign,readonly) bool shouldUseTableView;
@property(assign,readonly) bool showsAlbumBadgeOnCellContentView;
@property(assign,readonly) bool showsAlbumBadgeOnStackView;
@property(assign,readonly) bool showsDeleteButtonOnCellContentView;
@property(assign,readonly) struct UIOffset { double x1; double x2; } stackOffset;
@property(assign,readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } stackPerspectiveInsets;
@property(assign,readonly) struct UIOffset { double x1; double x2; } stackPerspectiveOffset;
@property(assign,readonly) PUPhotoDecoration * stackPhotoDecoration;
@property(assign,readonly) struct CGSize { double x1; double x2; } stackSize;
@property(assign,readonly) unsigned long long stackViewStyle;
@property(assign,readonly) PUAlbumListViewControllerSpec * standInAlbumListViewControllerSpec;
@property(assign,readonly) bool usesStackTransitionToGrid;

- (void).cxx_destruct;
- (id)_centeredGlyphImage:(id)arg1 withBackgroundColor:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 imageAlpha:(double)arg4;
- (id)_centeredTintedGlyphImage:(id)arg1 withBackgroundColor:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (id)_nameOfAddSharedAlbumPlaceholderImage;
- (id)_nameOfEmptyAlbumPlaceholderImage;
- (id)_nameOfEmptySharedAlbumPlaceholderImage;
- (id)_nameOfHiddenAlbumPlaceholderImage;
- (struct CGPoint { double x1; double x2; })_pixelRoundedOriginForCenteredImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)addSharedAlbumPlaceholderImage;
- (long long)albumDeletionConfirmationStyle;
- (bool)allowsAlbumCountSubtitle;
- (bool)canDisplaySearchActionInNavigationBar;
- (long long)cellContentViewLayout;
- (struct CGSize { double x1; double x2; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)collageFastImageFormat;
- (int)collageQualityImageFormat;
- (double)collageSpacing;
- (void)configureCollectionViewAlbumListLayout:(id)arg1 forBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopover;
- (bool)displaysSearchInPopover;
- (id)emptyAlbumPlaceholderImage;
- (id)emptySharedAlbumPlaceholderImage;
- (id)emptyStackPhotoDecoration;
- (int)fastImageFormat;
- (id)feedViewControllerSpec;
- (id)gridViewControllerSpec;
- (id)hiddenAlbumPlaceholderImage;
- (double)maxSearchBarWidth;
- (id)panoramaViewControllerSpec;
- (id)photosPickerViewControllerSpec;
- (int)qualityImageFormat;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (bool)shouldUseCollageForCloudFeedPlaceholder;
- (bool)shouldUseShortTitleForStandInAlbumList;
- (bool)shouldUseTableView;
- (bool)showsAlbumBadgeOnCellContentView;
- (bool)showsAlbumBadgeOnStackView;
- (bool)showsDeleteButtonOnCellContentView;
- (struct UIOffset { double x1; double x2; })stackOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })stackPerspectiveInsets;
- (struct UIOffset { double x1; double x2; })stackPerspectiveOffset;
- (id)stackPhotoDecoration;
- (struct CGSize { double x1; double x2; })stackSize;
- (unsigned long long)stackViewStyle;
- (id)standInAlbumListViewControllerSpec;
- (bool)usesStackTransitionToGrid;

@end
