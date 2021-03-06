/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface Stock : NSObject {
    NSString *_averageVolume;
    NSString *_change;
    StockChartData *_chartDataArray;
    NSString *_companyName;
    StockDataSource *_dataSource;
    NSString *_dividendYield;
    Exchange *_exchange;
    NSString *_high;
    NSURL *_infoURL;
    NSString *_low;
    NSString *_marketcap;
    NSString *_open;
    NSString *_peRatio;
    NSString *_price;
    unsigned int _pricePrecision;
    NSString *_shortCompanyName;
    NSString *_symbol;
    NSString *_symbolType;
    double _timeMetadataLastUpdated;
    double _timeQuoteLastUpdated;
    NSString *_volume;
    NSString *_yearHigh;
    NSString *_yearLow;
}

@property(assign,retain) NSString * averageVolume;
@property(assign,retain) NSString * change;
@property(assign,retain) NSString * companyName;
@property(assign,retain) StockDataSource * dataSource;
@property(assign,retain) NSString * dividendYield;
@property(assign,retain) Exchange * exchange;
@property(assign,retain) NSString * high;
@property(assign,retain) NSURL * infoURL;
@property(assign,retain) NSString * low;
@property(assign,retain) NSString * marketcap;
@property(assign,retain) NSString * open;
@property(assign,retain) NSString * peRatio;
@property(assign,retain) NSString * price;
@property(assign,readonly) unsigned int pricePrecision;
@property(assign,retain) NSString * shortCompanyName;
@property(assign,retain) NSString * symbol;
@property(assign,retain) NSString * symbolType;
@property(assign,readwrite) double timeMetadataLastUpdated;
@property(assign,readwrite) double timeQuoteLastUpdated;
@property(assign,retain) NSString * volume;
@property(assign,retain) NSString * yearHigh;
@property(assign,retain) NSString * yearLow;

+ (id)BlankValueString;
+ (id)PercentFormatter;
+ (id)_formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(bool)arg3 groupingSeparators:(bool)arg4;
+ (id)_potentiallyAbsentKeys;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(bool)arg3;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(bool)arg3 groupingSeparators:(bool)arg4;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(bool)arg3 groupingSeparators:(bool)arg4 droppingFractionDigitsIfLengthExceeds:(unsigned int)arg5;
+ (id)formattedStringForString:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(bool)arg3;
+ (id)formattedStringForString:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(bool)arg3 droppingFractionDigitsIfLengthExceeds:(unsigned int)arg4;
+ (bool)localeUsesASCIIDigits;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1 fractionDigits:(unsigned int)arg2;
+ (id)percentSymbol;
+ (id)postfixCharacterForMagnitude:(unsigned int)arg1 unitMagnitude:(unsigned int*)arg2;
+ (void)resetLocale;
+ (id)urlForStock:(id)arg1;
+ (id)urlForStockSymbol:(id)arg1;

- (void).cxx_destruct;
- (double)_updateInterval;
- (void)_updatePricePrecision;
- (id)archiveDictionary;
- (id)averageVolume;
- (id)change;
- (bool)changeIsNegative;
- (bool)changeIsZero;
- (id)chartDataForInterval:(long long)arg1;
- (id)companyName;
- (id)dataSource;
- (void)dealloc;
- (id)description;
- (id)dividendYield;
- (bool)doesMetadataNeedUpdate;
- (bool)doesQuoteNeedUpdate;
- (id)exchange;
- (id)formattedChangePercent:(bool)arg1;
- (id)formattedChangePercent:(bool)arg1 includePercentSign:(bool)arg2;
- (id)formattedPrice;
- (unsigned long long)hash;
- (id)high;
- (id)infoURL;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIndex;
- (bool)isMetadataStale;
- (bool)isQuoteStale;
- (id)listName;
- (id)listNameWithMaxIndexNameLength:(unsigned long long)arg1;
- (id)low;
- (bool)marketIsOpen;
- (id)marketcap;
- (id)open;
- (id)peRatio;
- (void)populateFromDictionary:(id)arg1;
- (id)price;
- (unsigned int)pricePrecision;
- (void)resetLocale;
- (void)setAverageVolume:(id)arg1;
- (void)setChange:(id)arg1;
- (void)setChartData:(id)arg1 forInterval:(long long)arg2;
- (void)setCompanyName:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDividendYield:(id)arg1;
- (void)setExchange:(id)arg1;
- (void)setHigh:(id)arg1;
- (void)setInfoURL:(id)arg1;
- (void)setLow:(id)arg1;
- (void)setMarketcap:(id)arg1;
- (void)setOpen:(id)arg1;
- (void)setPeRatio:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setShortCompanyName:(id)arg1;
- (void)setSymbol:(id)arg1;
- (void)setSymbolType:(id)arg1;
- (void)setTimeMetadataLastUpdated:(double)arg1;
- (void)setTimeQuoteLastUpdated:(double)arg1;
- (void)setVolume:(id)arg1;
- (void)setYearHigh:(id)arg1;
- (void)setYearLow:(id)arg1;
- (id)shortCompanyName;
- (id)symbol;
- (id)symbolType;
- (double)timeMetadataLastUpdated;
- (double)timeQuoteLastUpdated;
- (void)updateMetadataWithDictionary:(id)arg1 forTime:(double)arg2;
- (void)updateQuoteWithDictionary:(id)arg1 forTime:(double)arg2;
- (id)volume;
- (id)yearHigh;
- (id)yearLow;

@end
