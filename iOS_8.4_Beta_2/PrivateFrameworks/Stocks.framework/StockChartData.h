/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StockChartData : NSObject {
    long long _chartInterval;
    double _expirationTime;
    bool _hasVolume;
    NSMutableDictionary *_imageSetCache;
    NSArray *_interestingIndexes;
    bool _isUnavailable;
    NSMutableDictionary *_labelPlacementCache;
    NSDate *_marketCloseDate;
    NSDate *_marketOpenDate;
    NSTimeZone *_marketTimeZone;
    struct { double x1; double x2; unsigned long long x3; } *_maxValue;
    struct { double x1; double x2; unsigned long long x3; } *_minValue;
    float _previousClosePrice;
    Stock *_stock;
    unsigned int _stockValueCount;
    struct { double x1; double x2; unsigned long long x3; } *_stockValues;
    NSMutableDictionary *_xAxisLabelInfoCache;
    int _yAxisFractionDigits;
    NSMutableDictionary *_yAxisLabelInfoCache;
}

@property(assign,readwrite) long long chartInterval;
@property(assign,readwrite) double expirationTime;
@property(assign,readwrite) bool hasVolume;
@property(assign,retain) NSArray * interestingIndexes;
@property(assign,readwrite) bool isUnavailable;
@property(assign,retain) NSDate * marketCloseDate;
@property(assign,retain) NSDate * marketOpenDate;
@property(assign,retain) NSTimeZone * marketTimeZone;
@property(assign,readwrite) struct { double x1; double x2; unsigned long long x3; }* maxValue;
@property(assign,readwrite) struct { double x1; double x2; unsigned long long x3; }* minValue;
@property(assign,readwrite) float previousClosePrice;
@property(assign,readwrite) Stock * stock;
@property(assign,readonly) unsigned int stockValueCount;
@property(assign,readonly) struct { double x1; double x2; unsigned long long x3; }* stockValues;
@property(assign,readwrite) int yAxisFractionDigits;

- (void).cxx_destruct;
- (struct { double x1; double x2; unsigned long long x3; }*)allocateStockValuesWithCount:(unsigned int)arg1;
- (long long)chartInterval;
- (void)clearAllImageSets;
- (void)dealloc;
- (id)description;
- (double)expirationTime;
- (bool)hasVolume;
- (id)imageSetForDisplayMode:(id)arg1;
- (id)initWithStock:(id)arg1 interval:(long long)arg2;
- (id)interestingIndexes;
- (bool)isUnavailable;
- (long long)labelPlacementForDisplayMode:(id)arg1;
- (id)marketCloseDate;
- (id)marketOpenDate;
- (id)marketTimeZone;
- (struct { double x1; double x2; unsigned long long x3; }*)maxValue;
- (struct { double x1; double x2; unsigned long long x3; }*)minValue;
- (float)previousClosePrice;
- (void)setChartInterval:(long long)arg1;
- (void)setExpirationTime:(double)arg1;
- (void)setHasVolume:(bool)arg1;
- (void)setImageSet:(id)arg1 forDisplayMode:(id)arg2;
- (void)setInterestingIndexes:(id)arg1;
- (void)setIsUnavailable:(bool)arg1;
- (void)setLabelPlacement:(long long)arg1 forDisplayMode:(id)arg2;
- (void)setMarketCloseDate:(id)arg1;
- (void)setMarketOpenDate:(id)arg1;
- (void)setMarketTimeZone:(id)arg1;
- (void)setMaxValue:(struct { double x1; double x2; unsigned long long x3; }*)arg1;
- (void)setMinValue:(struct { double x1; double x2; unsigned long long x3; }*)arg1;
- (void)setPreviousClosePrice:(float)arg1;
- (void)setStock:(id)arg1;
- (void)setXAxisLabelInfoArray:(id)arg1 forDisplayMode:(id)arg2;
- (void)setYAxisFractionDigits:(int)arg1;
- (void)setYAxisLabelInfoArray:(id)arg1 forDisplayMode:(id)arg2;
- (id)stock;
- (unsigned int)stockValueCount;
- (struct { double x1; double x2; unsigned long long x3; }*)stockValues;
- (id)xAxisLabelInfoArrayForMode:(id)arg1;
- (int)yAxisFractionDigits;
- (id)yAxisLabelInfoArrayForMode:(id)arg1;

@end