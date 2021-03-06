/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSampleBufferSinkNode : BWSinkNode {
    id _sampleBufferAvailableHandler;
}

@property(assign,copy) id sampleBufferAvailableHandler;

+ (void)initialize;

- (void)dealloc;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)initWithInputMediaType:(unsigned int)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)sampleBufferAvailableHandler;
- (void)setSampleBufferAvailableHandler:(id)arg1;

@end
