/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKImageContext : NSObject {
    struct CGContext { } *_CGContext;
    double _scale;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
}

@property(assign,readonly) struct CGContext { }* CGContext;
@property(assign,readonly) UIImage * image;
@property(assign,readonly) double scale;
@property(assign,readwrite) struct CGSize { double x1; double x2; } size;

+ (id)drawWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 options:(unsigned int)arg3 usingBlock:(id)arg4;
+ (id)imageFromRawPixelsAtURL:(id)arg1;

- (struct CGContext { }*)CGContext;
- (void)dealloc;
- (id)image;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 options:(unsigned int)arg3;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 options:(unsigned int)arg3 data:(void*)arg4;
- (double)scale;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (bool)writeRawPixelsToURL:(id)arg1 error:(id*)arg2;

@end