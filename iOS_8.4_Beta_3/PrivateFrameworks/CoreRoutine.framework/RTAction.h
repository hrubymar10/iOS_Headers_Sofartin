/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTAction : NSObject <NSSecureCoding> {
    NSDictionary *_options;
    long long _type;
}

@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) long long type;

+ (id)actionTypeToString:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 andOptions:(id)arg2;
- (id)options;
- (long long)type;

@end
