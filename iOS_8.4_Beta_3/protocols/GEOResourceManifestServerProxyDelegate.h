/* Generated by RuntimeBrowser.
 */

@protocol GEOResourceManifestServerProxyDelegate <NSObject>

@required

- (oneway void)serverProxy:(id <GEOResourceManifestServerProxy>)arg1 didChangeActiveTileGroup:(GEOActiveTileGroup *)arg2 finishedCallback:(id)arg3;
- (oneway void)serverProxyDidStopLoadingResources:(id <GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxyDidStopUpdatingResourceManifest:(id <GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxyWillStartLoadingResources:(id <GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxyWillStartUpdatingResourceManifest:(id <GEOResourceManifestServerProxy>)arg1;

@end