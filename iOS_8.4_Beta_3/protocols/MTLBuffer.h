/* Generated by RuntimeBrowser.
 */

@protocol MTLBuffer <MTLResource>

@required

- (void*)contents;
- (unsigned long long)length;
- (<MTLTexture> *)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;

@end
