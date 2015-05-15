/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLRenderPipelineState : NSObject <MTLRenderPipelineState> {
    <MTLDevice> *_device;
    NSString *_label;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) <MTLDevice> * device;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSString * label;
@property(assign,readonly) Class superclass;

- (void)dealloc;
- (id)device;
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;
- (id)label;

@end
