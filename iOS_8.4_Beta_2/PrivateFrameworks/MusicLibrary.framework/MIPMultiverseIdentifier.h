/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPMultiverseIdentifier : PBCodable <NSCopying> {
    long long _accountId;
    struct { 
        unsigned int accountId : 1; 
        unsigned int purchaseHistoryId : 1; 
        unsigned int sagaId : 1; 
        unsigned int storeId : 1; 
        unsigned int mediaObjectType : 1; 
        unsigned int mediaType : 1; 
    } _has;
    NSMutableArray *_libraryIdentifiers;
    int _mediaObjectType;
    int _mediaType;
    NSString *_name;
    long long _purchaseHistoryId;
    long long _sagaId;
    long long _storeId;
}

@property(assign,readwrite) long long accountId;
@property(assign,readwrite) bool hasAccountId;
@property(assign,readwrite) bool hasMediaObjectType;
@property(assign,readwrite) bool hasMediaType;
@property(assign,readonly) bool hasName;
@property(assign,readwrite) bool hasPurchaseHistoryId;
@property(assign,readwrite) bool hasSagaId;
@property(assign,readwrite) bool hasStoreId;
@property(assign,retain) NSMutableArray * libraryIdentifiers;
@property(assign,readwrite) int mediaObjectType;
@property(assign,readwrite) int mediaType;
@property(assign,retain) NSString * name;
@property(assign,readwrite) long long purchaseHistoryId;
@property(assign,readwrite) long long sagaId;
@property(assign,readwrite) long long storeId;

- (void).cxx_destruct;
- (long long)accountId;
- (void)addLibraryIdentifiers:(id)arg1;
- (void)clearLibraryIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountId;
- (bool)hasMediaObjectType;
- (bool)hasMediaType;
- (bool)hasName;
- (bool)hasPurchaseHistoryId;
- (bool)hasSagaId;
- (bool)hasStoreId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)libraryIdentifiers;
- (id)libraryIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)libraryIdentifiersCount;
- (int)mediaObjectType;
- (int)mediaType;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (long long)purchaseHistoryId;
- (bool)readFrom:(id)arg1;
- (long long)sagaId;
- (void)setAccountId:(long long)arg1;
- (void)setHasAccountId:(bool)arg1;
- (void)setHasMediaObjectType:(bool)arg1;
- (void)setHasMediaType:(bool)arg1;
- (void)setHasPurchaseHistoryId:(bool)arg1;
- (void)setHasSagaId:(bool)arg1;
- (void)setHasStoreId:(bool)arg1;
- (void)setLibraryIdentifiers:(id)arg1;
- (void)setMediaObjectType:(int)arg1;
- (void)setMediaType:(int)arg1;
- (void)setName:(id)arg1;
- (void)setPurchaseHistoryId:(long long)arg1;
- (void)setSagaId:(long long)arg1;
- (void)setStoreId:(long long)arg1;
- (long long)storeId;
- (void)writeTo:(id)arg1;

@end
