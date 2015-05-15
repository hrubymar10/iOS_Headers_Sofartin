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

@property(assign,retain) NSMutableArray * childIdentifiers;
@property(assign,retain) NSString * cloudGlobalId;
@property(assign,readwrite) int distinguishedKind;
@property(assign,retain) MIPMultiverseIdentifier * geniusSeedTrackIdentifier;
@property(assign,readonly) bool hasCloudGlobalId;
@property(assign,readwrite) bool hasDistinguishedKind;
@property(assign,readonly) bool hasGeniusSeedTrackIdentifier;
@property(assign,readwrite) bool hasHidden;
@property(assign,readonly) bool hasName;
@property(assign,readonly) bool hasParentIdentifier;
@property(assign,readwrite) bool hasReversedSorting;
@property(assign,readonly) bool hasSmartPlaylistInfo;
@property(assign,readwrite) bool hasSortType;
@property(assign,readwrite) bool hasStoreId;
@property(assign,readwrite) bool hasType;
@property(assign,readwrite) bool hidden;
@property(assign,retain) NSMutableArray * items;
@property(assign,retain) NSString * name;
@property(assign,retain) MIPMultiverseIdentifier * parentIdentifier;
@property(assign,readwrite) bool reversedSorting;
@property(assign,retain) MIPSmartPlaylistInfo * smartPlaylistInfo;
@property(assign,readwrite) int sortType;
@property(assign,readwrite) long long storeId;
@property(assign,readwrite) int type;

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