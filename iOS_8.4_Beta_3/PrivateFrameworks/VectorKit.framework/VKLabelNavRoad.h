/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavRoad : NSObject <VKLabelNavFeature> {
    bool _areLabelsDisabled;
    bool _areNavStylesInitialized;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; bool x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; } *_data;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    } _direction;
    bool _hasVisibleShields;
    bool _hasVisibleSigns;
    long long _intraRoadPriority;
    bool _isGuidanceStepStart;
    bool _isInGuidance;
    bool _isOnRoute;
    bool _isRoadLabelUnique;
    bool _isStartOfRoadName;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; } *_junctionA;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; } *_junctionB;
    double _length;
    NSString *_name;
    VKLabelNavJunction *_navJunctionA;
    VKLabelNavRoadLabel *_roadShield;
    VKLabelNavRoadLabel *_roadSign;
    float _routeCrossProduct;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _routeOffset;
    NSString *_shieldDisplayGroup;
    NSString *_shieldGroup;
    struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { 
        struct Matrix<double, 2, 1> {} *__begin_; 
        struct Matrix<double, 2, 1> {} *__end_; 
        struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { 
            struct Matrix<double, 2, 1> {} *__first_; 
        } __end_cap_; 
    } _simplifiedPoints;
    bool _suppressRoadSignIfShieldPresent;
    VKLabelTile *_tile;
    unsigned long long _vertexIndexA;
    unsigned long long _vertexIndexB;
}

@property(assign,readwrite) bool areLabelsDisabled;
@property(assign,readonly) const char * cstrName;
@property(assign,readwrite) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  direction; /* unknown property attribute:  1>=[2f]} */
@property(assign,readwrite) long long intraRoadPriority;
@property(assign,readonly) bool isAwayFromRoute;
@property(assign,readwrite) bool isGuidanceStepStart;
@property(assign,readwrite) bool isInGuidance;
@property(assign,readwrite) bool isOnRoute;
@property(assign,readonly) bool isOnewayToJunction;
@property(assign,readonly) bool isRamp;
@property(assign,readwrite) bool isRoadLabelUnique;
@property(assign,readwrite) bool isStartOfRoadName;
@property(assign,readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }* junctionB;
@property(assign,readonly) NSString * name;
@property(assign,readonly) VKLabelNavJunction * navJunctionA;
@property(assign,readonly) int roadClass;
@property(assign,readonly) long long roadSignAlignment;
@property(assign,readwrite) float routeCrossProduct;
@property(assign,readwrite) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property(assign,readonly) NSString * shieldDisplayGroup;
@property(assign,readonly) NSString * shieldGroup;
@property(assign,readonly) bool suppressRoadSignIfShieldPresent;
@property(assign,readonly) VKLabelTile * tile;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_findLabelAnchorPoint:(struct VKPoint { double x1; double x2; double x3; }*)arg1 isShieldLabel:(bool)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 roadGraph:(id)arg6;
- (float)_findRoadOffsetForDistanceToRay:(float)arg1 rayStart:(struct VKPoint { double x1; double x2; double x3; })arg2 rayVector:(struct Matrix<float, 2, 1> { float x1[2]; })arg3 roadGraph:(id)arg4;
- (id)_newLabelWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg1 isShieldLabel:(bool)arg2 worldPoint:(struct VKPoint { double x1; double x2; double x3; })arg3 alignment:(long long)arg4;
- (bool)_worldPointForRoadOffset:(float)arg1 worldPoint:(struct VKPoint { double x1; double x2; double x3; }*)arg2;
- (void)_worldRoadPoints:(struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x1; struct Matrix<double, 2, 1> {} *x2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_1_1; } x3; }*)arg1;
- (void)appendSimplifiedWorldRoadPoints:(struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x1; struct Matrix<double, 2, 1> {} *x2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_1_1; } x3; }*)arg1;
- (bool)areLabelsDisabled;
- (void)clearRoadSign;
- (void)createLabelWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg1 isShieldLabel:(bool)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 minRouteDistance:(float)arg6 roadGraph:(id)arg7;
- (const char *)cstrName;
- (void)dealloc;
- (id)description;
- (struct Matrix<float, 2, 1> { float x1[2]; })direction;
- (void)getRoadEdge:(struct { struct { /* ? */ } *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1;
- (bool)hasShield;
- (bool)hasVisibleShields;
- (bool)hasVisibleSigns;
- (id)initWithRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1 navJunctionA:(id)arg2 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3 tile:(id)arg4;
- (long long)intraRoadPriority;
- (bool)isAwayFromRoute;
- (bool)isGuidanceStepStart;
- (bool)isInGuidance;
- (bool)isOnRoute;
- (bool)isOnewayToJunction;
- (bool)isRamp;
- (bool)isRoadLabelUnique;
- (bool)isStartOfRoadName;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }*)junctionB;
- (id)labelWithType:(bool)arg1;
- (double)length;
- (bool)matchesRoad:(id)arg1;
- (bool)matchesRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1;
- (id)name;
- (id)navJunctionA;
- (void)prepareStyleVarsWithContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg1;
- (void)recreateRoadSignWithAlignment:(long long)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg2;
- (int)roadClass;
- (long long)roadSignAlignment;
- (float)routeCrossProduct;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (void)setAreLabelsDisabled:(bool)arg1;
- (void)setDirection:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;
- (void)setIntraRoadPriority:(long long)arg1;
- (void)setIsGuidanceStepStart:(bool)arg1;
- (void)setIsInGuidance:(bool)arg1;
- (void)setIsOnRoute:(bool)arg1;
- (void)setIsRoadLabelUnique:(bool)arg1;
- (void)setIsStartOfRoadName:(bool)arg1;
- (void)setRouteCrossProduct:(float)arg1;
- (void)setRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (id)shieldDisplayGroup;
- (id)shieldGroup;
- (bool)suppressRoadSignIfShieldPresent;
- (id)tile;

@end
