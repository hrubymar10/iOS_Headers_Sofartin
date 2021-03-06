/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDPurgeableBuffer : CFPDDataBuffer {
    unsigned long long allocSize;
    struct __CFData { } *handle;
    bool safe;
    bool usedMalloc;
}

- (bool)beginAccessing;
- (void*)bytes;
- (void)dealloc;
- (void)endAccessing;
- (id)initWithPropertyList:(void*)arg1;
- (unsigned long long)length;

@end
