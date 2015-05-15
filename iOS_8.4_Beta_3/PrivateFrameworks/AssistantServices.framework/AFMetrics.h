/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMetrics : NSObject <NSSecureCoding> {
    long long _category;
    NSNumber *_duration;
    NSString *_originalCommandId;
}

@property (nonatomic) long long category;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, copy) NSString *originalCommandId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_roundDouble:(double)arg1 toSignificantDigits:(unsigned long long)arg2;
- (id)aceMetrics;
- (long long)category;
- (id)categoryString;
- (id)description;
- (id)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)originalCommandId;
- (void)setCategory:(long long)arg1;
- (void)setDuration:(id)arg1;
- (void)setOriginalCommandId:(id)arg1;

@end
