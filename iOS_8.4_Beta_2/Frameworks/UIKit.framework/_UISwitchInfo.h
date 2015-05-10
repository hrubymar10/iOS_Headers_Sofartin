/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISwitchInfo : NSObject {
    struct { 
        unsigned int on : 1; 
        unsigned int pressed : 1; 
        unsigned int useAlternateColors : 1; 
        unsigned int skipValueChangedAction : 1; 
    } _switchFlags;
    int imageState;
    UIImage *images;
    UIView *leftEdgeView;
    CALayer *maskLayer;
    UIColor *onButtonColor;
    double position;
    UIView *rightEdgeView;
}

- (void)dealloc;
- (void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;

@end