/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTileProvider : NSObject <VKLRUCacheDelegate, VKTileSourceClient> {
    <VKTileProviderClient> *_client;
    double _contentScale;
    <VKMapLayer> *_debugLayer;
    GEOTileKeyList *_debugLayerKeys;
    _VKTileProviderTimerTarget *_evaluationTarget;
    VKTimer *_evaluationTimer;
    bool _exclusionAreaVisible;
    struct vector<vk::TileExclusionArea, std::__1::allocator<vk::TileExclusionArea> > { 
        struct TileExclusionArea {} *__begin_; 
        struct TileExclusionArea {} *__end_; 
        struct __compressed_pair<vk::TileExclusionArea *, std::__1::allocator<vk::TileExclusionArea> > { 
            struct TileExclusionArea {} *__first_; 
        } __end_cap_; 
    } _exclusionAreas;
    bool _fallbackEnabled;
    NSMutableSet *_fallbackTiles;
    bool _finishedLoading;
    bool _hasFailedTile;
    NSArray *_holes;
    VKTileKeyList *_keysInView;
    struct VKCameraState { 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } position; 
        struct { 
            double v[4][4]; 
        } orientation; 
        float aspectRatio; 
        float verticalFieldOfView; 
        float horizontalOffset; 
    } _lastCameraState;
    struct CGSize { 
        double width; 
        double height; 
    } _lastCanvasSize;
    float _lastMidDisplayZoomLevel;
    float _loadingProgress;
    NSLocale *_locale;
    NSMutableSet *_lostTiles;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    int _mode;
    VKTileKeyList *_neighborKeys;
    unsigned long long _neighborMode;
    NSMutableSet *_neighborTiles;
    VKTileSource *_optionalTileSources;
    bool _prefetchEnabled;
    VKTileKeyList *_prefetchKeys;
    unsigned int _prefetchNumberOfScreens;
    _VKTileProviderTimerTarget *_prefetchTarget;
    VKTimer *_prefetchTimer;
    VKMapRasterizer *_rasterizer;
    struct { 
        double x; 
        double y; 
    } _sortPoint;
    VKStyleManager *_styleManager;
    unsigned long long _tileMaximumLimit;
    VKTileCache *_tilePool;
    unsigned long long _tileReserveLimit;
    VKTileSelection *_tileSelection;
    bool _tilesChanged;
    VKTileSource *_tilesSources;
    NSMutableSet *_tilesToRender;
    bool _useSmallTileCache;
}

