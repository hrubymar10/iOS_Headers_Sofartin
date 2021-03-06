/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDMMAPBuffer : CFPDDataBuffer {
    void *bytes;
    unsigned long long length;
}

- (void*)bytes;
- (void)dealloc;
- (void)finalize;
- (id)initWithFileDescriptor:(int)arg1 size:(unsigned long long)arg2 allowMappingIfSafe:(bool)arg3;
- (id)initWithSize:(unsigned long long)arg1 bufferPtr:(void**)arg2;
- (unsigned long long)length;

@end
