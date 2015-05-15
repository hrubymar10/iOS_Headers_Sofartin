/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarItem : UIBarItem {
    SEL _action;
    id _appearanceStorage;
    NSString *_badgeValue;
    long long _barMetrics;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _imageInsets;
    long long _imageStyle;
    UIImage *_selectedImage;
    UIImage *_selectedTemplateImage;
    struct { 
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int viewIsCustom : 1; 
        unsigned int animatedBadge : 1; 
        unsigned int customSelectedImage : 1; 
        unsigned int customUnselectedImage : 1; 
    } _tabBarItemFlags;
    long long _tag;
    id _target;
    UIImage *_templateImage;
    UIColor *_tintColor;
    NSString *_title;
    UIImage *_unselectedImage;
    UIView *_view;
}

@property(setter=_setBarMetrics:,assign,readwrite) long long _barMetrics;
@property(setter=_setImageStyle:,assign,readwrite) long long _imageStyle;
@property(setter=_setTintColor:,assign,retain) UIColor * _tintColor;
@property(assign,readwrite) SEL action;
@property(assign,readwrite) bool animatedBadge;
@property(assign,copy) NSString * badgeValue;
@property(assign,retain) UIImage * selectedImage;
@property(assign,readwrite) id target;
@property(assign,retain) UIImage * unselectedImage;
@property(assign,retain) UIView * view;
@property(assign,readwrite) bool viewIsCustom;

+ (id)_appearanceBlindViewClasses;

- (long long)_barMetrics;
- (id)_createViewForTabBar:(id)arg1 showingBadge:(bool)arg2;
- (id)_createViewForTabBar:(id)arg1 showingBadge:(bool)arg2 withTint:(bool)arg3;
- (long long)_imageStyle;
- (id)_internalTemplateImage;
- (id)_internalTemplateImages;
- (id)_internalTitle;
- (bool)_isSelected;
- (void)_setBarMetrics:(long long)arg1;
- (void)_setImageStyle:(long long)arg1;
- (void)_setInternalTemplateImage:(id)arg1;
- (void)_setInternalTitle:(id)arg1;
- (void)_setSelected:(bool)arg1;
- (void)_setTintColor:(id)arg1;
- (void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned long long)arg3;
- (id)_tintColor;
- (void)_updateButtonForTintColor:(id)arg1 selected:(bool)arg2;
- (id)_updateImageWithTintColor:(id)arg1 isSelected:(bool)arg2 getImageOffset:(struct UIOffset { double x1; double x2; }*)arg3;
- (void)_updateToMatchCurrentState;
- (void)_updateView;
- (void)_updateViewAndPositionItems:(bool)arg1;
- (SEL)action;
- (bool)animatedBadge;
- (id)badgeValue;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)finishedSelectedImage;
- (id)finishedUnselectedImage;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTabBarSystemItem:(long long)arg1 tag:(long long)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3;
- (id)initWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3;
- (bool)isEnabled;
- (bool)isSystemItem;
- (id)nextResponder;
- (id)selectedImage;
- (void)setAction:(SEL)arg1;
- (void)setAnimatedBadge:(bool)arg1;
- (void)setBadgeValue:(id)arg1;
- (void)setBadgeValue:(id)arg1 animated:(bool)arg2 blink:(bool)arg3;
- (void)setEnabled:(bool)arg1;
- (void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelectedImage:(id)arg1;
- (void)setTag:(long long)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setUnselectedImage:(id)arg1;
- (void)setView:(id)arg1;
- (void)setViewIsCustom:(bool)arg1;
- (long long)systemItem;
- (long long)tag;
- (id)target;
- (id)title;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustment;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (id)unselectedImage;
- (id)view;
- (bool)viewIsCustom;

@end
