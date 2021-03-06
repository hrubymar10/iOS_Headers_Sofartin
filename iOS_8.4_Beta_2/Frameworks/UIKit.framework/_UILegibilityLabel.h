/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UILegibilityLabel : _UILegibilityView {
    UIFont *_font;
    NSString *_string;
    bool _usesSecondaryColor;
}

@property(assign,readonly) double baselineOffset;
@property(assign,retain) UIFont * font;
@property(assign,copy) NSString * string;
@property(assign,readonly) bool usesSecondaryColor;

- (double)baselineOffset;
- (void)dealloc;
- (id)font;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5;
- (void)setFont:(id)arg1;
- (void)setString:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)string;
- (void)updateImage;
- (bool)usesSecondaryColor;

@end
