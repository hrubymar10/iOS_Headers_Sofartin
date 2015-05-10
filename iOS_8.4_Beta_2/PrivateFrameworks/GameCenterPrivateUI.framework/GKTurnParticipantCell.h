/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKTurnParticipantCell : GKBasePlayerCell {
    GKLabel *_bottomLabel;
    UIButton *_detailButton;
    SEL _detailPressedAction;
    bool _isDetail;
    GKTurnBasedMatch *_match;
    GKTurnBasedParticipant *_participant;
    UIImageView *_statusImageView;
    GKContiguousContainerView *_textContainerView;
    GKLabel *_topLabel;
}

@property(assign,retain) GKLabel * bottomLabel;
@property(assign,retain) UIButton * detailButton;
@property(assign,readwrite) SEL detailPressedAction;
@property(assign,readwrite) bool isDetail;
@property(assign,retain) GKTurnBasedMatch * match;
@property(assign,retain) GKTurnBasedParticipant * participant;
@property(assign,retain) UIImageView * statusImageView;
@property(assign,retain) GKContiguousContainerView * textContainerView;
@property(assign,retain) GKLabel * topLabel;

+ (double)defaultRowHeight;
+ (id)itemHeightList;
+ (void)registerCellClassesForCollectionView:(id)arg1;

- (id)bottomLabel;
- (void)configureForDetail;
- (void)configureForMatch;
- (void)dealloc;
- (id)detailButton;
- (void)detailPressed:(id)arg1;
- (SEL)detailPressedAction;
- (void)didUpdateModel;
- (void)establishConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDetail;
- (id)match;
- (bool)matchWantsLocalPlayerAttention;
- (id)participant;
- (void)setBottomLabel:(id)arg1;
- (void)setDetailButton:(id)arg1;
- (void)setDetailPressedAction:(SEL)arg1;
- (void)setIsDetail:(bool)arg1;
- (void)setMatch:(id)arg1;
- (void)setParticipant:(id)arg1;
- (void)setStatusImageView:(id)arg1;
- (void)setTextContainerView:(id)arg1;
- (void)setTopLabel:(id)arg1;
- (id)statusImageView;
- (id)textContainerView;
- (id)topLabel;
- (id)viewForPopover;

@end
