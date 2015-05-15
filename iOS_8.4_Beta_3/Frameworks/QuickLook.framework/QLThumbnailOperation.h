/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThumbnailOperation : NSOperation {
    UIImage *_image;
    long long _index;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
}

@property(assign,retain) UIImage * image;
@property(assign,readwrite) long long index;
@property(assign,readwrite) struct CGSize { double x1; double x2; } size;

- (void)dealloc;
- (id)image;
- (long long)index;
- (id)init;
- (void)setImage:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
