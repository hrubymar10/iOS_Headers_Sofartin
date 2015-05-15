/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUNumberFormat : NSObject <NSCopying, NSMutableCopying, TSUNumberFormatting> {
    unsigned char mBase;
    unsigned short mBasePlaces;
    bool mBaseUseMinusSign;
    NSString *mCurrencyCode;
    unsigned short mDecimalPlaces;
    unsigned char mDecimalWidth;
    bool mFormatContainsIntegerToken;
    bool mFormatContainsSpecialTokens;
    NSString *mFormatName;
    NSString *mFormatString;
    bool mFormatStringContainsTabCharacter;
    bool mFormatStringRequiresSuppressionOfMinusSign;
    int mFractionAccuracy;
    bool mIgnoreDecimalPlacesForZeroValue;
    unsigned short mIndexFromRightOfLastDigitPlaceholder;
    NSIndexSet *mInterstitialStringInsertionIndexes;
    NSArray *mInterstitialStrings;
    bool mIsCustom;
    bool mIsTextFormat;
    unsigned char mMinimumIntegerWidth;
    int mNegativeStyle;
    unsigned char mNumberOfHashDecimalPlaceholders;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    NSString *mPrefixString;
    bool mRequiresFractionReplacement;
    double mScaleFactor;
    bool mShowThousandsSeparator;
    NSString *mSuffixString;
    unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;
    bool mUseAccountingStyle;
    bool mUseScientificFormattingAutomatically;
    int mValueType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 base:(unsigned char)arg9 basePlaces:(unsigned short)arg10 baseUseMinusSign:(bool)arg11;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(bool)arg14 isCustom:(bool)arg15 formatName:(id)arg16;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 scaleFactor:(double)arg9 isCustom:(bool)arg10 formatName:(id)arg11;
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 suffixString:(id)arg9;

- (unsigned short)base;
- (unsigned short)basePlaces;
- (id)baseStringFromDouble:(double)arg1;
- (bool)baseUseMinusSign;
- (bool)canFormatText;
- (id)chartLabelStringFromDouble:(double)arg1;
- (id)chartLabelStringFromDouble:(double)arg1 forceSuppressMinusSign:(bool)arg2;
- (id)chartLabelStringNofixFromDouble:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (bool)customFormatShouldAutoInsertPercentSymbol;
- (id)customNumberFormatTokens;
- (void)dealloc;
- (unsigned short)decimalPlaces;
- (id)description;
- (id)formatName;
- (id)formatString;
- (int)fractionAccuracy;
- (id)fractionStringFromDouble:(double)arg1;
- (bool)hasValidDecimalPlaces;
- (unsigned long long)hash;
- (bool)ignoreDecimalPlacesForZeroValue;
- (id)init;
- (id)initCustomFormatWithFormatString:(id)arg1 currencyCode:(id)arg2 showThousandsSeparator:(bool)arg3 fractionAccuracy:(int)arg4 scaleFactor:(double)arg5 interstitialStrings:(id)arg6 interstitialStringInsertionIndexes:(id)arg7 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg8 minimumIntegerWidth:(unsigned char)arg9 decimalWidth:(unsigned char)arg10 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg11 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg12 isTextFormat:(bool)arg13 formatName:(id)arg14;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 base:(unsigned char)arg9 basePlaces:(unsigned short)arg10 baseUseMinusSign:(bool)arg11;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(bool)arg14 isCustom:(bool)arg15 interstitialStrings:(id)arg16 interstitialStringInsertionIndexes:(id)arg17 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg18 minimumIntegerWidth:(unsigned char)arg19 decimalWidth:(unsigned char)arg20 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg21 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg22 isTextFormat:(bool)arg23 formatName:(id)arg24;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 suffixString:(id)arg9;
- (bool)isCustom;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (bool)isTextFormat;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)negativeStyle;
- (id)numberFormatByIncrementingDecimalPlaces:(short)arg1;
- (id)numberFormatBySettingBase:(unsigned char)arg1;
- (id)numberFormatBySettingBasePlaces:(unsigned short)arg1;
- (id)numberFormatBySettingBaseRepresentNegativeWithMinus:(bool)arg1;
- (id)numberFormatBySettingCurrencyCode:(id)arg1;
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1;
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1 andNegativeStyle:(int)arg2;
- (id)numberFormatBySettingFractionAccuracy:(int)arg1;
- (id)numberFormatBySettingNegativeStyle:(int)arg1;
- (id)numberFormatBySettingPrefixString:(id)arg1;
- (id)numberFormatBySettingShowThousandsSeparator:(bool)arg1;
- (id)numberFormatBySettingSuffixString:(id)arg1;
- (id)numberFormatBySettingUseAccountingStyle:(bool)arg1;
- (id)numberFormatBySettingValueType:(int)arg1;
- (id)prefixString;
- (bool)requiresParensToBeReplacedWithSpacesForDouble:(double)arg1;
- (double)scaleFactor;
- (void)setFormatName:(id)arg1;
- (void)setIgnoreDecimalPlacesForZeroValue:(bool)arg1;
- (void)setUseScientificFormattingAutomatically:(bool)arg1;
- (bool)showThousandsSeparator;
- (id)stringFromDouble:(double)arg1;
- (id)stringFromDouble:(double)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3;
- (id)stringFromDouble:(double)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3 forceSuppressMinusSign:(bool)arg4;
- (id)stringFromDouble:(double)arg1 forceSuppressMinusSign:(bool)arg2;
- (id)stringFromDouble:(double)arg1 minimumDecimalPlaces:(unsigned short)arg2;
- (id)stringFromDouble:(double)arg1 minimumDecimalPlaces:(unsigned short)arg2 forceSuppressMinusSign:(bool)arg3;
- (id)stringFromString:(id)arg1;
- (id)suffixString;
- (bool)useScientificFormattingAutomatically;
- (bool)usesAccountingStyle;
- (bool)usesTabs;
- (bool)usesTextFormatForValue:(double)arg1;
- (int)valueType;

@end
