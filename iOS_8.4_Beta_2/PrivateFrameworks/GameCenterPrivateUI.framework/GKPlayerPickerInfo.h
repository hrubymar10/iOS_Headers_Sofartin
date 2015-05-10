/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKPlayerPickerInfo : NSObject {
    NSAttributedString *_achievementString;
    bool _canSelectPlayer;
    GKGameMatch *_gameMatch;
    bool _hasAchievement;
    bool _hasRank;
    bool _nearby;
    GKPlayer *_player;
    NSAttributedString *_rankString;
    unsigned long long _selectionStatus;
    NSDate *_sortDate;
}

@property(assign,retain) NSAttributedString * achievementString;
@property(assign,readonly) bool canSelectPlayer;
@property(assign,retain) GKGameMatch * gameMatch;
@property(assign,readwrite) bool hasAchievement;
@property(assign,readwrite) bool hasRank;
@property(assign,readwrite) bool nearby;
@property(assign,readonly) bool playedGame;
@property(assign,retain) GKPlayer * player;
@property(assign,retain) NSAttributedString * rankString;
@property(assign,readonly) unsigned long long selectionStatus;
@property(assign,retain) NSDate * sortDate;

- (void)_setSelectionStatus:(unsigned long long)arg1;
- (id)achievementString;
- (bool)canSelectPlayer;
- (void)dealloc;
- (id)description;
- (id)gameMatch;
- (bool)hasAchievement;
- (bool)hasRank;
- (bool)nearby;
- (bool)playedGame;
- (id)player;
- (void)prepareForLoad;
- (id)rankString;
- (unsigned long long)selectionStatus;
- (void)setAchievementString:(id)arg1;
- (void)setGameMatch:(id)arg1;
- (void)setHasAchievement:(bool)arg1;
- (void)setHasRank:(bool)arg1;
- (void)setNearby:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRankString:(id)arg1;
- (void)setSortDate:(id)arg1;
- (id)sortDate;

@end
