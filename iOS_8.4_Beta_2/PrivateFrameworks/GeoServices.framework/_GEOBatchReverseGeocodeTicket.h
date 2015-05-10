/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOBatchReverseGeocodeTicket : NSObject <GEOMapServiceTicket> {
    GEOBatchRevGeocodeRequest *_batchReverseGeocodeRequest;
    GEOMapRegion *_resultBoundingRegion;
    bool _shiftLocationsIfNeeded;
    GEOMapServiceTraits *_traits;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) GEOMapRegion * resultBoundingRegion;
@property(assign,readonly) Class superclass;
@property(assign,readonly) GEOMapServiceTraits * traits;

- (void)_batchReverseGeocodeWithRequest:(id)arg1 handler:(id)arg2 networkActivity:(id)arg3;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)initWithBatchReverseGeocodeRequest:(id)arg1 shiftLocationsIfNeeded:(bool)arg2 traits:(id)arg3;
- (bool)isEqualForHistoryToTicket:(id)arg1;
- (id)resultBoundingRegion;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithHandler:(id)arg1 timeout:(long long)arg2 networkActivity:(id)arg3;
- (void)submitWithRefinedHandler:(id)arg1 networkActivity:(id)arg2;
- (void)submitWithRefinedHandler:(id)arg1 timeout:(long long)arg2 networkActivity:(id)arg3;
- (id)traits;

@end