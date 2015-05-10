/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPCompanionSyncedItem : PBCodable <NSCopying, SYObject> {
    MSPBookmarkStorage *_bookmark;
    MSPPinStorage *_pin;
    MSPSearchRequestStorage *_searchRequest;
    NSString *_syncId;
    PBUnknownFields *_unknownFields;
}

@property(assign,retain) MSPBookmarkStorage * bookmark;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) bool hasBookmark;
@property(assign,readonly) bool hasPin;
@property(assign,readonly) bool hasSearchRequest;
@property(assign,readonly) bool hasSyncId;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) MSPPinStorage * pin;
@property(assign,retain) MSPSearchRequestStorage * searchRequest;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSString * syncId;
@property(assign,readonly) PBUnknownFields * unknownFields;

- (void).cxx_destruct;
- (id)bookmark;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBookmark;
- (bool)hasPin;
- (bool)hasSearchRequest;
- (bool)hasSyncId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)pin;
- (bool)readFrom:(id)arg1;
- (id)searchRequest;
- (void)setBookmark:(id)arg1;
- (void)setPin:(id)arg1;
- (void)setSearchRequest:(id)arg1;
- (void)setSyncId:(id)arg1;
- (id)syncId;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
