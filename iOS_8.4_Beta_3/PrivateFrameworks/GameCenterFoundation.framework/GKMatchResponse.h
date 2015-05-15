/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKMatchResponse : GKInternalRepresentation {
    NSData *_cdxTicket;
    GKMatchRequestInternal *_matchRequest;
    NSArray *_matches;
    GKDispatchGroup *_matchingGroup;
    NSArray *_relayPushes;
    NSString *_rid;
    int _sequence;
    NSDictionary *_serverRequest;
    NSData *_sessionToken;
    long long _state;
}

@property(assign,retain) NSData * cdxTicket;
@property(assign,retain) GKMatchRequestInternal * matchRequest;
@property(assign,retain) NSArray * matches;
@property(assign,readwrite) GKDispatchGroup * matchingGroup;
@property(assign,retain) NSArray * relayPushes;
@property(assign,retain) NSString * rid;
@property(assign,readonly) int sequence;
@property(assign,retain) NSDictionary * serverRequest;
@property(assign,retain) NSData * sessionToken;
@property(assign,readwrite) long long state;

+ (id)secureCodedPropertyKeys;

- (int)_incrementSequence;
- (id)cdxTicket;
- (void)dealloc;
- (bool)isCancelled;
- (bool)isFinished;
- (id)matchRequest;
- (id)matches;
- (id)matchingGroup;
- (id)relayPushes;
- (id)rid;
- (int)sequence;
- (id)serverRequest;
- (id)sessionToken;
- (void)setCdxTicket:(id)arg1;
- (void)setMatchRequest:(id)arg1;
- (void)setMatches:(id)arg1;
- (void)setMatchingGroup:(id)arg1;
- (void)setRelayPushes:(id)arg1;
- (void)setRid:(id)arg1;
- (void)setServerRequest:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (bool)transitionToState:(long long)arg1;

@end