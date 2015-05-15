/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNumberFormatter : NSFormatter {
    NSMutableDictionary *_attributes;
    unsigned long long _behavior;
    unsigned long long _counter;
    struct __CFNumberFormatter { } *_formatter;
    NSRecursiveLock *_lock;
    void *_reserved;
    unsigned long long _stateBitMask;
}

@property(assign,readwrite) bool allowsFloats;
@property(assign,readwrite) bool alwaysShowsDecimalSeparator;
@property(assign,copy) NSString * currencyCode;
@property(assign,copy) NSString * currencyDecimalSeparator;
@property(assign,copy) NSString * currencyGroupingSeparator;
@property(assign,copy) NSString * currencySymbol;
@property(assign,copy) NSString * decimalSeparator;
@property(assign,copy) NSString * exponentSymbol;
@property(assign,readwrite) unsigned long long formatWidth;
@property(assign,readwrite) unsigned long long formatterBehavior;
@property(assign,readwrite) long long formattingContext;
@property(assign,readwrite) bool generatesDecimalNumbers;
@property(assign,copy) NSString * groupingSeparator;
@property(assign,readwrite) unsigned long long groupingSize;
@property(assign,copy) NSString * internationalCurrencySymbol;
@property(getter=isLenient,assign,readwrite) bool lenient;
@property(assign,copy) NSLocale * locale;
@property(assign,copy) NSNumber * maximum;
@property(assign,readwrite) unsigned long long maximumFractionDigits;
@property(assign,readwrite) unsigned long long maximumIntegerDigits;
@property(assign,readwrite) unsigned long long maximumSignificantDigits;
@property(assign,copy) NSNumber * minimum;
@property(assign,readwrite) unsigned long long minimumFractionDigits;
@property(assign,readwrite) unsigned long long minimumIntegerDigits;
@property(assign,readwrite) unsigned long long minimumSignificantDigits;
@property(assign,copy) NSString * minusSign;
@property(assign,copy) NSNumber * multiplier;
@property(assign,copy) NSString * negativeFormat;
@property(assign,copy) NSString * negativeInfinitySymbol;
@property(assign,copy) NSString * negativePrefix;
@property(assign,copy) NSString * negativeSuffix;
@property(assign,copy) NSString * nilSymbol;
@property(assign,copy) NSString * notANumberSymbol;
@property(assign,readwrite) unsigned long long numberStyle;
@property(assign,copy) NSString * paddingCharacter;
@property(assign,readwrite) unsigned long long paddingPosition;
@property(getter=isPartialStringValidationEnabled,assign,readwrite) bool partialStringValidationEnabled;
@property(assign,copy) NSString * perMillSymbol;
@property(assign,copy) NSString * percentSymbol;
@property(assign,copy) NSString * plusSign;
@property(assign,copy) NSString * positiveFormat;
@property(assign,copy) NSString * positiveInfinitySymbol;
@property(assign,copy) NSString * positivePrefix;
@property(assign,copy) NSString * positiveSuffix;
@property(assign,copy) NSNumber * roundingIncrement;
@property(assign,readwrite) unsigned long long roundingMode;
@property(assign,readwrite) unsigned long long secondaryGroupingSize;
@property(assign,copy) NSDictionary * textAttributesForNegativeInfinity;
@property(assign,copy) NSDictionary * textAttributesForNegativeValues;
@property(assign,copy) NSDictionary * textAttributesForNil;
@property(assign,copy) NSDictionary * textAttributesForNotANumber;
@property(assign,copy) NSDictionary * textAttributesForPositiveInfinity;
@property(assign,copy) NSDictionary * textAttributesForPositiveValues;
@property(assign,copy) NSDictionary * textAttributesForZero;
@property(assign,readwrite) bool usesGroupingSeparator;
@property(assign,readwrite) bool usesSignificantDigits;
@property(assign,copy) NSString * zeroSymbol;

