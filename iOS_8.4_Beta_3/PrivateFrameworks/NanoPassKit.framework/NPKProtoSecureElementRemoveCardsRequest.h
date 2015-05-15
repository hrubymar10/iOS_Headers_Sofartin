/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoSecureElementRemoveCardsRequest : PBRequest <NSCopying> {
    NSMutableArray *_cardAIDs;
}

@property(assign,retain) NSMutableArray * cardAIDs;

- (void).cxx_destruct;
- (void)addCardAIDs:(id)arg1;
- (id)cardAIDs;
- (id)cardAIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardAIDsCount;
- (void)clearCardAIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCardAIDs:(id)arg1;
- (void)writeTo:(id)arg1;

@end