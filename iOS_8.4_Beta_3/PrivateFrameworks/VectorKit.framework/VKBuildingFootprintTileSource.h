/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKBuildingFootprintTileSource : VKVectorTileSource {
    bool _makeFacades;
    long long _minimumZoomLevel;
    bool _prepareExtrusion;
}

@property(assign,readwrite) bool makeFacades;

- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3;
- (bool)makeFacades;
- (unsigned long long)mapLayerForZoomLevelRange;
- (bool)maximumZoomLevelBoundsCamera;
- (long long)minimumZoomLevel;
- (bool)minimumZoomLevelBoundsCamera;
- (void)setMakeFacades:(bool)arg1;
- (void)setMinimumZoomLevel:(unsigned long long)arg1;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;

@end
