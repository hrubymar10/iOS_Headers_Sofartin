/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSetNotificationInfo : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    } _beginCenter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _beginFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _bounds;
    bool _changedAccessoryOnly;
    double _duration;
    struct CGPoint { 
        double x; 
        double y; 
    } _endCenter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _endFrame;
    unsigned long long _options;
}

@property(assign,readwrite) struct CGPoint { double x1; double x2; } beginCenter;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } beginFrame;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property(assign,readwrite) bool changedAccessoryOnly;
@property(assign,readwrite) double duration;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } endCenter;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endFrame;
@property(assign,readwrite) unsigned long long options;
@property(assign,readonly) NSDictionary * privateUserInfo;
@property(assign,readonly) NSDictionary * userInfo;

+ (id)info;

- (struct CGPoint { double x1; double x2; })beginCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })beginFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)changedAccessoryOnly;
- (double)duration;
- (struct CGPoint { double x1; double x2; })endCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endFrame;
- (id)inverseInfo;
- (void)logGeometry;
- (unsigned long long)options;
- (void)populateEndInfoWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)populateStartInfoWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)populateWithAnimationStyle:(id)arg1;
- (id)privateUserInfo;
- (void)setBeginCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBeginFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChangedAccessoryOnly:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEndCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEndFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOptions:(unsigned long long)arg1;
- (id)userInfo;

@end