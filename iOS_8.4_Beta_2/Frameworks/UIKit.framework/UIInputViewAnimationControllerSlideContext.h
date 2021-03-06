/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewAnimationControllerSlideContext : NSObject {
    UIInputViewSetPlacement *_endPlacement;
    UIView *_snapshot;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _snapshotEndFrame;
}

@property(assign,retain) UIInputViewSetPlacement * endPlacement;
@property(assign,retain) UIView * snapshot;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } snapshotEndFrame;

- (void)dealloc;
- (id)endPlacement;
- (void)setEndPlacement:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setSnapshotEndFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)snapshot;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })snapshotEndFrame;

@end
