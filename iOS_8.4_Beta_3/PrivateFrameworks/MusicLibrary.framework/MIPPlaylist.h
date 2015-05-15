/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPPlaylist : PBCodable <NSCopying> {
    NSMutableArray *_childIdentifiers;
    NSString *_cloudGlobalId;
    int _distinguishedKind;
    MIPMultiverseIdentifier *_geniusSeedTrackIdentifier;
    struct { 
        unsigned int storeId : 1; 
        unsigned int distinguishedKind : 1; 
        unsigned int sortType : 1; 
        unsigned int type : 1; 
        unsigned int hidden : 1; 
        unsigned int reversedSorting : 1; 
    } _has;
    bool _hidden;
    NSMutableArray *_items;
    NSString *_name;
    MIPMultiverseIdentifier *_parentIdentifier;
    bool _reversedSorting;
    MIPSmartPlaylistInfo *_smartPlaylistInfo;
    int _sortType;
    long long _storeId;
    int _type;
}

@property (nonatomic, retain) NSMutableArray *childIdentifiers;
@property (nonatomic, retain) NSString *cloudGlobalId;
@property (nonatomic) int distinguishedKind;
@property (nonatomic, retain) MIPMultiverseIdentifier *geniusSeedTrackIdentifier;
@property (nonatomic, readonly) bool hasCloudGlobalId;
@property (nonatomic) bool hasDistinguishedKind;
@property (nonatomic, readonly) bool hasGeniusSeedTrackIdentifier;
@property (nonatomic) bool hasHidden;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasParentIdentifier;
@property (nonatomic) bool hasReversedSorting;
@property (nonatomic, readonly) bool hasSmartPlaylistInfo;
@property (nonatomic) bool hasSortType;
@property (nonatomic) bool hasStoreId;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hidden;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) MIPMultiverseIdentifier *parentIdentifier;
@property (nonatomic) bool reversedSorting;
@property (nonatomic, retain) MIPSmartPlaylistInfo *smartPlaylistInfo;
@property (nonatomic) int sortType;
@property (nonatomic) long long storeId;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (void)addChildIdentifiers:(id)arg1;
- (void)addItems:(id)arg1;
- (id)childIdentifiers;
- (id)childIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)childIdentifiersCount;
- (void)clearChildIdentifiers;
- (void)clearItems;
- (id)cloudGlobalId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)distinguishedKind;
- (id)geniusSeedTrackIdentifier;
- (bool)hasCloudGlobalId;
- (bool)hasDistinguishedKind;
- (bool)hasGeniusSeedTrackIdentifier;
- (bool)hasHidden;
- (bool)hasName;
- (bool)hasParentIdentifier;
- (bool)hasReversedSorting;
- (bool)hasSmartPlaylistInfo;
- (bool)hasSortType;
- (bool)hasStoreId;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)hidden;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)parentIdentifier;
- (bool)readFrom:(id)arg1;
- (bool)reversedSorting;
- (void)setChildIdentifiers:(id)arg1;
- (void)setCloudGlobalId:(id)arg1;
- (void)setDistinguishedKind:(int)arg1;
- (void)setGeniusSeedTrackIdentifier:(id)arg1;
- (void)setHasDistinguishedKind:(bool)arg1;
- (void)setHasHidden:(bool)arg1;
- (void)setHasReversedSorting:(bool)arg1;
- (void)setHasSortType:(bool)arg1;
- (void)setHasStoreId:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParentIdentifier:(id)arg1;
- (void)setReversedSorting:(bool)arg1;
- (void)setSmartPlaylistInfo:(id)arg1;
- (void)setSortType:(int)arg1;
- (void)setStoreId:(long long)arg1;
- (void)setType:(int)arg1;
- (id)smartPlaylistInfo;
- (int)sortType;
- (long long)storeId;
- (int)type;
- (void)writeTo:(id)arg1;

@end
