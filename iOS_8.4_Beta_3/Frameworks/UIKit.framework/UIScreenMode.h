/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScreenMode : NSObject {
    bool _mainScreen;
    id _mode;
}

@property(assign,readwrite) bool _mainScreen;
@property(assign,readonly) double pixelAspectRatio;
@property(assign,readonly) struct CGSize { double x1; double x2; } size;

+ (id)_screenModeForDisplayMode:(id)arg1 mainScreen:(bool)arg2;

- (id)_displayMode;
- (bool)_isNTSCOrPAL;
- (bool)_mainScreen;
- (struct CGSize { double x1; double x2; })_sizeWithLevel:(unsigned long long)arg1;
- (id)description;
- (id)initWithDisplayMode:(id)arg1 mainScreen:(bool)arg2;
- (double)pixelAspectRatio;
- (void)set_mainScreen:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;

@end