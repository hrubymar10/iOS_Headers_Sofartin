/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTActionCondition : NSObject <NSSecureCoding> {
    NSDate *_date;
    NSString *_depiction;
    RTLocationOfInterest *_locationOfInterest;
    long long _locationOfInterestState;
}

@property(assign,readonly) NSDate * date;
@property(assign,readonly) NSString * depiction;
@property(assign,readonly) RTLocationOfInterest * locationOfInterest;
@property(assign,readonly) long long locationOfInterestState;

+ (id)locationOfInterestStateToString:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (id)depiction;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLoi:(id)arg1 loiState:(long long)arg2 date:(id)arg3 depiction:(id)arg4;
- (id)locationOfInterest;
- (long long)locationOfInterestState;

@end