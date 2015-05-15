/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptColor : SUScriptObject {
    UIColor *_color;
}

@property(assign,readonly) double alpha;
@property(assign,readonly) double blue;
@property(assign,readonly) double green;
@property(assign,readonly) UIColor * nativeColor;
@property(assign,readonly) double red;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (double)alpha;
- (id)attributeKeys;
- (double)blue;
- (struct CGColor { }*)copyCGColor;
- (void)dealloc;
- (double)green;
- (id)initWithStyleString:(id)arg1;
- (id)initWithUIColor:(id)arg1;
- (id)nativeColor;
- (double)red;
- (id)scriptAttributeKeys;
- (void)setHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (void)setRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (void)setWhite:(double)arg1 alpha:(double)arg2;
- (id)stringRepresentation;

@end
