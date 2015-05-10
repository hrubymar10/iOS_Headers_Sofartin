/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

@interface AppEntry : NSObject {
    unsigned long long _admissions;
    unsigned long long _negativeHits;
    unsigned long long _positiveHits;
    unsigned long long _rejections;
    unsigned long long _type1Errors;
    unsigned long long _type2Errors;
}

@property(assign,readwrite) unsigned long long admissions;
@property(assign,readwrite) unsigned long long negativeHits;
@property(assign,readwrite) unsigned long long positiveHits;
@property(assign,readwrite) unsigned long long rejections;
@property(assign,readwrite) unsigned long long type1Errors;
@property(assign,readwrite) unsigned long long type2Errors;

- (unsigned long long)admissions;
- (id)init;
- (id)initWithStatistics:(unsigned long long)arg1 negativeHits:(unsigned long long)arg2 type1Errors:(unsigned long long)arg3 type2Errors:(unsigned long long)arg4 admissions:(unsigned long long)arg5 rejections:(unsigned long long)arg6;
- (unsigned long long)negativeHits;
- (unsigned long long)positiveHits;
- (unsigned long long)rejections;
- (void)setAdmissions:(unsigned long long)arg1;
- (void)setNegativeHits:(unsigned long long)arg1;
- (void)setPositiveHits:(unsigned long long)arg1;
- (void)setRejections:(unsigned long long)arg1;
- (void)setType1Errors:(unsigned long long)arg1;
- (void)setType2Errors:(unsigned long long)arg1;
- (unsigned long long)type1Errors;
- (unsigned long long)type2Errors;

@end