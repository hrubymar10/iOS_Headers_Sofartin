/* Generated by RuntimeBrowser.
 */

@protocol MTLCommandBuffer <NSObject>

@required

- (void)addCompletedHandler:(id)arg1;
- (void)addScheduledHandler:(id)arg1;
- (<MTLBlitCommandEncoder> *)blitCommandEncoder;
- (<MTLCommandQueue> *)commandQueue;
- (void)commit;
- (<MTLComputeCommandEncoder> *)computeCommandEncoder;
- (<MTLDevice> *)device;
- (void)enqueue;
- (NSError *)error;
- (NSString *)label;
- (<MTLParallelRenderCommandEncoder> *)parallelRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (void)presentDrawable:(id <MTLDrawable>)arg1;
- (void)presentDrawable:(id <MTLDrawable>)arg1 atTime:(double)arg2;
- (<MTLRenderCommandEncoder> *)renderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (bool)retainedReferences;
- (void)setLabel:(NSString *)arg1;
- (unsigned long long)status;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end
