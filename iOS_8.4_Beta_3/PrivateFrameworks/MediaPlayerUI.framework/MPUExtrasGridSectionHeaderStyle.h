/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasGridSectionHeaderStyle : NSObject {
    NSDictionary *_defaultFontAttributes;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _insets;
    double _textBaselineDescender;
    double _textBaselineHeight;
    UIColor *_textColor;
    NSString *_textStyle;
}

@property(assign,retain) NSDictionary * defaultFontAttributes;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property(assign,readwrite) double textBaselineDescender;
@property(assign,readwrite) double textBaselineHeight;
@property(assign,retain) UIColor * textColor;
@property(assign,retain) NSString * textStyle;

- (void).cxx_destruct;
- (id)defaultFontAttributes;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (void)setDefaultFontAttributes:(id)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTextBaselineDescender:(double)arg1;
- (void)setTextBaselineHeight:(double)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextStyle:(id)arg1;
- (double)textBaselineDescender;
- (double)textBaselineHeight;
- (id)textColor;
- (id)textStyle;

@end
