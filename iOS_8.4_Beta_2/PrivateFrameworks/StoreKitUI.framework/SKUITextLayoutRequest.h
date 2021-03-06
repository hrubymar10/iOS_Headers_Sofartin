/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITextLayoutRequest : NSObject <SKUILayoutRequest> {
    NSAttributedString *_attributedText;
    double _fontSize;
    long long _fontWeight;
    long long _numberOfLines;
    NSString *_text;
    unsigned char _textAlignment;
    double _width;
}

@property(assign,copy) NSAttributedString * attributedText;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) double fontSize;
@property(assign,readwrite) long long fontWeight;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class layoutClass;
@property(assign,readwrite) long long numberOfLines;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * text;
@property(assign,readwrite) unsigned char textAlignment;
@property(assign,readwrite) double width;

- (void).cxx_destruct;
- (id)attributedText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)fontSize;
- (long long)fontWeight;
- (id)init;
- (Class)layoutClass;
- (long long)numberOfLines;
- (void)setAttributedText:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setFontWeight:(long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(unsigned char)arg1;
- (void)setWidth:(double)arg1;
- (id)text;
- (unsigned char)textAlignment;
- (double)width;

@end
