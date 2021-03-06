/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicContextualActionsHeaderView : UIView {
    bool _allowsSelection;
    UIImageView *_artworkView;
    MusicContextualActionsHeaderBlendingHighlightView *_backgroundBlendingHighlightView;
    <MusicContextualActionsHeaderViewDelegate> *_delegate;
    struct { 
        unsigned int wasSelected : 1; 
    } _delegateRespondsToSelector;
    UILabel *_detailLabel;
    MusicEntityValueContext *_entityValueContext;
    bool _highlighted;
    UILabel *_titleLabel;
}

@property (nonatomic) bool allowsSelection;
@property (nonatomic) <MusicContextualActionsHeaderViewDelegate> *delegate;
@property (nonatomic, readonly) MusicEntityValueContext *entityValueContext;
@property (getter=isHighlighted, nonatomic) bool highlighted;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (void)_reloadEntityValueProviderProperties;
- (id)_touchForEvent:(id)arg1;
- (bool)allowsSelection;
- (id)delegate;
- (id)entityValueContext;
- (id)initWithEntityValueContext:(id)arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (void)setAllowsSelection:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
