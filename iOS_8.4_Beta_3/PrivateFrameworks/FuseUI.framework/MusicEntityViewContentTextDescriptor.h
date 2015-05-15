/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityViewContentTextDescriptor : NSObject <NSCopying> {
    id _attributedTextProvider;
    long long _backdropOverlayBlendMode;
    UIColor *_backgroundColor;
    NSMutableArray *_controlTargetActions;
    double _defaultFirstBaselineOffset;
    double _displayScale;
    MPUFontDescriptor *_fontDescriptor;
    long long _lineBreakMode;
    double _lineHeightMultiple;
    double _maximumHeight;
    long long _maximumNumberOfLines;
    long long _maximumTextLengthForInput;
    bool _needsTextAttributesUpdate;
    double _scaledFirstBaselineOffset;
    bool _shouldBaselineAlignTrailingAccessoryImage;
    double _tallestFontAscender;
    double _tallestFontBodyLeading;
    double _tallestFontCapHeight;
    double _tallestFontDescender;
    long long _textAlignment;
    UIColor *_textColor;
    bool _textColorFollowsTintColor;
    MPUTextDrawingCache *_textDrawingCache;
    NSString *_textPlaceholder;
    UIColor *_textPlaceholderColor;
    id _textProvider;
    NSSet *_textProviderAdditionalPropertiesToPrefetch;
    NSString *_textValueFallbackLocalizationKey;
    NSString *_textValueProperty;
    UIColor *_tintColor;
    UIImage *_trailingAccessoryImage;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _trailingAccessoryOffset;
}

@property(assign,readonly) unsigned long long allControlEvents;
@property(assign,readonly) NSSet * allTargets;
@property(assign,copy) id attributedTextProvider;
@property(assign,readwrite) long long backdropOverlayBlendMode;
@property(assign,retain) UIColor * backgroundColor;
@property(assign,readwrite) double defaultFirstBaselineOffset;
@property(assign,readwrite) double displayScale;
@property(assign,copy) MPUFontDescriptor * fontDescriptor;
@property(assign,readonly) bool hasControlBehaviors;
@property(assign,readwrite) long long lineBreakMode;
@property(assign,readwrite) double lineHeightMultiple;
@property(assign,readonly) double maximumHeight;
@property(assign,readwrite) long long maximumNumberOfLines;
@property(assign,readwrite) long long maximumTextLengthForInput;
@property(assign,readonly) double scaledFirstBaselineOffset;
@property(assign,readwrite) bool shouldBaselineAlignTrailingAccessoryImage;
@property(assign,readonly) double tallestFontAscender;
@property(assign,readonly) double tallestFontBodyLeading;
@property(assign,readonly) double tallestFontCapHeight;
@property(assign,readonly) double tallestFontDescender;
@property(assign,readwrite) long long textAlignment;
@property(assign,retain) UIColor * textColor;
@property(assign,readwrite) bool textColorFollowsTintColor;
@property(assign,readonly) MPUTextDrawingCache * textDrawingCache;
@property(assign,copy) NSString * textPlaceholder;
@property(assign,retain) UIColor * textPlaceholderColor;
@property(assign,copy) id textProvider;
@property(assign,copy) NSSet * textProviderAdditionalPropertiesToPrefetch;
@property(assign,copy) NSString * textValueFallbackLocalizationKey;
@property(assign,copy) NSString * textValueProperty;
@property(assign,retain) UIColor * tintColor;
@property(assign,retain) UIImage * trailingAccessoryImage;
@property(assign,readwrite) struct UIOffset { double x1; double x2; } trailingAccessoryOffset;

- (void).cxx_destruct;
- (id)_tallestFont;
- (void)_updateTextAttributes;
- (id)actionsForTarget:(id)arg1 forControlEvent:(unsigned long long)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (unsigned long long)allControlEvents;
- (id)allTargets;
- (id)attributedTextProvider;
- (long long)backdropOverlayBlendMode;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)defaultFirstBaselineOffset;
- (double)displayScale;
- (id)fontDescriptor;
- (bool)hasControlBehaviors;
- (id)init;
- (long long)lineBreakMode;
- (double)lineHeightMultiple;
- (double)maximumHeight;
- (long long)maximumNumberOfLines;
- (long long)maximumTextLengthForInput;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (double)scaledFirstBaselineOffset;
- (void)setAttributedTextProvider:(id)arg1;
- (void)setBackdropOverlayBlendMode:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDefaultFirstBaselineOffset:(double)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setFontDescriptor:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setLineHeightMultiple:(double)arg1;
- (void)setMaximumNumberOfLines:(long long)arg1;
- (void)setMaximumTextLengthForInput:(long long)arg1;
- (void)setShouldBaselineAlignTrailingAccessoryImage:(bool)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextColorFollowsTintColor:(bool)arg1;
- (void)setTextPlaceholder:(id)arg1;
- (void)setTextPlaceholderColor:(id)arg1;
- (void)setTextProvider:(id)arg1;
- (void)setTextProviderAdditionalPropertiesToPrefetch:(id)arg1;
- (void)setTextValueFallbackLocalizationKey:(id)arg1;
- (void)setTextValueProperty:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTrailingAccessoryImage:(id)arg1;
- (void)setTrailingAccessoryOffset:(struct UIOffset { double x1; double x2; })arg1;
- (bool)shouldBaselineAlignTrailingAccessoryImage;
- (double)tallestFontAscender;
- (double)tallestFontBodyLeading;
- (double)tallestFontCapHeight;
- (double)tallestFontDescender;
- (double)tallestFontScaledValueForValue:(double)arg1;
- (long long)textAlignment;
- (id)textColor;
- (bool)textColorFollowsTintColor;
- (id)textDrawingCache;
- (id)textForEntityValueProvider:(id)arg1;
- (id)textPlaceholder;
- (id)textPlaceholderColor;
- (id)textProvider;
- (id)textProviderAdditionalPropertiesToPrefetch;
- (id)textValueFallbackLocalizationKey;
- (id)textValueProperty;
- (id)tintColor;
- (id)trailingAccessoryImage;
- (struct UIOffset { double x1; double x2; })trailingAccessoryOffset;
- (void)updateForPreferredContentSizeChange;

@end