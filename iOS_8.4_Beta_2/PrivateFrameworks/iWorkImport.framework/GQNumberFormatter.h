/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQNumberFormatter : NSObject {
    struct __CFString { } *mAdditionalCurrencyCode;
    struct __CFArray { } *mAdditionalCurrencyCodeFormatters;
    NSMutableDictionary *mCurrencyCodeToHalfWidthSymbolMap;
    NSMutableDictionary *mCurrencyCodeToSymbolMap;
    struct __CFArray { } *mCurrencyFormatters;
    NSString *mCurrencyString;
    struct __CFArray { } *mDecimalFormatters;
    NSString *mDecimalString;
    struct __CFNumberFormatter { } *mFractionFormatter;
    struct __CFLocale { } *mLocale;
    NSString *mPercentSymbol;
    struct __CFArray { } *mPercentageFormatters;
    NSString *mPercentageString;
    struct __CFArray { } *mScientificFormatters;
    NSString *mScientificString;
    NSMutableArray *mTransformedCurrencyStrings;
    NSMutableArray *mTransformedDecimalStrings;
    NSMutableArray *mTransformedPercentageStrings;
    NSMutableArray *mTransformedScientificStrings;
}

+ (id)availableCurrencyCodes;
+ (id)currencySymbolForCurrencyCode:(id)arg1;
+ (id)currentLocaleCurrencyCode;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1;
+ (id)defaultFormatStringForValueType:(int)arg1;
+ (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
+ (id)displayNameForCurrencyCode:(id)arg1;
+ (void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3;
+ (id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2;
+ (id)formatterForLocale:(struct __CFLocale { }*)arg1;
+ (id)localizedPercentSymbol;
+ (id)numberFormatStringSpecialSymbols;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1;
+ (int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2;
+ (id)userVisibleCurrencyCodes;

- (bool)currencyFromString:(struct __CFString { }*)arg1 additionalCurrencyCode:(struct __CFString { }*)arg2 value:(double*)arg3 formatString:(const struct __CFString {}**)arg4 currencyCode:(const struct __CFString {}**)arg5;
- (id)currencySymbolForCurrencyCode:(id)arg1;
- (id)currentLocaleCurrencyCode;
- (void)dealloc;
- (bool)decimalFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (id)defaultFormatStringForValueType:(int)arg1;
- (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
- (id)displayNameForCurrencyCode:(id)arg1;
- (bool)findCurrencySymbolInString:(struct __CFString { }*)arg1 additionalCurrencyCode:(struct __CFString { }*)arg2 successfulString:(const struct __CFString {}**)arg3;
- (bool)fractionFromString:(struct __CFString { }*)arg1 value:(double*)arg2;
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1;
- (id)initWithLocale:(struct __CFLocale { }*)arg1;
- (id)localizedPercentSymbol;
- (void)numberPreferencesChanged:(id)arg1;
- (bool)percentageFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (bool)scientificFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (bool)valueFromString:(struct __CFString { }*)arg1 formatters:(struct __CFArray { }*)arg2 value:(double*)arg3 formatString:(const struct __CFString {}**)arg4 currencyCode:(const struct __CFString {}**)arg5;

@end
