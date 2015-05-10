/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBubbleShape : NSObject {
    double _controlpointVariance;
    double _endpointVariance;
    unsigned long long _vertexCount;
    struct GKVertexCurve { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; } *_vertexCurves;
    double _vertexVariance;
}

@property(assign,readwrite) double controlpointVariance;
@property(assign,readwrite) double endpointVariance;
@property(assign,readwrite) unsigned long long vertexCount;
@property(assign,readwrite) struct GKVertexCurve { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; }* vertexCurves;
@property(assign,readwrite) double vertexVariance;

+ (id)standardBezierPathForSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)standardBubbleShape;

- (double)controlpointVariance;
- (void)dealloc;
- (double)endpointVariance;
- (void)generateVertexCurves;
- (id)initWithVertexCount:(unsigned long long)arg1 vertexVariance:(double)arg2 endpointVariance:(double)arg3 controlpointVariance:(double)arg4;
- (id)pathForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setControlpointVariance:(double)arg1;
- (void)setEndpointVariance:(double)arg1;
- (void)setVertexCount:(unsigned long long)arg1;
- (void)setVertexCurves:(struct GKVertexCurve { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; }*)arg1;
- (void)setVertexVariance:(double)arg1;
- (unsigned long long)vertexCount;
- (struct GKVertexCurve { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; }*)vertexCurves;
- (double)vertexVariance;

@end
