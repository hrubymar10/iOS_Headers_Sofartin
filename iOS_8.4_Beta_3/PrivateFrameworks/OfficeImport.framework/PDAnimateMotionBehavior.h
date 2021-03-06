/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {
    double mAngle;
    bool mHasAngle;
    bool mHasOriginType;
    bool mHasPointType;
    bool mHasRotationCenter;
    int mOriginType;
    NSString *mPath;
    int mPointType;
    struct CGPoint { 
        double x; 
        double y; 
    } mRotationCenter;
}

- (id).cxx_construct;
- (double)angle;
- (void)dealloc;
- (bool)hasAngle;
- (bool)hasOriginType;
- (bool)hasPath;
- (bool)hasPointType;
- (bool)hasRotationCenter;
- (bool)isEqual:(id)arg1;
- (int)originType;
- (id)path;
- (int)pointType;
- (struct CGPoint { double x1; double x2; })rotationCenter;
- (void)setAngle:(double)arg1;
- (void)setOriginType:(int)arg1;
- (void)setPath:(id)arg1;
- (void)setPointType:(int)arg1;
- (void)setRotationCenter:(struct CGPoint { double x1; double x2; })arg1;

@end
