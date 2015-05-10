/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKViewElementStyle : NSObject {
    NSString *_classSelector;
    NSArray *_mediaQueryList;
    NSMutableDictionary *_styleDict;
}

@property(assign,readonly) UIColor * backgroundColor;
@property(assign,readonly) NSString * badgeTreatment;
@property(assign,readonly) UIColor * borderColor;
@property(assign,readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderMargins;
@property(assign,readonly) IKFourTuple * borderRadius;
@property(assign,readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderWidths;
@property(assign,readonly) NSString * cardType;
@property(assign,retain) NSString * classSelector;
@property(assign,readonly) UIColor * color;
@property(assign,readonly) long long columnCount;
@property(assign,readonly) NSString * columnItemType;
@property(assign,readonly) NSString * columnType;
@property(assign,readonly) NSString * dividerType;
@property(assign,readonly) unsigned long long elementAlignment;
@property(assign,readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } elementMargin;
@property(assign,readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } elementPadding;
@property(assign,readonly) unsigned long long elementPosition;
@property(assign,readonly) long long fillImage;
@property(assign,readonly) double fontSize;
@property(assign,readonly) NSString * fontWeight;
@property(assign,readonly) IKColor * ikBackgroundColor;
@property(assign,readonly) IKColor * ikBorderColor;
@property(assign,readonly) IKColor * ikColor;
@property(assign,readonly) IKColor * ikHighlightColor;
@property(assign,readonly) IKColor * imageMaskColor;
@property(assign,readonly) IKColor * imagePlaceholderBackgroundColor;
@property(assign,readonly) NSURL * imagePlaceholderURL;
@property(assign,readonly) unsigned long long imagePosition;
@property(assign,readonly) NSString * imageTreatment;
@property(assign,readonly) NSString * itemHeight;
@property(assign,readonly) NSString * itemWidth;
@property(assign,readonly) NSString * labelsState;
@property(assign,readonly) NSNumber * letterSpacing;
@property(assign,readonly) NSString * lockupType;
@property(assign,readonly) NSString * maxHeight;
@property(assign,readonly) long long maxTextLines;
@property(assign,readonly) NSString * maxWidth;
@property(assign,retain) NSArray * mediaQueryList;
@property(assign,readonly) unsigned long long ordinalMaxLength;
@property(assign,readonly) long long reflectImage;
@property(assign,readonly) NSString * rowHeight;
@property(assign,retain) NSMutableDictionary * styleDict;
@property(assign,readonly) unsigned long long textAlignment;
@property(assign,readonly) NSString * textScale;
@property(assign,readonly) NSShadow * textShadow;
@property(assign,readonly) NSString * textStyle;
@property(assign,readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property(assign,readonly) NSString * transition;
@property(assign,readonly) NSNumber * transitionInterval;
@property(assign,readonly) NSString * visibility;

+ (unsigned long long)alignmentFromString:(id)arg1;
+ (id)elementStyleWithParentStyle:(id)arg1 elementStyle:(id)arg2 elementStyleOverrides:(id)arg3;
+ (id)elementStyleWithSelector:(id)arg1 aggregatingStyles:(id)arg2;
+ (id)elementStyleWithSelector:(id)arg1 styleString:(id)arg2;
+ (unsigned long long)imageTreatmentFromString:(id)arg1;
+ (void)initialize;
+ (id)positionConstraintsForView:(id)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 position:(unsigned long long)arg3;
+ (unsigned long long)positionFromString:(id)arg1;
+ (void)registerStyle:(id)arg1 withType:(unsigned long long)arg2 inherited:(bool)arg3;
+ (unsigned long long)transitionFromString:(id)arg1;

- (void).cxx_destruct;
- (void)_addElementStyle:(id)arg1;
- (void)_addParentStyle:(id)arg1;
- (id)_doubleFromString:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForStyleKey:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsFromString:(id)arg1;
- (id)_fontSizeFromString:(id)arg1;
- (id)_gradientFromString:(id)arg1;
- (id)_newColorFromString:(id)arg1;
- (id)_numberFromString:(id)arg1;
- (void)_parse:(id)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformFromString:(id)arg1;
- (id)_urlFromString:(id)arg1;
- (id)backgroundColor;
- (id)badgeTreatment;
- (id)borderColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderMargins;
- (id)borderRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderWidths;
- (id)cardType;
- (id)classSelector;
- (id)color;
- (long long)columnCount;
- (id)columnItemType;
- (id)columnType;
- (id)description;
- (id)dividerType;
- (unsigned long long)elementAlignment;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })elementMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })elementPadding;
- (unsigned long long)elementPosition;
- (long long)fillImage;
- (double)fontSize;
- (id)fontWeight;
- (id)ikBackgroundColor;
- (id)ikBorderColor;
- (id)ikColor;
- (id)ikHighlightColor;
- (id)imageMaskColor;
- (id)imagePlaceholderBackgroundColor;
- (id)imagePlaceholderURL;
- (unsigned long long)imagePosition;
- (id)imageTreatment;
- (id)initWithClassSelector:(id)arg1;
- (id)initWithString:(id)arg1 classSelector:(id)arg2;
- (id)initWithStyle:(id)arg1 classSelector:(id)arg2;
- (id)itemHeight;
- (id)itemWidth;
- (id)labelsState;
- (id)letterSpacing;
- (id)lockupType;
- (id)maxHeight;
- (long long)maxTextLines;
- (id)maxWidth;
- (id)mediaQueryList;
- (unsigned long long)ordinalMaxLength;
- (long long)reflectImage;
- (id)rowHeight;
- (void)setClassSelector:(id)arg1;
- (void)setMediaQueryList:(id)arg1;
- (void)setStyleDict:(id)arg1;
- (id)styleDict;
- (unsigned long long)textAlignment;
- (id)textScale;
- (id)textShadow;
- (id)textStyle;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (id)transition;
- (id)transitionInterval;
- (unsigned long long)typeForStyle:(id)arg1;
- (id)valueForStyle:(id)arg1;
- (id)visibility;

@end
