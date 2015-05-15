/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTSPImageDataTexture : TSCH3DTexture {
    NSNumber *mCachedHash;
    TSCH3DTSPImageData *mData;
    TSCH3DTSPMipmapData *mOptimizedMipmapData;
}

@property (nonatomic, readonly) TSCH3DTSPImageData *data;
@property (nonatomic, readonly) TSPData *imageData;

+ (id)instanceWithArchive:(const struct Chart3DTSPImageDataTextureArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DataReference {} *x5; struct DataReference {} *x6; struct Reference {} *x7; struct Reference {} *x8; }*)arg1 unarchiver:(id)arg2;
+ (id)textureWithImageData:(id)arg1 optimizedMipmapData:(id)arg2;

- (bool)canLoadCachedFullMipmapBufferForDataCache:(id)arg1;
- (id)data;
- (id)databufferForDataCache:(id)arg1;
- (void)dealloc;
- (bool)hasCompleteData;
- (unsigned long long)hash;
- (id)imageData;
- (id)initWithArchive:(const struct Chart3DTSPImageDataTextureArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DataReference {} *x5; struct DataReference {} *x6; struct Reference {} *x7; struct Reference {} *x8; }*)arg1 unarchiver:(id)arg2;
- (id)initWithImageData:(id)arg1 optimizedMipmapData:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)optimizedMipmapBuffer;
- (void)p_setOptimizedMipMapData:(id)arg1;
- (void)saveToArchive:(struct Chart3DTSPImageDataTextureArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DataReference {} *x5; struct DataReference {} *x6; struct Reference {} *x7; struct Reference {} *x8; }*)arg1 archiver:(id)arg2;
- (void)setChanged:(bool)arg1;

@end