@property(assign,readwrite) <VKTileProviderClient> * client;
@property(assign,readwrite) double contentScale;
@property(assign,copy) NSString * debugDescription;
@property(assign,retain) <VKMapLayer> * debugLayer;
@property(assign,readonly) GEOTileKeyList * debugLayerKeys;
@property(assign,copy) NSString * description;
@property(getter=isFallbackEnabled,assign,readwrite) bool fallbackEnabled;
@property(getter=isFinishedLoading,assign,readonly) bool finishedLoading;
@property(assign,readonly) bool hasFailedTile;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) VKTileKeyList * keysInView;
@property(assign,readonly) float loadingProgress;
@property(assign,readwrite) double lodBias;
@property(assign,readwrite) int mode;
@property(assign,readonly) VKTileKeyList * neighborKeys;
@property(assign,readwrite) unsigned long long neighborMode;
@property(assign,readonly) NSSet * neighborTiles;
@property(getter=isPrefetchEnabled,assign,readwrite) bool prefetchEnabled;
@property(assign,retain) VKStyleManager * styleManager;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSSet * tilesToRender;
@property(assign,readwrite) bool useSmallTileCache;
@property(assign,readonly) NSArray * visibleTileSets;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dirtyTile:(id)arg1 source:(id)arg2 layer:(unsigned long long)arg3;
- (void)_disableTimers;
- (void)_fetchAvailableTiles:(bool)arg1;
- (void)_fillHoles:(id)arg1 context:(id)arg2;
- (void)_prefetchTiles;
- (void)_resizeCache;
- (void)_updateTimers:(int)arg1;
- (bool)cache:(id)arg1 willEvictObject:(id)arg2 forKey:(const struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg3;
- (bool)canRenderTile:(id)arg1;
- (void)cancelLoadForMapTile:(id)arg1;
- (void)cancelLoadingTiles;
- (void)changeTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 toState:(unsigned long long)arg2 withMetadata:(id)arg3 withTile:(id)arg4 forLayer:(unsigned long long)arg5;
- (void)clearScene;
- (id)client;
- (void)configureTileSelection;
- (double)contentScale;
- (void)dealloc;
- (id)debugLayer;
- (id)debugLayerKeys;
- (void)describeTilesFromList:(id)arg1 output:(id)arg2;
- (id)detailedDescription;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)dirtyTilesFromTileSource:(id)arg1;
- (bool)evaluateNeighborTileForRendering:(id)arg1;
- (bool)evaluateSelectedTileForRendering:(id)arg1;
- (void)flushCaches:(bool)arg1;
- (void)foreachActiveLayer:(id)arg1;
- (void)foreachOptionalLayer:(id)arg1;
- (bool)hasFailedTile;
- (bool)hasRequiredTileData:(id)arg1;
- (bool)inFailedState:(id)arg1;
- (id)initWithClient:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3;
- (void)invalidateTilesFromTileSource:(id)arg1;
- (bool)isFallbackEnabled;
- (bool)isFinishedLoading;
- (bool)isPrefetchEnabled;
- (id)keysInView;
- (unsigned long long)layerForSource:(id)arg1;
- (float)loadingProgress;
- (double)lodBias;
- (int)mode;
- (id)neighborKeys;
- (unsigned long long)neighborMode;
- (id)neighborTiles;
- (void)prepareTileForRendering:(id)arg1;
- (void)quiesce;
- (void)rasterizer:(id)arg1 didMakeRasterTile:(id)arg2 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (void)releaseChildrenFallbackTilesForTile:(id)arg1 context:(id)arg2;
- (void)releaseFallbackTileForRendering:(id)arg1;
- (void)releaseNeighborTileForRendering:(id)arg1;
- (bool)releaseParentFallbackTileForTile:(id)arg1;
- (void)releaseTileForRendering:(id)arg1;
- (void)removeTileSourceForMapLayer:(unsigned long long)arg1;
- (void)requireRasterization:(id)arg1;
- (void)retireNeighborTiles:(id)arg1;
- (void)retireRenderTiles:(id)arg1;
- (id)selectTiles:(int*)arg1 needRasterization:(bool*)arg2;
- (void)setClient:(id)arg1;
- (void)setContentScale:(double)arg1;
- (void)setDebugLayer:(id)arg1;
- (void)setFallbackEnabled:(bool)arg1;
- (void)setLodBias:(double)arg1;
- (void)setMode:(int)arg1;
- (void)setNeighborMode:(unsigned long long)arg1;
- (void)setPrefetchEnabled:(bool)arg1;
- (void)setStyleManager:(id)arg1;
- (void)setTileExclusionAreas:(const struct vector<vk::TileExclusionArea, std::__1::allocator<vk::TileExclusionArea> > { struct TileExclusionArea {} *x1; struct TileExclusionArea {} *x2; struct __compressed_pair<vk::TileExclusionArea *, std::__1::allocator<vk::TileExclusionArea> > { struct TileExclusionArea {} *x_3_1_1; } x3; }*)arg1;
- (void)setTileSource:(id)arg1 forMapLayer:(unsigned long long)arg2 optional:(bool)arg3;
- (void)setUseSmallTileCache:(bool)arg1;
- (id)sourceForLayer:(id)arg1;
- (id)styleManager;
- (bool)tileExclusionAreaVisible;
- (id)tileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (bool)tileMatters:(id)arg1;
- (void)tileSource:(id)arg1 didFailToDecodeTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(id)arg1 didFailToLoadTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2 error:(id)arg3;
- (void)tileSource:(id)arg1 didFetchTile:(id)arg2 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (void)tileSource:(id)arg1 dirtyTilesWithinRect:(const struct { double x1; double x2; double x3; double x4; }*)arg2 level:(long long)arg3;
- (void)tileSource:(id)arg1 invalidateKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(id)arg1 invalidateKeys:(id)arg2;
- (void)tileSource:(id)arg1 invalidateTilesWithState:(unsigned long long)arg2;
- (bool)tileSource:(id)arg1 keyIsNeeded:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (bool)tileSourceMayUseNetwork:(id)arg1;
- (void)tileSourcesDidChange;
- (id)tilesToRender;
- (void)timerFired:(id)arg1;
- (void)updateWithContext:(id)arg1 selectionScale:(float)arg2;
- (bool)useSmallTileCache;
- (id)visibleTileSets;
- (void)willStartLoadingTiles;

@end
