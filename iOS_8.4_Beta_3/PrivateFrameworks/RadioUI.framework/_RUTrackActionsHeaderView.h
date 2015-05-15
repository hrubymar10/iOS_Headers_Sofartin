/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface _RUTrackActionsHeaderView : UIView {
    UILabel *_artistLabel;
    UIImageView *_artworkImageView;
    UILabel *_songLabel;
}

@property (nonatomic, copy) NSString *artistText;
@property (nonatomic, retain) UIImage *artworkImage;
@property (nonatomic, copy) NSString *songText;

+ (id)_artistLabelFont;
+ (id)_songLabelFont;
+ (double)defaultHeightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (id)artistText;
- (id)artworkImage;
- (void)layoutSubviews;
- (void)setArtistText:(id)arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setSongText:(id)arg1;
- (id)songText;

@end
