/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRealisticMapModel : VKVectorMapModel <VKMapLayer> {
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticAnimatableRoad::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticAnimatableRoad::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RealisticAnimatableRoad::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticAnimatableRoad::Shader::Setup> > > { 
            struct FragmentedPool<ggl::RealisticAnimatableRoad::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _animatableRoadShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticAnimatableTexture::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticAnimatableTexture::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RealisticAnimatableTexture::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticAnimatableTexture::Shader::Setup> > > { 
            struct FragmentedPool<ggl::RealisticAnimatableTexture::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _animatableTexturedShaderSetupPool;
    struct RenderItemBatcher { 
        struct vector<ggl::Range, std::__1::allocator<ggl::Range> > { 
            struct Range {} *__begin_; 
            struct Range {} *__end_; 
            struct __compressed_pair<ggl::Range *, std::__1::allocator<ggl::Range> > { 
                struct Range {} *__first_; 
            } __end_cap_; 
        } _activeRanges; 
        unsigned long long _rangePoolCount; 
        struct vector<ggl::MultiRange, std::__1::allocator<ggl::MultiRange> > { 
            struct MultiRange {} *__begin_; 
            struct MultiRange {} *__end_; 
            struct __compressed_pair<ggl::MultiRange *, std::__1::allocator<ggl::MultiRange> > { 
                struct MultiRange {} *__first_; 
            } __end_cap_; 
        } _rangePool; 
        struct vector<ggl::Range, std::__1::allocator<ggl::Range> > { 
            struct Range {} *__begin_; 
            struct Range {} *__end_; 
            struct __compressed_pair<ggl::Range *, std::__1::allocator<ggl::Range> > { 
                struct Range {} *__first_; 
            } __end_cap_; 
        } _activeRanges; 
        struct RenderItem {} *_prototype; 
        struct Pool<ggl::RenderItem> { 
            struct set<void *, std::__1::less<void *>, std::__1::allocator<void *> > { 
                struct __tree<void *, std::__1::less<void *>, std::__1::allocator<void *> > { 
                    struct __tree_node<void *, void *> {} *__begin_node_; 
                    struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<void *, void *> > > { 
                        struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                            struct __tree_node_base<void *> {} *__left_; 
                        } __first_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__1::less<void *> > { 
                        unsigned long long __first_; 
                    } __pair3_; 
                } __tree_; 
            } mAllocatedSlabs; 
            unsigned long long mElementsPerSlab; 
            unsigned long long mSlabSize; 
            struct FreeList {} *mFreeElement; 
        } _pool; 
        unsigned long long _rangePoolCount; 
        struct vector<ggl::MultiRange, std::__1::allocator<ggl::MultiRange> > { 
            struct MultiRange {} *__begin_; 
            struct MultiRange {} *__end_; 
            struct __compressed_pair<ggl::MultiRange *, std::__1::allocator<ggl::MultiRange> > { 
                struct MultiRange {} *__first_; 
            } __end_cap_; 
        } _rangePool; 
    } _batcher;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    } _casingFacadeRenderItemPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _casingFacadeRenderStateWithBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _casingFacadeRenderStateWithoutBlending;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticCasingFacade::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticCasingFacade::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RealisticCasingFacade::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticCasingFacade::Shader::Setup> > > { 
            struct FragmentedPool<ggl::RealisticCasingFacade::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _casingFacadeShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    } _casingShadowRenderItemPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _casingShadowRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticCasingShadow::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticCasingShadow::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RealisticCasingShadow::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticCasingShadow::Shader::Setup> > > { 
            struct FragmentedPool<ggl::RealisticCasingShadow::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _casingShadowShaderSetupPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _casingSidewalkShadowRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticCasingTop::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticCasingTop::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RealisticCasingTop::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticCasingTop::Shader::Setup> > > { 
            struct FragmentedPool<ggl::RealisticCasingTop::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _casingSidewalkShadowShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    } _casingTopRenderItemPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _casingTopRenderStateWithBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _casingTopRenderStateWithoutBlending;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticCasingTop::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticCasingTop::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RealisticCasingTop::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticCasingTop::Shader::Setup> > > { 
            struct FragmentedPool<ggl::RealisticCasingTop::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _casingTopShaderSetupPool;
    struct unique_ptr<ggl::ClearItem, std::__1::default_delete<ggl::ClearItem> > { 
        struct __compressed_pair<ggl::ClearItem *, std::__1::default_delete<ggl::ClearItem> > { 
            struct ClearItem {} *__first_; 
        } __ptr_; 
    } _clearItem;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _coastlineRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    } _debugRenderItemPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _debugRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonSolidFill::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonSolidFill::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::PolygonSolidFill::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonSolidFill::Shader::Setup> > > { 
            struct FragmentedPool<ggl::PolygonSolidFill::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _debugShaderSetupPool;
    bool _disableRealisticLand;
    bool _disableRealisticRoads;
    double _fade;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _landRenderStateWithBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _landRenderStateWithoutBlending;
    bool _needDebugReset;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    } _roadRenderItemPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _roadRenderStateWithBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _roadRenderStateWithoutBlending;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticRoad::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticRoad::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RealisticRoad::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticRoad::Shader::Setup> > > { 
            struct FragmentedPool<ggl::RealisticRoad::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _roadShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    } _roadShadowRenderItemPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _roadShadowRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticRoadShadow::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticRoadShadow::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RealisticRoadShadow::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticRoadShadow::Shader::Setup> > > { 
            struct FragmentedPool<ggl::RealisticRoadShadow::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _roadShadowShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    } _roadStencilRenderItemPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _roadStencilRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonSolidFill::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonSolidFill::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::PolygonSolidFill::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonSolidFill::Shader::Setup> > > { 
            struct FragmentedPool<ggl::PolygonSolidFill::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _roadStencilShaderSetupPool;
    <GEORoutePreloadSession> *_routePreloadSession;
    float _sceneAlpha;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    } _sidewalkShadowRenderItemPool;
    VKSkyModel *_skyModel;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    } _texturedRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RealisticTexture::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticTexture::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RealisticTexture::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RealisticTexture::Shader::Setup> > > { 
            struct FragmentedPool<ggl::RealisticTexture::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _texturedShaderSetupPool;
    struct shared_ptr<ggl::AnimatableTexture::VariantUniformData> { 
        struct VariantUniformData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _variantData;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _waterRenderStateWithBlending;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _waterRenderStateWithoutBlending;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool disableRealisticLand;
@property(assign,readwrite) bool disableRealisticRoads;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) <GEORoutePreloadSession> * routePreloadSession;
@property(assign,readwrite) float sceneAlpha;
@property(assign,retain) VKSkyModel * skyModel;
@property(assign,readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_calculateZoomLevelWithContext:(id)arg1;
- (void)appendDebugPreloadMissesToBuffer:(struct CommandBuffer { int (**x1)(); char *x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned long long x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned long long x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg1 inContext:(id)arg2 forScene:(id)arg3;
- (void)appendDebugPreloadStatusToBuffer:(struct CommandBuffer { int (**x1)(); char *x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned long long x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned long long x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg1 inContext:(id)arg2 forScene:(id)arg3;
- (void)appendLandCommandsToBuffer:(struct CommandBuffer { int (**x1)(); char *x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned long long x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned long long x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg1 inContext:(id)arg2 skyParameters:(const struct SkyParameters { float x1; float x2; float x3; struct Matrix<float, 4, 1> { float x_4_1_1[4]; } x4; struct Matrix<float, 4, 1> { float x_5_1_1[4]; } x5; }*)arg3;
- (void)appendRoadCommandsToBuffer:(struct CommandBuffer { int (**x1)(); char *x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned long long x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned long long x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg1 inContext:(id)arg2 skyParameters:(const struct SkyParameters { float x1; float x2; float x3; struct Matrix<float, 4, 1> { float x_4_1_1[4]; } x4; struct Matrix<float, 4, 1> { float x_5_1_1[4]; } x5; }*)arg3;
- (void)appendStencilCommandsToBuffer:(struct CommandBuffer { int (**x1)(); char *x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned long long x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned long long x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg1 inContext:(id)arg2;
- (void)appendWaterCommandsToBuffer:(struct CommandBuffer { int (**x1)(); char *x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned long long x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned long long x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long long x_3_2_1; } x_9_1_3; } x9; id x10; }*)arg1 inContext:(id)arg2 skyParameters:(const struct SkyParameters { float x1; float x2; float x3; struct Matrix<float, 4, 1> { float x_4_1_1[4]; } x4; struct Matrix<float, 4, 1> { float x_5_1_1[4]; } x5; }*)arg3;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(bool)arg1;
- (bool)disableRealisticLand;
- (bool)disableRealisticRoads;
- (void)flushPools;
- (void)gatherRenderingPreloadItems:(struct vector<ggl::ShaderLoadItem, std::__1::allocator<ggl::ShaderLoadItem> > { struct ShaderLoadItem {} *x1; struct ShaderLoadItem {} *x2; struct __compressed_pair<ggl::ShaderLoadItem *, std::__1::allocator<ggl::ShaderLoadItem> > { struct ShaderLoadItem {} *x_3_1_1; } x3; }*)arg1;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)init;
- (unsigned long long)mapLayerPosition;
- (bool)minimumZoomLevelBoundsCamera;
- (void)reset;
- (void)resetDebugPools:(id)arg1;
- (void)resetPools;
- (id)routePreloadSession;
- (float)sceneAlpha;
- (void)setDisableRealisticLand:(bool)arg1;
- (void)setDisableRealisticRoads:(bool)arg1;
- (void)setRoutePreloadSession:(id)arg1;
- (void)setSceneAlpha:(float)arg1;
- (void)setSkyModel:(id)arg1;
- (void)setupRealisticUniformBuffer:(struct RealisticUniformData { unsigned long long x1; unsigned long long x2; struct UniformCReflection {} *x3; struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *x_4_1_1; char *x_4_1_2; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *x_3_2_1; } x_4_1_3; } x4; }*)arg1 forTile:(id)arg2;
- (id)skyModel;
- (void)stylesheetDidChange;
- (void)stylesheetDoneChanging;
- (void)stylesheetTransitionDidProgress;
- (void)stylesheetWillTransition:(unsigned long long)arg1;
- (bool)wantsCategorizedSourceTiles;
- (void)willStartDrawingTiles:(id)arg1;

@end
