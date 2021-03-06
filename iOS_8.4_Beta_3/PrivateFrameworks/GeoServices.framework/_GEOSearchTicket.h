/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOSearchTicket : NSObject <GEOMapServiceSearchTicket, _GEOLegacyMapServiceTicket> {
    GEOPlaceSearchResponse *_response;
    GEOMapRegion *_resultBoundingRegion;
    GEOSearchRequest *_searchRequest;
    GEOMapServiceTraits *_traits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOPlaceSearchResponse *response;
@property (nonatomic, readonly) GEOMapRegion *resultBoundingRegion;
@property (nonatomic, readonly) NSString *searchQuery;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)applyToCorrectedSearch:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)initWithSearchRequest:(id)arg1 traits:(id)arg2;
- (id)request;
- (id)response;
- (id)resultBoundingRegion;
- (id)searchQuery;
- (void)setResponse:(id)arg1;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithHandler:(id)arg1 timeout:(long long)arg2 networkActivity:(id)arg3;
- (void)submitWithRefinedHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithRefinedHandler:(id)arg1 timeout:(long long)arg2 networkActivity:(id)arg3;
- (id)traits;

@end
