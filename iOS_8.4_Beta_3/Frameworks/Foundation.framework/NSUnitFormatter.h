/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUnitFormatter : NSFormatter {
    struct UAMeasureFormat { } *_formatter;
    NSString *_localeID;
    bool _modified;
    NSNumberFormatter *_numberFormatter;
    struct UPluralRules { } *_prules;
    long long _unitStyle;
}

@property (copy) NSNumberFormatter *numberFormatter;
@property long long unitStyle;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)numberFormatter;
- (void)setNumberFormatter:(id)arg1;
- (void)setUnitStyle:(long long)arg1;
- (id)stringForValue1:(double)arg1 unit1:(unsigned long long)arg2 value2:(double)arg3 unit2:(unsigned long long)arg4;
- (id)stringForValue:(double)arg1 unit:(unsigned long long)arg2;
- (id)unitStringFromValue:(double)arg1 unit:(unsigned long long)arg2;
- (long long)unitStyle;

@end
