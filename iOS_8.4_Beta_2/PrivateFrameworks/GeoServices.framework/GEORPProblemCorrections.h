/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemCorrections : PBCodable <NSCopying> {
    NSString *_comments;
    GEORPCorrectedCoordinate *_correctedCoordinate;
    NSMutableArray *_correctedFields;
    GEORPCorrectedLabel *_correctedLabel;
    GEORPMapLocation *_correctedMapLocation;
    GEORPCorrectedSearch *_correctedSearch;
    GEORPDirectionsProblem *_directionsProblem;
    NSMutableArray *_photoWithMetadatas;
    GEORPPlaceProblem *_placeProblem;
}

@property(assign,retain) NSString * comments;
@property(assign,retain) GEORPCorrectedCoordinate * correctedCoordinate;
@property(assign,retain) NSMutableArray * correctedFields;
@property(assign,retain) GEORPCorrectedLabel * correctedLabel;
@property(assign,retain) GEORPMapLocation * correctedMapLocation;
@property(assign,retain) GEORPCorrectedSearch * correctedSearch;
@property(assign,retain) GEORPDirectionsProblem * directionsProblem;
@property(assign,readonly) bool hasComments;
@property(assign,readonly) bool hasCorrectedCoordinate;
@property(assign,readonly) bool hasCorrectedLabel;
@property(assign,readonly) bool hasCorrectedMapLocation;
@property(assign,readonly) bool hasCorrectedSearch;
@property(assign,readonly) bool hasDirectionsProblem;
@property(assign,readonly) bool hasPlaceProblem;
@property(assign,retain) NSMutableArray * photoWithMetadatas;
@property(assign,retain) GEORPPlaceProblem * placeProblem;

- (void)addCorrectedField:(id)arg1;
- (void)addPhotoWithMetadata:(id)arg1;
- (void)clearCorrectedFields;
- (void)clearPhotoWithMetadatas;
- (id)comments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedCoordinate;
- (id)correctedFieldAtIndex:(unsigned long long)arg1;
- (id)correctedFields;
- (unsigned long long)correctedFieldsCount;
- (id)correctedLabel;
- (id)correctedMapLocation;
- (id)correctedSearch;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsProblem;
- (bool)hasComments;
- (bool)hasCorrectedCoordinate;
- (bool)hasCorrectedLabel;
- (bool)hasCorrectedMapLocation;
- (bool)hasCorrectedSearch;
- (bool)hasDirectionsProblem;
- (bool)hasPlaceProblem;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photoWithMetadataAtIndex:(unsigned long long)arg1;
- (id)photoWithMetadatas;
- (unsigned long long)photoWithMetadatasCount;
- (id)placeProblem;
- (bool)readFrom:(id)arg1;
- (void)setComments:(id)arg1;
- (void)setCorrectedCoordinate:(id)arg1;
- (void)setCorrectedFields:(id)arg1;
- (void)setCorrectedLabel:(id)arg1;
- (void)setCorrectedMapLocation:(id)arg1;
- (void)setCorrectedSearch:(id)arg1;
- (void)setDirectionsProblem:(id)arg1;
- (void)setPhotoWithMetadatas:(id)arg1;
- (void)setPlaceProblem:(id)arg1;
- (void)writeTo:(id)arg1;

@end
