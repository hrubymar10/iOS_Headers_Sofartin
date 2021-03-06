/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugCommandQueue : MTLToolsCommandQueue {
    unsigned long long _maxCommandBufferCount;
}

@property (nonatomic, readonly) unsigned long long maxCommandBufferCount;

- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (id)initWithCommandQueue:(id)arg1 device:(id)arg2 maxBufferCount:(unsigned long long)arg3;
- (unsigned long long)maxCommandBufferCount;

@end
