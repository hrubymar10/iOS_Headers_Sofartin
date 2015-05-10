/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUFontDescriptor : NSObject <NSCopying, NSMutableCopying> {
    long long _leadingAdjustment;
    long long _textStyle;
    bool _usesItalic;
    bool _wantsMonospaceNumbers;
    long long _weight;
}

@property(assign,readonly) long long leadingAdjustment;
@property(assign,readonly) long long textStyle;
@property(assign,readonly) bool usesItalic;
@property(assign,readonly) bool wantsMonospaceNumbers;
@property(assign,readonly) long long weight;

+ (id)_adjustedNativeFontDescriptorWithBaseNativeFontDescriptor:(id)arg1 forCustomTextStyle:(long long)arg2;
+ (id)_baseNativeTextStyleForTextStyle:(long long)arg1;
+ (void)_getNativeFontDescriptorSymbolicTraits:(unsigned int*)arg1 nativeTextStyleAttribute:(id*)arg2 forWeight:(long long)arg3;
+ (unsigned int)_nativeFontDescriptorSymbolicTraitsForLeadingAdjustment:(long long)arg1;
+ (unsigned int)_nativeFontDescriptorSymbolicTraitsForUsingItalic:(bool)arg1;
+ (id)fontDescriptorWithTextStyle:(long long)arg1;
+ (id)fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2;
+ (id)fontDescriptorWithTextStyle:(long long)arg1 weight:(long long)arg2;

- (id)_fontWithBaseNativeFontDescriptorProvider:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultFont;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (long long)leadingAdjustment;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)preferredFont;
- (double)scaledValueForValue:(double)arg1;
- (long long)textStyle;
- (bool)usesItalic;
- (bool)wantsMonospaceNumbers;
- (long long)weight;

@end