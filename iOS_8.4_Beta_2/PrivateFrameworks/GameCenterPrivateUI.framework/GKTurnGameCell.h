/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKTurnGameCell : GKBaseGameCell {
    GKLabel *_activeMatchesLabel;
    GKLabel *_localPlayerTurnsLabel;
    unsigned long long _numberOfActiveMatches;
    unsigned long long _numberOfLocalPlayerTurns;
    UIImageView *_statusImageView;
    GKContiguousContainerView *_textContainerView;
}

@property(assign,retain) GKLabel * activeMatchesLabel;
@property(assign,retain) GKLabel * localPlayerTurnsLabel;
@property(assign,readwrite) unsigned long long numberOfActiveMatches;
@property(assign,readwrite) unsigned long long numberOfLocalPlayerTurns;
@property(assign,retain) UIImageView * statusImageView;
@property(assign,retain) GKContiguousContainerView * textContainerView;

+ (double)defaultRowHeight;
+ (id)itemHeightList;
+ (void)registerCellClassesForCollectionView:(id)arg1;

- (id)activeMatchesLabel;
- (void)dealloc;
- (void)didUpdateModel;
- (void)establishConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)localPlayerTurnsLabel;
- (unsigned long long)numberOfActiveMatches;
- (unsigned long long)numberOfLocalPlayerTurns;
- (void)setActiveMatchesLabel:(id)arg1;
- (void)setLocalPlayerTurnsLabel:(id)arg1;
- (void)setNumberOfActiveMatches:(unsigned long long)arg1;
- (void)setNumberOfLocalPlayerTurns:(unsigned long long)arg1;
- (void)setStatusImageView:(id)arg1;
- (void)setTextContainerView:(id)arg1;
- (id)statusImageView;
- (id)textContainerView;

@end