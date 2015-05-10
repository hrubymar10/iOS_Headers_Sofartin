/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebEventRegion : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    } p1;
    struct CGPoint { 
        double x; 
        double y; 
    } p2;
    struct CGPoint { 
        double x; 
        double y; 
    } p3;
    struct CGPoint { 
        double x; 
        double y; 
    } p4;
}

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithPoints:(struct CGPoint { double x1; double x2; })arg1 :(struct CGPoint { double x1; double x2; })arg2 :(struct CGPoint { double x1; double x2; })arg3 :(struct CGPoint { double x1; double x2; })arg4;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })p1;
- (struct CGPoint { double x1; double x2; })p2;
- (struct CGPoint { double x1; double x2; })p3;
- (struct CGPoint { double x1; double x2; })p4;
- (struct FloatQuad { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatPoint { float x_2_1_1; float x_2_1_2; } x2; struct FloatPoint { float x_3_1_1; float x_3_1_2; } x3; struct FloatPoint { float x_4_1_1; float x_4_1_2; } x4; })quad;

@end
