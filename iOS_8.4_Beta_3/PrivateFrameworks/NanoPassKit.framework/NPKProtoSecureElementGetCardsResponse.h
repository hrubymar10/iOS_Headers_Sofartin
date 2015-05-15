/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoSecureElementGetCardsResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _activationStates;
    NSMutableArray *_cardAIDs;
    struct { 
        unsigned int pending : 1; 
    } _has;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _lifecycleStates;
    bool _pending;
}

@property(assign,readonly) unsigned int* activationStates;
@property(assign,readonly) unsigned long long activationStatesCount;
@property(assign,retain) NSMutableArray * cardAIDs;
@property(assign,readwrite) bool hasPending;
@property(assign,readonly) unsigned int* lifecycleStates;
@property(assign,readonly) unsigned long long lifecycleStatesCount;
@property(assign,readwrite) bool pending;

- (void).cxx_destruct;
- (unsigned int*)activationStates;
- (unsigned int)activationStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)activationStatesCount;
- (void)addActivationStates:(unsigned int)arg1;
- (void)addCardAIDs:(id)arg1;
- (void)addLifecycleStates:(unsigned int)arg1;
- (id)cardAIDs;
- (id)cardAIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardAIDsCount;
- (void)clearActivationStates;
- (void)clearCardAIDs;
- (void)clearLifecycleStates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPending;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int*)lifecycleStates;
- (unsigned int)lifecycleStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)lifecycleStatesCount;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setActivationStates:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setCardAIDs:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setLifecycleStates:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setPending:(bool)arg1;
- (void)writeTo:(id)arg1;

@end