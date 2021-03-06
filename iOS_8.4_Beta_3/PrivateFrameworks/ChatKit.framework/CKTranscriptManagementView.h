/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptManagementView : UIView {
    UIView *_attachmentsCollectionView;
    double _bottomPadding;
    UIView *_mapView;
    UIView *_nameField;
    double _navigationBarTopInset;
    double _scrollYOffset;
    bool _suppressMapMovement;
}

@property (nonatomic, retain) UIView *attachmentsCollectionView;
@property (nonatomic) double bottomPadding;
@property (nonatomic, retain) UIView *mapView;
@property (nonatomic, retain) UIView *nameField;
@property (nonatomic) double navigationBarTopInset;
@property (nonatomic) double scrollYOffset;
@property (nonatomic) bool suppressMapMovement;

- (id)attachmentsCollectionView;
- (double)bottomPadding;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mapView;
- (id)nameField;
- (double)navigationBarTopInset;
- (double)scrollYOffset;
- (void)setAttachmentsCollectionView:(id)arg1;
- (void)setBottomPadding:(double)arg1;
- (void)setMapView:(id)arg1;
- (void)setNameField:(id)arg1;
- (void)setNavigationBarTopInset:(double)arg1;
- (void)setScrollYOffset:(double)arg1;
- (void)setSuppressMapMovement:(bool)arg1;
- (bool)suppressMapMovement;

@end
