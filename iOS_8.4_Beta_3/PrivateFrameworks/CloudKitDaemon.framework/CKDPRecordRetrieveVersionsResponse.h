/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveVersionsResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int isDeleted : 1; 
    } _has;
    bool _isDeleted;
    NSMutableArray *_recordVersions;
}

@property(assign,readwrite) bool hasIsDeleted;
@property(assign,readwrite) bool isDeleted;
@property(assign,retain) NSMutableArray * recordVersions;

- (void).cxx_destruct;
- (void)addRecordVersions:(id)arg1;
- (void)clearRecordVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsDeleted;
- (unsigned long long)hash;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordVersions;
- (id)recordVersionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordVersionsCount;
- (void)setHasIsDeleted:(bool)arg1;
- (void)setIsDeleted:(bool)arg1;
- (void)setRecordVersions:(id)arg1;
- (void)writeTo:(id)arg1;

@end
