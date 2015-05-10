/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSplineGenerator : NSObject {
    float mAdaptiveThreshold;
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { 
        struct tvec2<float> {} *__begin_; 
        struct tvec2<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { 
            struct tvec2<float> {} *__first_; 
        } __end_cap_; 
    } mControlPts;
    float mDetail;
    struct vector<long, std::__1::allocator<long> > { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long *, std::__1::allocator<long> > { 
            long long *__first_; 
        } __end_cap_; 
    } mSplineExclude;
    float mTension;
}

@property(assign,readwrite) float adaptiveThreshold;
@property(assign,readwrite) float detail;
@property(assign,readwrite) float tension;

+ (id)generator;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)adaptiveThreshold;
- (void)calcControlMatrix:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1 pointNum:(long long)arg2;
- (struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)controlPts;
- (float)detail;
- (void)generatePoints:(struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)arg1;
- (id)init;
- (bool)isClosed;
- (void)setAdaptiveThreshold:(float)arg1;
- (void)setDetail:(float)arg1;
- (void)setTension:(float)arg1;
- (struct vector<long, std::__1::allocator<long> > { long long *x1; long long *x2; struct __compressed_pair<long *, std::__1::allocator<long> > { long long *x_3_1_1; } x3; }*)splineExclude;
- (float)tension;

@end
