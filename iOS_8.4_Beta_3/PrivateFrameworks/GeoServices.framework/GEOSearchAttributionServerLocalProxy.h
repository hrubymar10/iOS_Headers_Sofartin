/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOSearchAttributionServerProxy> {
    NSMapTable *_listeners;
    NSMutableArray *_updateManifestCompletionHandlers;
    NSMutableArray *_updateManifestErrorHandlers;
    bool _updatingManifest;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)_loadAttributionInfoForListener:(id)arg1 hasUpdatedManifest:(bool)arg2;
- (void)_pruneOldAttributionLogos;
- (void)_sendError:(id)arg1 toListener:(id)arg2;
- (void)_sendInfo:(id)arg1 updatedManifest:(bool)arg2 toListener:(id)arg3;
- (void)_updateManifestWithCompletionHandler:(id)arg1 errorHandler:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned int)arg2 completionHandler:(id)arg3 errorHandler:(id)arg4;

@end
