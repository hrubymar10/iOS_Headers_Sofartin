/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface WKInterfaceDevice : NSObject {
    NSString *_preferredContentSizeCategory;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _screenBounds;
    double _screenScale;
}

@property(assign,readonly) NSDictionary * cachedImages;
@property(assign,copy) NSString * preferredContentSizeCategory;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenBounds;
@property(assign,readwrite) double screenScale;

+ (id)currentDevice;

- (void).cxx_destruct;
- (bool)addCachedImage:(id)arg1 name:(id)arg2;
- (bool)addCachedImageWithData:(id)arg1 name:(id)arg2;
- (id)cachedImages;
- (id)preferredContentSizeCategory;
- (void)removeAllCachedImages;
- (void)removeCachedImageWithName:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBounds;
- (double)screenScale;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScreenScale:(double)arg1;

@end
