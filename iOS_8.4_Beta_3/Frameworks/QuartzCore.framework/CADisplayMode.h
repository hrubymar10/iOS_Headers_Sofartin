/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADisplayMode : NSObject {
    CADisplay *_dpy;
    unsigned long long _height;
    void *_priv;
    unsigned long long _width;
}

@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) double pixelAspectRatio;
@property (nonatomic, readonly) unsigned long long width;

+ (id)_displayModeWithMode:(int)arg1 display:(id)arg2;

- (id)_display;
- (id)_initWithMode:(int)arg1 display:(id)arg2;
- (int)_mode;
- (void)_setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)height;
- (bool)isEqual:(id)arg1;
- (double)pixelAspectRatio;
- (unsigned long long)width;

@end
