/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3Dvec4DataBuffer : TSCH3DFloatVectorDataBuffer {
    struct vector<glm::detail::tvec4<float>, std::__1::allocator<glm::detail::tvec4<float> > > { 
        struct tvec4<float> {} *__begin_; 
        struct tvec4<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec4<float> *, std::__1::allocator<glm::detail::tvec4<float> > > { 
            struct tvec4<float> {} *__first_; 
        } __end_cap_; 
    } mContainer;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<glm::detail::tvec4<float>' */ struct *container; /* unknown property attribute:  std::__1::allocator<glm::detail::tvec4<float> > >=^{tvec4<float>}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (unsigned long long)componentByteSize;
- (unsigned long long)components;
- (struct vector<glm::detail::tvec4<float>, std::__1::allocator<glm::detail::tvec4<float> > > { struct tvec4<float> {} *x1; struct tvec4<float> {} *x2; struct __compressed_pair<glm::detail::tvec4<float> *, std::__1::allocator<glm::detail::tvec4<float> > > { struct tvec4<float> {} *x_3_1_1; } x3; }*)container;
- (unsigned long long)count;
- (const void*)data;
- (id)elementsAtIndices:(id)arg1;
- (void)fillCapacity;
- (id)initWithCapacity:(unsigned long long)arg1;

@end
