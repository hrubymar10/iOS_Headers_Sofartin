/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBLaunchImageInfo : NSObject <BSXPCCoding> {
    UIImage *_image;
    bool _isDownscaled;
    bool _isOpaque;
    bool _isSnapshot;
    long long _orientation;
    NSString *_path;
    double _scale;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool isDownscaled;
@property (nonatomic) bool isOpaque;
@property (nonatomic) bool isSnapshot;
@property (nonatomic) long long orientation;
@property (nonatomic, retain) NSString *path;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)image;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isDownscaled;
- (bool)isOpaque;
- (bool)isSnapshot;
- (long long)orientation;
- (id)path;
- (double)scale;
- (void)setImage:(id)arg1;
- (void)setIsDownscaled:(bool)arg1;
- (void)setIsOpaque:(bool)arg1;
- (void)setIsSnapshot:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setPath:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
