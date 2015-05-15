/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataCacheRegister : NSObject {
    NSMutableDictionary *_caches;
}

+ (void)setDiskCachePath:(id)arg1;

- (id)allCacheEntries;
- (id)allCaches;
- (id)cacheForProviderID:(int)arg1;
- (void)calculateFreeableSpaceWithHandler:(id)arg1;
- (void)dealloc;
- (void)deletePhoneNumberMapping;
- (void)evictAllEntries;
- (id)init;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(id)arg2;

@end