+ (id)FU_adaptiveLocalizedDistanceStringWithDistance:(double)arg1 unitStyle:(long long)arg2 usedUnit:(long long*)arg3;
+ (id)FU_decimalSeparator;
+ (double)FU_distanceInDistanceUnit:(long long)arg1 forDistanceInMeters:(double)arg2;
+ (double)FU_distanceInMetersForDistanceInUserUnit:(double)arg1;
+ (double)FU_distanceInUserDistanceUnitForDistanceInMeters:(double)arg1;
+ (long long)FU_lengthUnitForCurrentLocale;
+ (bool)FU_localeUsesMetricForPersonHeight;
+ (id)FU_localizedDisplayStringForDistanceUnit:(long long)arg1;
+ (id)FU_localizedShortUnitStringWithDistanceUnit:(long long)arg1;
+ (id)FU_localizedSpeedUnit;
+ (id)FU_localizedSpeedValueForDistance:(id)arg1 overTime:(double)arg2;
+ (id)FU_localizedStringWithCalories:(double)arg1 unitStyle:(long long)arg2;
+ (id)FU_localizedStringWithDistance:(double)arg1 distanceUnit:(long long)arg2 unitStyle:(long long)arg3 withDecimalPrecision:(long long)arg4;
+ (id)FU_localizedStringWithDistance:(double)arg1 unitStyle:(long long)arg2;
+ (id)FU_percentStringWithNumber:(id)arg1;
+ (void)FU_setUserDistanceUnit:(long long)arg1;
+ (id)FU_stringForHeight:(long long)arg1 withUnitString:(id)arg2;
+ (id)FU_stringForHeightInInches:(long long)arg1;
+ (id)FU_stringWithNumber:(id)arg1 decimalPrecision:(long long)arg2;
+ (id)FU_stringWithTimeInterval:(double)arg1 formatType:(unsigned long long)arg2;
+ (long long)FU_userDistanceUnit;
+ (id)_FU_doubleFractionNumberFormatter;
+ (id)_FU_integerNumberFormatter;
+ (id)_FU_integerPercentNumberFormatter;
+ (id)_FU_singleFractionNumberFormatter;
+ (id)_FU_zeroPaddedIntegerNumberFormatter;
+ (long long)_defaultPrecisionForDistanceUnit:(long long)arg1;
+ (id)_formatDoubleValue:(double)arg1 withFormatString:(id)arg2 withDecimalPrecision:(long long)arg3;
+ (id)_longStyleStringWithDistanceUnit:(long long)arg1 distanceInDistanceUnit:(double)arg2 withDecimalPrecision:(long long)arg3;
+ (id)_longStyleTitleStringWithDistanceUnit:(long long)arg1 distanceInDistanceUnit:(double)arg2 withDecimalPrecision:(long long)arg3;
+ (id)_shortStyleStringWithDistanceUnit:(long long)arg1 distanceInDistanceUnit:(double)arg2 withDecimalPrecision:(long long)arg3;
+ (unsigned long long)defaultFormatterBehavior;
+ (id)gkRankFormatter;
+ (id)gk_formatInteger:(long long)arg1 withGrouping:(bool)arg2;
+ (id)gk_formatUnsignedInteger:(unsigned long long)arg1 withGrouping:(bool)arg2;
+ (void)initialize;
+ (id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2;
+ (id)mf_formatInteger:(long long)arg1 withGrouping:(bool)arg2;
+ (id)mf_formatUnsignedInteger:(unsigned long long)arg1 withGrouping:(bool)arg2;
+ (void)setDefaultFormatterBehavior:(unsigned long long)arg1;

- (void*)__Keynote_NOOP;
- (void)_clearFormatter;
- (bool)_hasSetCurrencyCode;
- (bool)_hasSetCurrencySymbol;
- (bool)_hasSetInternationalCurrencySymbol;
- (void)_regenerateFormatter;
- (void)_reset;
- (void)_setUsesCharacterDirection:(bool)arg1;
- (bool)_usesCharacterDirection;
- (bool)allowsFloats;
- (bool)alwaysShowsDecimalSeparator;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (bool)checkLocaleChange;
- (bool)checkModify;
- (void)clearPropertyBit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)currencyDecimalSeparator;
- (id)currencyGroupingSeparator;
- (id)currencySymbol;
- (void)dealloc;
- (id)decimalSeparator;
- (void)encodeWithCoder:(id)arg1;
- (id)exponentSymbol;
- (void)finalize;
- (unsigned long long)formatWidth;
- (unsigned long long)formatterBehavior;
- (long long)formattingContext;
- (bool)generatesDecimalNumbers;
- (void*)getFormatter;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 error:(out id*)arg4;
- (id)groupingSeparator;
- (unsigned long long)groupingSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)internationalCurrencySymbol;
- (bool)isLenient;
- (bool)isPartialStringValidationEnabled;
- (id)locale;
- (id)maximum;
- (unsigned long long)maximumFractionDigits;
- (unsigned long long)maximumIntegerDigits;
- (unsigned long long)maximumSignificantDigits;
- (id)minimum;
- (unsigned long long)minimumFractionDigits;
- (unsigned long long)minimumIntegerDigits;
- (unsigned long long)minimumSignificantDigits;
- (id)minusSign;
- (id)multiplier;
- (id)negativeFormat;
- (id)negativeInfinitySymbol;
- (id)negativePrefix;
- (id)negativeSuffix;
- (id)nilSymbol;
- (id)notANumberSymbol;
- (id)numberFromString:(id)arg1;
- (unsigned long long)numberStyle;
- (id)paddingCharacter;
- (unsigned long long)paddingPosition;
- (id)perMillSymbol;
- (id)percentSymbol;
- (id)plusSign;
- (id)positiveFormat;
- (id)positiveInfinitySymbol;
- (id)positivePrefix;
- (id)positiveSuffix;
- (void)resetCheckLocaleChange;
- (void)resetCheckModify;
- (id)roundingIncrement;
- (unsigned long long)roundingMode;
- (unsigned long long)secondaryGroupingSize;
- (void)setAllowsFloats:(bool)arg1;
- (void)setAlwaysShowsDecimalSeparator:(bool)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setCurrencyDecimalSeparator:(id)arg1;
- (void)setCurrencyGroupingSeparator:(id)arg1;
- (void)setCurrencySymbol:(id)arg1;
- (void)setDecimalSeparator:(id)arg1;
- (void)setExponentSymbol:(id)arg1;
- (void)setFormatWidth:(unsigned long long)arg1;
- (void)setFormatterBehavior:(unsigned long long)arg1;
- (void)setFormattingContext:(long long)arg1;
- (void)setGeneratesDecimalNumbers:(bool)arg1;
- (void)setGroupingSeparator:(id)arg1;
- (void)setGroupingSize:(unsigned long long)arg1;
- (void)setInternationalCurrencySymbol:(id)arg1;
- (void)setLenient:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaximum:(id)arg1;
- (void)setMaximumFractionDigits:(unsigned long long)arg1;
- (void)setMaximumIntegerDigits:(unsigned long long)arg1;
- (void)setMaximumSignificantDigits:(unsigned long long)arg1;
- (void)setMinimum:(id)arg1;
- (void)setMinimumFractionDigits:(unsigned long long)arg1;
- (void)setMinimumIntegerDigits:(unsigned long long)arg1;
- (void)setMinimumSignificantDigits:(unsigned long long)arg1;
- (void)setMinusSign:(id)arg1;
- (void)setMultiplier:(id)arg1;
- (void)setNegativeFormat:(id)arg1;
- (void)setNegativeInfinitySymbol:(id)arg1;
- (void)setNegativePrefix:(id)arg1;
- (void)setNegativeSuffix:(id)arg1;
- (void)setNilSymbol:(id)arg1;
- (void)setNotANumberSymbol:(id)arg1;
- (void)setNumberStyle:(unsigned long long)arg1;
- (void)setPaddingCharacter:(id)arg1;
- (void)setPaddingPosition:(unsigned long long)arg1;
- (void)setPartialStringValidationEnabled:(bool)arg1;
- (void)setPerMillSymbol:(id)arg1;
- (void)setPercentSymbol:(id)arg1;
- (void)setPlusSign:(id)arg1;
- (void)setPositiveFormat:(id)arg1;
- (void)setPositiveInfinitySymbol:(id)arg1;
- (void)setPositivePrefix:(id)arg1;
- (void)setPositiveSuffix:(id)arg1;
- (void)setPropertyBit;
- (void)setRoundingIncrement:(id)arg1;
- (void)setRoundingMode:(unsigned long long)arg1;
- (void)setSecondaryGroupingSize:(unsigned long long)arg1;
- (void)setTextAttributesForNegativeInfinity:(id)arg1;
- (void)setTextAttributesForNegativeValues:(id)arg1;
- (void)setTextAttributesForNil:(id)arg1;
- (void)setTextAttributesForNotANumber:(id)arg1;
- (void)setTextAttributesForPositiveInfinity:(id)arg1;
- (void)setTextAttributesForPositiveValues:(id)arg1;
- (void)setTextAttributesForZero:(id)arg1;
- (void)setUsesGroupingSeparator:(bool)arg1;
- (void)setUsesSignificantDigits:(bool)arg1;
- (void)setZeroSymbol:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromNumber:(id)arg1;
- (id)textAttributesForNegativeInfinity;
- (id)textAttributesForNegativeValues;
- (id)textAttributesForNil;
- (id)textAttributesForNotANumber;
- (id)textAttributesForPositiveInfinity;
- (id)textAttributesForPositiveValues;
- (id)textAttributesForZero;
- (bool)usesGroupingSeparator;
- (bool)usesSignificantDigits;
- (id)zeroSymbol;

@end
