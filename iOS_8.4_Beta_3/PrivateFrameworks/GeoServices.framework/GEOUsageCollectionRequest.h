/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUsageCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray *_abExperimentAssignments;
    NSMutableArray *_directionsFeedbackCollections;
    NSMutableArray *_leaveNowFeedbackCollections;
    NSMutableArray *_mapsLaunchFeedbackCollections;
    NSMutableArray *_mapsUsageFeedbackCollections;
    NSMutableArray *_placeDataCacheFeedbackCollections;
    NSMutableArray *_stateTimingFeedbackCollections;
    NSMutableArray *_suggestionsFeedbackCollections;
    NSMutableArray *_tileSetStateFeedbackCollections;
    NSMutableArray *_transitAppLaunchFeedbackCollections;
    NSMutableArray *_usageCollections;
}

@property (nonatomic, retain) NSMutableArray *abExperimentAssignments;
@property (nonatomic, retain) NSMutableArray *directionsFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *leaveNowFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *mapsLaunchFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *mapsUsageFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *placeDataCacheFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *stateTimingFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *suggestionsFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *tileSetStateFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *transitAppLaunchFeedbackCollections;
@property (nonatomic, retain) NSMutableArray *usageCollections;

- (id)abExperimentAssignmentAtIndex:(unsigned long long)arg1;
- (id)abExperimentAssignments;
- (unsigned long long)abExperimentAssignmentsCount;
- (void)addAbExperimentAssignment:(id)arg1;
- (void)addDirectionsFeedbackCollection:(id)arg1;
- (void)addLeaveNowFeedbackCollection:(id)arg1;
- (void)addMapsLaunchFeedbackCollection:(id)arg1;
- (void)addMapsUsageFeedbackCollection:(id)arg1;
- (void)addPlaceDataCacheFeedbackCollection:(id)arg1;
- (void)addStateTimingFeedbackCollection:(id)arg1;
- (void)addSuggestionsFeedbackCollection:(id)arg1;
- (void)addTileSetStateFeedbackCollection:(id)arg1;
- (void)addTransitAppLaunchFeedbackCollection:(id)arg1;
- (void)addUsageCollection:(id)arg1;
- (void)clearAbExperimentAssignments;
- (void)clearDirectionsFeedbackCollections;
- (void)clearLeaveNowFeedbackCollections;
- (void)clearMapsLaunchFeedbackCollections;
- (void)clearMapsUsageFeedbackCollections;
- (void)clearPlaceDataCacheFeedbackCollections;
- (void)clearStateTimingFeedbackCollections;
- (void)clearSuggestionsFeedbackCollections;
- (void)clearTileSetStateFeedbackCollections;
- (void)clearTransitAppLaunchFeedbackCollections;
- (void)clearUsageCollections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (id)directionsFeedbackCollections;
- (unsigned long long)directionsFeedbackCollectionsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)leaveNowFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (id)leaveNowFeedbackCollections;
- (unsigned long long)leaveNowFeedbackCollectionsCount;
- (id)mapsLaunchFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (id)mapsLaunchFeedbackCollections;
- (unsigned long long)mapsLaunchFeedbackCollectionsCount;
- (id)mapsUsageFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (id)mapsUsageFeedbackCollections;
- (unsigned long long)mapsUsageFeedbackCollectionsCount;
- (void)mergeFrom:(id)arg1;
- (id)placeDataCacheFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (id)placeDataCacheFeedbackCollections;
- (unsigned long long)placeDataCacheFeedbackCollectionsCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAbExperimentAssignments:(id)arg1;
- (void)setDirectionsFeedbackCollections:(id)arg1;
- (void)setLeaveNowFeedbackCollections:(id)arg1;
- (void)setMapsLaunchFeedbackCollections:(id)arg1;
- (void)setMapsUsageFeedbackCollections:(id)arg1;
- (void)setPlaceDataCacheFeedbackCollections:(id)arg1;
- (void)setStateTimingFeedbackCollections:(id)arg1;
- (void)setSuggestionsFeedbackCollections:(id)arg1;
- (void)setTileSetStateFeedbackCollections:(id)arg1;
- (void)setTransitAppLaunchFeedbackCollections:(id)arg1;
- (void)setUsageCollections:(id)arg1;
- (id)stateTimingFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (id)stateTimingFeedbackCollections;
- (unsigned long long)stateTimingFeedbackCollectionsCount;
- (id)suggestionsFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (id)suggestionsFeedbackCollections;
- (unsigned long long)suggestionsFeedbackCollectionsCount;
- (id)tileSetStateFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (id)tileSetStateFeedbackCollections;
- (unsigned long long)tileSetStateFeedbackCollectionsCount;
- (id)transitAppLaunchFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (id)transitAppLaunchFeedbackCollections;
- (unsigned long long)transitAppLaunchFeedbackCollectionsCount;
- (id)usageCollectionAtIndex:(unsigned long long)arg1;
- (id)usageCollections;
- (unsigned long long)usageCollectionsCount;
- (void)writeTo:(id)arg1;

@end
