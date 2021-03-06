/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBehaviorOverrideFixedEffectivePeriod : NSObject <BBBehaviorOverrideEffectivePeriod> {
    double _effectiveInterval;
    NSUUID *_identifier;
    NSDate *_startDate;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) double effectiveInterval;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSUUID * identifier;
@property(assign,copy) NSDate * startDate;
@property(assign,readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (bool)containsDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)effectiveInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 effectiveInterval:(double)arg2 identifier:(id)arg3;
- (id)nextTransitionDateAfterDate:(id)arg1;
- (void)setEffectiveInterval:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
