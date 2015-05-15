/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedMatchInternal : GKInternalRepresentation {
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSDate *_creationDate;
    BOOL _currentParticipant;
    GKPlayerInternal *_currentPlayer;
    NSDate *_deletionDate;
    NSArray *_exchanges;
    GKGameInternal *_game;
    NSDate *_lastTurnDate;
    NSString *_lastTurnPlayerID;
    NSDictionary *_localizableMessage;
    NSData *_matchData;
    NSString *_matchDataVersion;
    NSString *_matchID;
    unsigned char _maxPlayers;
    NSString *_message;
    unsigned char _minPlayers;
    NSArray *_participants;
    NSString *_reason;
    NSString *_status;
    unsigned int _turnNumber;
}

@property(assign,retain) NSString * bundleID;
@property(assign,retain) NSString * bundleVersion;
@property(assign,retain) NSDate * creationDate;
@property(assign,readwrite) BOOL currentParticipant;
@property(assign,retain) GKPlayerInternal * currentPlayer;
@property(assign,retain) NSDate * deletionDate;
@property(assign,retain) NSArray * exchanges;
@property(assign,retain) GKGameInternal * game;
@property(assign,retain) NSDate * lastTurnDate;
@property(assign,retain) NSString * lastTurnPlayerID;
@property(assign,retain) NSDictionary * localizableMessage;
@property(assign,retain) NSData * matchData;
@property(assign,retain) NSString * matchDataVersion;
@property(assign,retain) NSString * matchID;
@property(assign,readwrite) unsigned char maxPlayers;
@property(assign,retain) NSString * message;
@property(assign,readwrite) unsigned char minPlayers;
@property(assign,retain) NSArray * participants;
@property(assign,retain) NSString * reason;
@property(assign,retain) NSString * status;
@property(assign,readwrite) unsigned int turnNumber;

+ (id)secureCodedPropertyKeys;

- (id)bundleID;
- (id)bundleVersion;
- (id)creationDate;
- (BOOL)currentParticipant;
- (id)currentPlayer;
- (void)dealloc;
- (id)deletionDate;
- (id)exchanges;
- (id)game;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastTurnDate;
- (id)lastTurnPlayerID;
- (id)localizableMessage;
- (id)matchData;
- (id)matchDataVersion;
- (id)matchID;
- (unsigned char)maxPlayers;
- (id)message;
- (unsigned char)minPlayers;
- (id)participants;
- (id)reason;
- (void)setBundleID:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCurrentParticipant:(BOOL)arg1;
- (void)setCurrentPlayer:(id)arg1;
- (void)setDeletionDate:(id)arg1;
- (void)setExchanges:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setLastTurnDate:(id)arg1;
- (void)setLastTurnPlayerID:(id)arg1;
- (void)setLocalizableMessage:(id)arg1;
- (void)setMatchData:(id)arg1;
- (void)setMatchDataVersion:(id)arg1;
- (void)setMatchID:(id)arg1;
- (void)setMaxPlayers:(unsigned char)arg1;
- (void)setMessage:(id)arg1;
- (void)setMinPlayers:(unsigned char)arg1;
- (void)setParticipants:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTurnNumber:(unsigned int)arg1;
- (id)status;
- (unsigned int)turnNumber;

@end