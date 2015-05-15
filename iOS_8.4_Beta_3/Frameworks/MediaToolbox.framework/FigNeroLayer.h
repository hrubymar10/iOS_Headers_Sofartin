/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigNeroLayer : CALayer {
    <FigNeroLayerDelegate> *_neroDelegate;
    NSObject<OS_dispatch_queue> *_neroQueue;
    struct OpaqueFigNeroid { } *_neroid;
}

@property(assign,readwrite) <FigNeroLayerDelegate> * neroDelegate;

- (void)_dispatchNotification:(id)arg1 value:(id)arg2;
- (void)_start;
- (void)dealloc;
- (id)init;
- (id)neroDelegate;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeroDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end
