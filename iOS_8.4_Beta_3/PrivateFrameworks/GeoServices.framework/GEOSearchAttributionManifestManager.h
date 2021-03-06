/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttributionManifestManager : NSObject {
    <GEOSearchAttributionServerProxy> *_serverProxy;
}

@property (nonatomic, readonly) <GEOSearchAttributionServerProxy> *serverProxy;

+ (id)sharedManager;
+ (void)useLocalProxy;
+ (void)useRemoteProxy;

- (void)dealloc;
- (id)init;
- (void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned int)arg2 completionHandler:(id)arg3 errorHandler:(id)arg4;
- (id)serverProxy;

@end
