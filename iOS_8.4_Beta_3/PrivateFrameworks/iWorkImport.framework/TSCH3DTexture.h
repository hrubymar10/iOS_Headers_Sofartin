/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTexture : NSObject {
    TSCH3DTextureResource *mTextureResource;
}

@property (nonatomic, readonly) TSCH3DResource *resource;

- (bool)canLoadCachedFullMipmapBufferForDataCache:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)didInitFromSOS;
- (bool)hasCompleteData;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)optimizedMipmapBuffer;
- (void)resetResource;
- (id)resource;

@end
