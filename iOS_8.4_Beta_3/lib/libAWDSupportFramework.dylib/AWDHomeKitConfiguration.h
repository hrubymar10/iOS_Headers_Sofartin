/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDHomeKitConfiguration : PBCodable <NSCopying> {
    unsigned int _databaseSize;
    NSString *_guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int databaseSize : 1; 
        unsigned int numAccessories : 1; 
        unsigned int numAccessoryServiceGroups : 1; 
        unsigned int numHomes : 1; 
        unsigned int numLocationGroups : 1; 
        unsigned int numLocations : 1; 
        unsigned int numScenes : 1; 
        unsigned int numServices : 1; 
        unsigned int numTriggers : 1; 
        unsigned int numUsers : 1; 
    } _has;
    unsigned int _numAccessories;
    unsigned int _numAccessoryServiceGroups;
    unsigned int _numHomes;
    unsigned int _numLocationGroups;
    unsigned int _numLocations;
    unsigned int _numScenes;
    unsigned int _numServices;
    unsigned int _numTriggers;
    unsigned int _numUsers;
    unsigned long long _timestamp;
}

@property (nonatomic) unsigned int databaseSize;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasDatabaseSize;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasNumAccessories;
@property (nonatomic) bool hasNumAccessoryServiceGroups;
@property (nonatomic) bool hasNumHomes;
@property (nonatomic) bool hasNumLocationGroups;
@property (nonatomic) bool hasNumLocations;
@property (nonatomic) bool hasNumScenes;
@property (nonatomic) bool hasNumServices;
@property (nonatomic) bool hasNumTriggers;
@property (nonatomic) bool hasNumUsers;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int numAccessories;
@property (nonatomic) unsigned int numAccessoryServiceGroups;
@property (nonatomic) unsigned int numHomes;
@property (nonatomic) unsigned int numLocationGroups;
@property (nonatomic) unsigned int numLocations;
@property (nonatomic) unsigned int numScenes;
@property (nonatomic) unsigned int numServices;
@property (nonatomic) unsigned int numTriggers;
@property (nonatomic) unsigned int numUsers;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)databaseSize;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasDatabaseSize;
- (bool)hasGuid;
- (bool)hasNumAccessories;
- (bool)hasNumAccessoryServiceGroups;
- (bool)hasNumHomes;
- (bool)hasNumLocationGroups;
- (bool)hasNumLocations;
- (bool)hasNumScenes;
- (bool)hasNumServices;
- (bool)hasNumTriggers;
- (bool)hasNumUsers;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numAccessories;
- (unsigned int)numAccessoryServiceGroups;
- (unsigned int)numHomes;
- (unsigned int)numLocationGroups;
- (unsigned int)numLocations;
- (unsigned int)numScenes;
- (unsigned int)numServices;
- (unsigned int)numTriggers;
- (unsigned int)numUsers;
- (bool)readFrom:(id)arg1;
- (void)setDatabaseSize:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasDatabaseSize:(bool)arg1;
- (void)setHasNumAccessories:(bool)arg1;
- (void)setHasNumAccessoryServiceGroups:(bool)arg1;
- (void)setHasNumHomes:(bool)arg1;
- (void)setHasNumLocationGroups:(bool)arg1;
- (void)setHasNumLocations:(bool)arg1;
- (void)setHasNumScenes:(bool)arg1;
- (void)setHasNumServices:(bool)arg1;
- (void)setHasNumTriggers:(bool)arg1;
- (void)setHasNumUsers:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNumAccessories:(unsigned int)arg1;
- (void)setNumAccessoryServiceGroups:(unsigned int)arg1;
- (void)setNumHomes:(unsigned int)arg1;
- (void)setNumLocationGroups:(unsigned int)arg1;
- (void)setNumLocations:(unsigned int)arg1;
- (void)setNumScenes:(unsigned int)arg1;
- (void)setNumServices:(unsigned int)arg1;
- (void)setNumTriggers:(unsigned int)arg1;
- (void)setNumUsers:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
