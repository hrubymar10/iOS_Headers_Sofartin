/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceSearchAutocompleteTicket : NSObject <GEOMapServiceCompletionTicket> {
    bool _canceled;
    GEOPDPlaceRequest *_request;
    GEOPDPlaceResponse *_response;
    NSString *_searchQuery;
    GEOMapServiceTraits *_traits;
}

@property (getter=isCanceled, nonatomic, readonly) bool canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 searchQuery:(id)arg3;
- (bool)isCanceled;
- (bool)matchesFragment:(id)arg1;
- (void)submitWithAutoCompletionHandler:(id)arg1 networkActivity:(id)arg2;
- (id)traits;

@end
