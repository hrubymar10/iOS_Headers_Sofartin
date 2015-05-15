/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMultiPaneScrollingContext : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _previousContentInsetAdditions;
    struct CGPoint { 
        double x; 
        double y; 
    } _previousContentOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _previousContentScrollInsetAdditions;
    double _previousStabilizingBottomAdditions;
    long long _snapDecelerationVeloctiyOverrideState;
    double _snapDownContentOffset;
    long long _snapState;
    double _snapUpContentOffset;
}

@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } previousContentInsetAdditions;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } previousContentOffset;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } previousContentScrollInsetAdditions;
@property(assign,readwrite) double previousStabilizingBottomAdditions;
@property(assign,readwrite) long long snapDecelerationVeloctiyOverrideState;
@property(assign,readwrite) double snapDownContentOffset;
@property(assign,readwrite) long long snapState;
@property(assign,readwrite) double snapUpContentOffset;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })previousContentInsetAdditions;
- (struct CGPoint { double x1; double x2; })previousContentOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })previousContentScrollInsetAdditions;
- (double)previousStabilizingBottomAdditions;
- (void)setPreviousContentInsetAdditions:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreviousContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreviousContentScrollInsetAdditions:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreviousStabilizingBottomAdditions:(double)arg1;
- (void)setSnapDecelerationVeloctiyOverrideState:(long long)arg1;
- (void)setSnapDownContentOffset:(double)arg1;
- (void)setSnapState:(long long)arg1;
- (void)setSnapUpContentOffset:(double)arg1;
- (long long)snapDecelerationVeloctiyOverrideState;
- (double)snapDownContentOffset;
- (long long)snapState;
- (double)snapUpContentOffset;

@end