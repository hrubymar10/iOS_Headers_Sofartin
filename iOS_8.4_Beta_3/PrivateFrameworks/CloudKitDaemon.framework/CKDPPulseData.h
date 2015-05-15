/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPulseData : PBCodable <NSCopying> {
    long long _customState;
    struct { 
        unsigned int customState : 1; 
        unsigned int stateTTLMillis : 1; 
        unsigned int state : 1; 
    } _has;
    CKDPDate *_lastCustom;
    CKDPDate *_lastEdited;
    CKDPDate *_lastInvisible;
    CKDPDate *_lastViewed;
    int _state;
    long long _stateTTLMillis;
    CKDPIdentifier *_user;
}

@property(assign,readwrite) long long customState;
@property(assign,readwrite) bool hasCustomState;
@property(assign,readonly) bool hasLastCustom;
@property(assign,readonly) bool hasLastEdited;
@property(assign,readonly) bool hasLastInvisible;
@property(assign,readonly) bool hasLastViewed;
@property(assign,readwrite) bool hasState;
@property(assign,readwrite) bool hasStateTTLMillis;
@property(assign,readonly) bool hasUser;
@property(assign,retain) CKDPDate * lastCustom;
@property(assign,retain) CKDPDate * lastEdited;
@property(assign,retain) CKDPDate * lastInvisible;
@property(assign,retain) CKDPDate * lastViewed;
@property(assign,readwrite) int state;
@property(assign,readwrite) long long stateTTLMillis;
@property(assign,retain) CKDPIdentifier * user;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)customState;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCustomState;
- (bool)hasLastCustom;
- (bool)hasLastEdited;
- (bool)hasLastInvisible;
- (bool)hasLastViewed;
- (bool)hasState;
- (bool)hasStateTTLMillis;
- (bool)hasUser;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastCustom;
- (id)lastEdited;
- (id)lastInvisible;
- (id)lastViewed;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCustomState:(long long)arg1;
- (void)setHasCustomState:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasStateTTLMillis:(bool)arg1;
- (void)setLastCustom:(id)arg1;
- (void)setLastEdited:(id)arg1;
- (void)setLastInvisible:(id)arg1;
- (void)setLastViewed:(id)arg1;
- (void)setState:(int)arg1;
- (void)setStateTTLMillis:(long long)arg1;
- (void)setUser:(id)arg1;
- (int)state;
- (long long)stateTTLMillis;
- (id)user;
- (void)writeTo:(id)arg1;

@end
