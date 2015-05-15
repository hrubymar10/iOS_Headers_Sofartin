/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPGetCommentsRequest : PBRequest <NSCopying> {
    NSData *_continuationMarker;
    struct { 
        unsigned int limit : 1; 
    } _has;
    CKDPCommentedOnId *_identifier;
    unsigned int _limit;
    CKDPQuerySort *_orderBy;
    NSString *_path;
}

@property(assign,retain) NSData * continuationMarker;
@property(assign,readonly) bool hasContinuationMarker;
@property(assign,readonly) bool hasIdentifier;
@property(assign,readwrite) bool hasLimit;
@property(assign,readonly) bool hasOrderBy;
@property(assign,readonly) bool hasPath;
@property(assign,retain) CKDPCommentedOnId * identifier;
@property(assign,readwrite) unsigned int limit;
@property(assign,retain) CKDPQuerySort * orderBy;
@property(assign,retain) NSString * path;

+ (id)options;

- (void).cxx_destruct;
- (id)continuationMarker;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContinuationMarker;
- (bool)hasIdentifier;
- (bool)hasLimit;
- (bool)hasOrderBy;
- (bool)hasPath;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (unsigned int)limit;
- (void)mergeFrom:(id)arg1;
- (id)orderBy;
- (id)path;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setContinuationMarker:(id)arg1;
- (void)setHasLimit:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLimit:(unsigned int)arg1;
- (void)setOrderBy:(id)arg1;
- (void)setPath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
