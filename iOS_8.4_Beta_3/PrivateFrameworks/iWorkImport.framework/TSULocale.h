/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSULocale : NSObject {
    NSString *_activeCurrencyCode;
    NSString *_activeNoMinusSignCurrencyCode;
    NSString *_currencyCode;
    NSString *_currencyDecimalSeparator;
    struct __CFNumberFormatter { } *_currencyFormatter;
    int _dateComponentOrdering;
    TSUDateParserLibrary *_dateParserLibrary;
    NSString *_decimalSeparator;
    NSString *_documentLanguageIdentifier;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } _formattersMutex;
    struct __CFLocale { } *_gregorianCalendarLocale;
    NSString *_groupingSeparator;
    unsigned int _groupingSize;
    NSString *_languageCode;
    NSString *_listSeparator;
    NSLocale *_locale;
    NSString *_localeIdentifier;
    NSMutableDictionary *_localeSpecificStorage;
    NSLock *_localeSpecificStorageLock;
    struct __CFNumberFormatter { } *_noMinusSignCurrencyFormatter;
    struct __CFNumberFormatter { } *_noMinusSignPlainFormatter;
    NSLock *_numberFormatterStringFromDoubleWithFormatLock;
    NSMutableArray *_numberFormatters;
    struct __CFNumberFormatter { } *_plainFormatter;
    NSMutableArray *_scientificNumberFormatters;
    NSArray *_shortMonthSymbols;
    NSArray *_shortStandaloneMonthSymbols;
    NSArray *_shortStandaloneWeekdaySymbols;
    NSArray *_standaloneMonthSymbols;
    NSArray *_standaloneWeekdaySymbols;
    NSArray *_weekdaySymbols;
}

@property(assign,readonly) NSString * arrayRowSeparator;
@property(assign,readonly) struct __CFLocale { }* cfGregorianCalendarLocale;
@property(assign,readonly) struct __CFLocale { }* cfLocale;
@property(assign,readonly) NSString * currencyCode;
@property(assign,readonly) NSString * currencyDecimalSeparator;
@property(assign,readonly) int dateComponentOrdering;
@property(assign,readonly) TSUDateParserLibrary * dateParserLibrary;
@property(assign,readonly) NSString * decimalSeparator;
@property(assign,readonly) NSString * documentLanguageIdentifier;
@property(assign,readonly) NSLocale * gregorianCalendarLocale;
@property(assign,readonly) NSString * groupingSeparator;
@property(assign,readonly) unsigned int groupingSize;
@property(assign,readonly) NSString * languageCode;
@property(assign,readonly) NSString * listSeparator;
@property(assign,readonly) NSLocale * locale;
@property(assign,readonly) NSString * localeIdentifier;
@property(assign,readonly) NSArray * shortMonthSymbols;
@property(assign,readonly) NSArray * shortStandaloneMonthSymbols;
@property(assign,readonly) NSArray * shortStandaloneWeekdaySymbols;
@property(assign,readonly) NSArray * standaloneMonthSymbols;
@property(assign,readonly) NSArray * standaloneWeekdaySymbols;
@property(assign,readonly) NSTimeZone * timeZone;
@property(assign,readonly) NSArray * weekdaySymbols;

+ (id)canonicalizeLocaleIdentifier:(id)arg1;
+ (id)canonicalizeLocaleIdentifierWithLanguageAndRegionOnly:(id)arg1;
+ (id)canonicalizeLocaleIdentifierWithLanguageAndScriptOnly:(id)arg1;
+ (id)canonicalizeLocaleIdentifierWithLanguageScriptAndRegionOnly:(id)arg1;
+ (id)currentLocale;
+ (void)initialize;
+ (id)localeForLocaleIdentifier:(id)arg1 documentLanguageIdentifier:(id)arg2;
+ (id)preferredLanguages;
+ (void)saveLocaleForReuse:(id)arg1;
+ (void)setLocalizedStringBundle:(struct __CFBundle { }*)arg1;

- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundle:(struct __CFBundle { }*)arg4;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4;
- (void)_initializeNumberFormatterStringFromDoubleCache;
- (id)allLocalizedFunctions;
- (id)arrayRowSeparator;
- (struct __CFLocale { }*)cfGregorianCalendarLocale;
- (struct __CFLocale { }*)cfLocale;
- (struct __CFNumberFormatter { }*)checkoutNumberFormatter;
- (struct __CFNumberFormatter { }*)checkoutScientificNumberFormatter;
- (id)copyWithDocumentLanguageIdentifier:(id)arg1;
- (id)currencyCode;
- (id)currencyDecimalSeparator;
- (int)dateComponentOrdering;
- (id)dateParserLibrary;
- (void)dealloc;
- (id)decimalSeparator;
- (id)description;
- (id)documentLanguageIdentifier;
- (id)functionLocalizationDictionary;
- (id)functionNameForLocalizedString:(id)arg1;
- (id)gregorianCalendarLocale;
- (id)groupingSeparator;
- (unsigned int)groupingSize;
- (id)initWithLocale:(id)arg1 documentLanguageIdentifier:(id)arg2;
- (id)initWithLocale:(id)arg1 documentLanguageIdentifier:(id)arg2 isUserLocale:(bool)arg3;
- (id)languageCode;
- (id)listSeparator;
- (void)loadLocalizedStrings;
- (id)locale;
- (id)localeIdentifier;
- (id)localeIdentifierWithLanguageAndRegionOnly;
- (id)localeIdentifierWithLanguageScriptAndRegionOnly;
- (id)localeSpecificStorageForKey:(id)arg1;
- (long long)localizedCaseInsensitiveCompare:(id)arg1 toString:(id)arg2;
- (bool)localizedCaseInsensitiveIsEqual:(id)arg1 toString:(id)arg2;
- (id)localizedCategoryArray;
- (id)localizedCategoryForFunction:(id)arg1;
- (long long)localizedCompare:(id)arg1 toString:(id)arg2;
- (id)localizedFalseString;
- (id)localizedFalseStrings;
- (id)localizedFunctionCategoryDictionary;
- (id)localizedFunctionNameForMenuTag:(int)arg1;
- (id)localizedModeNameForArgument:(short)arg1 modeIndex:(short)arg2 ofFunction:(id)arg3;
- (id)localizedModeToolTipForArgument:(short)arg1 modeIndex:(short)arg2 ofFunction:(id)arg3;
- (id)localizedNameForArgument:(short)arg1 ofFunction:(id)arg2;
- (id)localizedNameForFunction:(id)arg1;
- (id)localizedNamesForFunctions:(id)arg1;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (bool)localizedStringIsFalse:(id)arg1;
- (bool)localizedStringIsTrue:(id)arg1;
- (id)localizedToolTipForArgument:(short)arg1 ofFunction:(id)arg2;
- (id)localizedToolTipForFunction:(id)arg1;
- (id)localizedTrueString;
- (id)localizedTrueStrings;
- (id)localizedTypeStringForArgumentType:(int)arg1;
- (id)numberFormatterStringFromDouble:(double)arg1 withFormat:(id)arg2 useDecimalPlaces:(bool)arg3 minDecimalPlaces:(unsigned short)arg4 decimalPlaces:(unsigned short)arg5 showThousandsSeparator:(bool)arg6 currencyCode:(id)arg7 suppressMinusSign:(bool)arg8;
- (void)returnNumberFormatter:(struct __CFNumberFormatter { }*)arg1;
- (void)returnScientificNumberFormatter:(struct __CFNumberFormatter { }*)arg1;
- (void)setLocaleSpecificStorage:(id)arg1 forKey:(id)arg2;
- (id)shortMonthSymbols;
- (id)shortStandaloneMonthSymbols;
- (id)shortStandaloneWeekdaySymbols;
- (id)standaloneMonthSymbols;
- (id)standaloneWeekdaySymbols;
- (id)supportedFunctions;
- (id)timeZone;
- (id)weekdaySymbols;

@end
