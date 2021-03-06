/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
 */

@interface ABLEGradientModelController : ABLEModelController {
    NSDictionary *_configuration;
    ABLECoreDuetController *_coreDuetController;
    unsigned long long _currentBON;
    unsigned long long _currentShortBON;
    ABLEGradient *_gradient;
    NSArray *_lastData;
    NSDate *_lastDate;
    float _lastGradient;
    NSMutableArray *_lastShortData;
    float _lastShortGradient;
    bool enabled;
    bool expires;
    NSDate *expiryDate;
    double historyPeriodRequired;
    double lifetime;
    double recurrence;
}

@property(assign,retain) NSDictionary * configuration;
@property(assign,readonly) ABLECoreDuetController * coreDuetController;
@property(assign,readwrite) unsigned long long currentBON;
@property(assign,readonly) unsigned long long currentShortBON;
@property(assign,readwrite) bool enabled;
@property(assign,retain) NSDate * expiryDate;
@property(assign,readonly) ABLEGradient * gradient;
@property(assign,readwrite) double historyPeriodRequired;
@property(assign,retain) NSArray * lastData;
@property(assign,retain) NSDate * lastDate;
@property(assign,readonly) float lastGradient;
@property(assign,retain) NSMutableArray * lastShortData;
@property(assign,readonly) float lastShortGradient;
@property(assign,readonly) double lifetime;
@property(assign,readonly) double recurrence;

- (void).cxx_destruct;
- (void)calculateBONForCurrentLevel:(float)arg1 andChargeState:(bool)arg2 atDate:(id)arg3 onQueue:(id)arg4 usingHandler:(id)arg5;
- (void)calculateShortGradientBONForDate:(id)arg1;
- (void)calculateShortGradientBONForDate:(id)arg1 chargeLevel:(float)arg2;
- (id)configuration;
- (id)coreDuetController;
- (unsigned long long)currentBON;
- (unsigned long long)currentShortBON;
- (id)currentState;
- (id)defaultConfiguration;
- (bool)enabled;
- (bool)existsDataForPredictionUsingDay:(id)arg1 andOffsetDays:(id)arg2;
- (bool)existsDataForPredictionUsingDefaultOffsetsAndDay:(id)arg1;
- (bool)expires;
- (id)expiryDate;
- (id)getBatteryDataForDate:(id)arg1 asTable:(bool)arg2;
- (id)gradient;
- (double)historyPeriodRequired;
- (id)initWithCoreDuetController:(id)arg1;
- (id)lastData;
- (id)lastDate;
- (float)lastGradient;
- (id)lastShortData;
- (float)lastShortGradient;
- (double)lifetime;
- (double)recurrence;
- (void)resetModel;
- (void)setConfiguration:(id)arg1;
- (void)setCurrentBON:(unsigned long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setExpiryDate:(id)arg1;
- (void)setHistoryPeriodRequired:(double)arg1;
- (void)setLastData:(id)arg1;
- (void)setLastDate:(id)arg1;
- (void)setLastShortData:(id)arg1;
- (void)significantEventAtDate:(id)arg1;
- (void)updateConfiguration:(id)arg1;
- (bool)valid;

@end
