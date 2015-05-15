/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFMagnifyMode : NSObject <NSCopying> {
    NSString *_name;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    float _zoomFactor;
}

@property(assign,retain) NSString * name;
@property(assign,readwrite) struct CGSize { double x1; double x2; } size;
@property(assign,readwrite) float zoomFactor;

+ (id)currentMagnifyMode;
+ (id)magnifyModeWithSize:(struct CGSize { double x1; double x2; })arg1 name:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setZoomFactor:(float)arg1;
- (struct CGSize { double x1; double x2; })size;
- (float)zoomFactor;

@end