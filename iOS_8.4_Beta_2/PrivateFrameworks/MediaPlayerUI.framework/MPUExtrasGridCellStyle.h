/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasGridCellStyle : NSObject <NSCopying> {
    long long _defaultTextAlignment;
    struct CGSize { 
        double width; 
        double height; 
    } _imageSize;
    NSDictionary *_subtitleDefaultFontAttributes;
    double _subtitleFirstBaselineHeight;
    UIColor *_subtitleTextColor;
    NSString *_subtitleTextStyle;
    double _textFirstBaselineToBottom;
    double _textLastBaselineToBottom;
    NSDictionary *_titleDefaultFontAttributes;
    double _titleFirstBaselineHeight;
    UIColor *_titleTextColor;
    NSString *_titleTextStyle;
}

@property(assign,readwrite) long long defaultTextAlignment;
@property(assign,readwrite) struct CGSize { double x1; double x2; } imageSize;
@property(assign,copy) NSDictionary * subtitleDefaultFontAttributes;
@property(assign,readwrite) double subtitleFirstBaselineHeight;
@property(assign,copy) UIColor * subtitleTextColor;
@property(assign,copy) NSString * subtitleTextStyle;
@property(assign,readwrite) double textFirstBaselineToBottom;
@property(assign,readwrite) double textLastBaselineToBottom;
@property(assign,copy) NSDictionary * titleDefaultFontAttributes;
@property(assign,readwrite) double titleFirstBaselineHeight;
@property(assign,copy) UIColor * titleTextColor;
@property(assign,copy) NSString * titleTextStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)defaultTextAlignment;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)setDefaultTextAlignment:(long long)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSubtitleDefaultFontAttributes:(id)arg1;
- (void)setSubtitleFirstBaselineHeight:(double)arg1;
- (void)setSubtitleTextColor:(id)arg1;
- (void)setSubtitleTextStyle:(id)arg1;
- (void)setTextFirstBaselineToBottom:(double)arg1;
- (void)setTextLastBaselineToBottom:(double)arg1;
- (void)setTitleDefaultFontAttributes:(id)arg1;
- (void)setTitleFirstBaselineHeight:(double)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setTitleTextStyle:(id)arg1;
- (id)subtitleDefaultFontAttributes;
- (double)subtitleFirstBaselineHeight;
- (id)subtitleTextColor;
- (id)subtitleTextStyle;
- (double)textFirstBaselineToBottom;
- (double)textLastBaselineToBottom;
- (id)titleDefaultFontAttributes;
- (double)titleFirstBaselineHeight;
- (id)titleTextColor;
- (id)titleTextStyle;

@end
