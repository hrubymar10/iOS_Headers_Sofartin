/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage {
    UIImage *_backgroundImage;
    UIImage *_miniBackgroundImage;
    UIImage *_miniTopBackgroundImage;
    UIImage *_topBackgroundImage;
    bool hidesShadow;
    UIImage *shadowImage;
    UIImage *topShadowImage;
}

@property(assign,retain) UIImage * backgroundImage;
@property(assign,readwrite) bool hidesShadow;
@property(assign,retain) UIImage * miniBackgroundImage;
@property(assign,retain) UIImage * miniTopBackgroundImage;
@property(assign,retain) UIImage * shadowImage;
@property(assign,retain) UIImage * topBackgroundImage;
@property(assign,retain) UIImage * topShadowImage;

+ (long long)typicalBarPosition;

- (id)backgroundImage;
- (void)dealloc;
- (bool)hidesShadow;
- (id)miniBackgroundImage;
- (id)miniTopBackgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (void)setHidesShadow:(bool)arg1;
- (void)setMiniBackgroundImage:(id)arg1;
- (void)setMiniTopBackgroundImage:(id)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setTopBackgroundImage:(id)arg1;
- (void)setTopShadowImage:(id)arg1;
- (id)shadowImage;
- (id)topBackgroundImage;
- (id)topShadowImage;

@end
