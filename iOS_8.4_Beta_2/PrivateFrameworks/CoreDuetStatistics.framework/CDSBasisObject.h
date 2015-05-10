/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuetStatistics.framework/CoreDuetStatistics
 */

@interface CDSBasisObject : NSObject {
    unsigned long long _attributeId;
    double _basisDoubleValue;
    unsigned long long _basisUint64Value;
    NSString *_basisValueString;
    NSDate *_creationDate;
    double _duration;
    bool _fallingEdge;
    unsigned long long _localTime;
    bool _risingEdge;
    long long _type;
}

@property(assign,readwrite) unsigned long long attributeId;
@property(assign,readwrite) double basisDoubleValue;
@property(assign,readwrite) unsigned long long basisUint64Value;
@property(assign,retain) NSString * basisValueString;
@property(assign,retain) NSDate * creationDate;
@property(assign,readwrite) double duration;
@property(assign,readwrite) bool fallingEdge;
@property(assign,readwrite) unsigned long long localTime;
@property(assign,readwrite) bool risingEdge;
@property(assign,readwrite) long long type;

- (void).cxx_destruct;
- (unsigned long long)attributeId;
- (double)basisDoubleValue;
- (unsigned long long)basisUint64Value;
- (id)basisValueString;
- (id)creationDate;
- (double)duration;
- (bool)fallingEdge;
- (id)initWithLocalTime:(unsigned long long)arg1 creationDate:(id)arg2 basisValueString:(id)arg3 basisUint64Value:(unsigned long long)arg4 basisDoubleValue:(double)arg5 risingEdge:(bool)arg6 fallingEdge:(bool)arg7 duration:(double)arg8 attributeId:(unsigned long long)arg9 type:(long long)arg10;
- (unsigned long long)localTime;
- (bool)risingEdge;
- (void)setAttributeId:(unsigned long long)arg1;
- (void)setBasisDoubleValue:(double)arg1;
- (void)setBasisUint64Value:(unsigned long long)arg1;
- (void)setBasisValueString:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFallingEdge:(bool)arg1;
- (void)setLocalTime:(unsigned long long)arg1;
- (void)setRisingEdge:(bool)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
