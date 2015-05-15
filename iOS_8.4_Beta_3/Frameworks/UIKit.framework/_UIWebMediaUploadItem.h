/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIWebMediaUploadItem : NSObject {
    NSString *_filePath;
    UIImage *_originalImage;
    bool _video;
}

@property(assign,retain) NSString * filePath;
@property(assign,retain) UIImage * originalImage;
@property(getter=isVideo,assign,readwrite) bool video;

+ (id)mediaUploadItemWithFilePath:(id)arg1 image:(id)arg2 isVideo:(bool)arg3;

- (id)_imageForVideoFile:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_squareCropRectForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_squareImage:(id)arg1;
- (void)dealloc;
- (id)displayImage;
- (id)filePath;
- (id)initWithFilePath:(id)arg1 image:(id)arg2 isVideo:(bool)arg3;
- (bool)isVideo;
- (id)originalImage;
- (void)setFilePath:(id)arg1;
- (void)setOriginalImage:(id)arg1;
- (void)setVideo:(bool)arg1;

@end
