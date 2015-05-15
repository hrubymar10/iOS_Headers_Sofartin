/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGridModel : VKModelObject <VKMapLayer, VKStyleManagerObserver> {
    struct shared_ptr<ggl::GridBase::GridBaseUniformData> { 
        struct GridBaseUniformData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _baseUniformData;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    } _fillColor;
    struct shared_ptr<ggl::GridBase::GridMesh> { 
        struct GridMesh {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _gridMesh;
    double _gridMix;
    struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct ShaderSetup {} *x4; unsigned int x5; unsigned int x6; float x7; struct Mesh {} *x8; struct Range { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; struct Range {} *x10; unsigned long long x11; } *_gridRenderItem;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _gridRenderState;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    } _lineColor;
    VKMapModel *_mapModel;
    bool _needsUpdatedColor;
    unsigned char _renderPass;
    struct unique_ptr<ggl::Grid::Shader::Setup, std::__1::default_delete<ggl::Grid::Shader::Setup> > { 
        struct __compressed_pair<ggl::Grid::Shader::Setup *, std::__1::default_delete<ggl::Grid::Shader::Setup> > { 
            struct Setup {} *__first_; 
        } __ptr_; 
    } _shaderSetup;
    bool _simpleGridEnabled;
    struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct ShaderSetup {} *x4; unsigned int x5; unsigned int x6; float x7; struct Mesh {} *x8; struct Range { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; struct Range {} *x10; unsigned long long x11; } *_simpleGridRenderItem;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _simpleGridRenderState;
    struct unique_ptr<ggl::SimpleGrid::Shader::Setup, std::__1::default_delete<ggl::SimpleGrid::Shader::Setup> > { 
        struct __compressed_pair<ggl::SimpleGrid::Shader::Setup *, std::__1::default_delete<ggl::SimpleGrid::Shader::Setup> > { 
            struct Setup {} *__first_; 
        } __ptr_; 
    } _simpleShaderSetup;
    struct shared_ptr<ggl::SimpleGrid::SimpleGridUniformData> { 
        struct SimpleGridUniformData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _simpleUniformData;
    struct shared_ptr<ggl::Grid::GridUniformData> { 
        struct GridUniformData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _uniformData;
    struct shared_ptr<ggl::Tile::ViewUniformData> { 
        struct ViewUniformData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _viewUniformData;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  fillColor; /* unknown property attribute:  1>=[4f]} */
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) VKMapModel * mapModel;
@property(assign,readwrite) unsigned char renderPass;
@property(assign,readwrite) bool simpleGridEnabled;
@property(assign,readonly) VKStyleManager * styleManager;
@property(assign,readonly) Class superclass;

+ (bool)reloadOnStylesheetChange;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (struct Matrix<float, 4, 1> { float x1[4]; })fillColor;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)init;
- (unsigned long long)mapLayerPosition;
- (id)mapModel;
- (unsigned char)renderPass;
- (void)setMapModel:(id)arg1;
- (void)setNeedsUpdatedGridColor;
- (void)setRenderPass:(unsigned char)arg1;
- (void)setSimpleGridEnabled:(bool)arg1;
- (bool)shouldLayoutWithoutStyleManager;
- (bool)simpleGridEnabled;
- (id)styleManager;
- (void)stylesheetDidChange;
- (void)stylesheetDoneChanging;
- (void)updateGridColor;

@end
