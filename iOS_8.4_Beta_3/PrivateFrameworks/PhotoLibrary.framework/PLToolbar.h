/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLToolbar : UIToolbar {
    unsigned int _backgroundAlwaysVisible;
    unsigned int _backgroundHidden;
    UIToolbar *_persistentToolbar;
}

@property(getter=isBackgroundAlwaysVisible,assign,readwrite) bool backgroundAlwaysVisible;
@property(getter=isBackgroundHidden,assign,readwrite) bool backgroundHidden;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBackgroundAlwaysVisible;
- (bool)isBackgroundHidden;
- (void)setBackgroundAlwaysVisible:(bool)arg1;
- (void)setBackgroundHidden:(bool)arg1;

@end
