/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGetBoundsRenderProcessor : TSCH3DTransformGeometryRenderProcessor {
    struct ObjectBounds { 
        struct box<glm::detail::tvec3<float> > { 
            struct tvec3<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
            } mMin; 
            struct tvec3<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
            } mMax; 
        } mBounds; 
        struct box<glm::detail::tvec3<float> > { 
            struct tvec3<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
            } mMin; 
            struct tvec3<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
            } mMax; 
        } mProjected; 
        struct box<glm::detail::tvec3<float> > { 
            struct tvec3<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
            } mMin; 
            struct tvec3<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
            } mMax; 
        } m2DProjected; 
        struct vector<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > > > { 
            struct box<glm::detail::tvec3<float> > {} *__begin_; 
            struct box<glm::detail::tvec3<float> > {} *__end_; 
            struct __compressed_pair<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > *, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > > > { 
                struct box<glm::detail::tvec3<float> > {} *__first_; 
            } __end_cap_; 
        } mBoxes; 
    } mBounds;
    int mMode;
}

@property (nonatomic, readonly) const struct ObjectBounds { struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_1_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_1_1_2; } x1; struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_2_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_2_1_2; } x2; struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_3_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_3_1_2; } x3; /* Warning: unhandled struct encoding: '{vector<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> >' */ struct x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; }*bounds; /* unknown property attribute:  std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > > >=^{box<glm::detail::tvec3<float> >}}}} */
@property (nonatomic) int mode;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct ObjectBounds { struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_1_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_1_1_2; } x1; struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_2_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_2_1_2; } x2; struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_3_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_3_1_2; } x3; struct vector<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > > > { struct box<glm::detail::tvec3<float> > {} *x_4_1_1; struct box<glm::detail::tvec3<float> > {} *x_4_1_2; struct __compressed_pair<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > *, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > > > { struct box<glm::detail::tvec3<float> > {} *x_3_2_1; } x_4_1_3; } x4; }*)bounds;
- (void)extend2DProjectedBounds:(const struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; } x1; struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_2_1_3; } x2; }*)arg1;
- (id)init;
- (int)mode;
- (void)resetBounds;
- (void)setMode:(int)arg1;
- (void)submit:(const struct PrimitiveInfo { int x1; int x2; int x3; id x4; }*)arg1;

@end
