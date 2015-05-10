/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelCommandQueue : _MTLCommandQueue {
    struct __IOAccelCommandQueue { } *_commandQueue;
    MTLIOAccelDevice<MTLDevice> *_device;
}

@property(assign,readonly) <MTLDevice> * device;

- (void)dealloc;
- (id)device;
- (id)initWithDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2;
- (void)submitCommandBuffers:(id*)arg1 count:(unsigned long long)arg2;

@end
