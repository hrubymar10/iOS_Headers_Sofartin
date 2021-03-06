/* Generated by RuntimeBrowser.
 */

@protocol GEOPlaceDataProxy <NSObject>

@required

- (void)applyRAPUpdatedMapItems:(NSArray *)arg1;
- (void)calculateFreeableSpaceWithHandler:(id)arg1;
- (void)fetchAllCacheEntriesWithRequesterHandler:(id)arg1;
- (void)performPlaceDataRequest:(GEOPDPlaceRequest *)arg1 traits:(GEOMapServiceTraits *)arg2 timeout:(double)arg3 networkActivity:(id)arg4 requesterHandler:(/* Warning: Unrecognized filer type: '?' using 'void*' */ void*)arg5;
- (void)requestMUIDs:(NSArray *)arg1 resultProviderID:(int)arg2 includeETA:(bool)arg3 traits:(GEOMapServiceTraits *)arg4 requesterHandler:(id)arg5;
- (void)requestPhoneNumbers:(NSArray *)arg1 allowCellularDataForLookup:(bool)arg2 traits:(GEOMapServiceTraits *)arg3 requesterHandler:(id)arg4;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(id)arg2;
- (void)trackPlaceData:(GEOPDPlace *)arg1;

@end
