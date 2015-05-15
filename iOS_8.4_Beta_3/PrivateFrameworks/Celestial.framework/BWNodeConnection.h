/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeConnection : NSObject <BWNodeOutputConsumer> {
    BWNodeInput *_input;
    BWNodeOutput *_output;
    BWPipelineStage *_pipelineStage;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) BWNodeInput * input;
@property(assign,readonly) BWNodeOutput * output;
@property(assign,readonly) BWPipelineStage * pipelineStage;
@property(assign,readonly) Class superclass;

+ (id)_requirementsArrayForInputByResolvingPassthroughTree:(id)arg1;
+ (void)initialize;

- (bool)attach;
- (void)consumeMessage:(id)arg1 fromOutput:(id)arg2;
- (void)dealloc;
- (bool)detach;
- (id)initWithOutput:(id)arg1 input:(id)arg2 pipelineStage:(id)arg3;
- (id)input;
- (id)output;
- (id)pipelineStage;
- (bool)resolveCommonBufferFormat;

@end