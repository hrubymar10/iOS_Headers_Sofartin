/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicMetadata : NSObject <NSSecureCoding> {
    NSString *_format;
    NSString *_manufacturerDescription;
    NSNumber *_maxLength;
    NSNumber *_maximumValue;
    NSNumber *_minimumValue;
    NSNumber *_stepValue;
    NSString *_units;
}

@property(assign,copy) NSString * format;
@property(assign,copy) NSString * manufacturerDescription;
@property(assign,readonly) NSNumber * maxLength;
@property(assign,readonly) NSNumber * maximumValue;
@property(assign,readonly) NSNumber * minimumValue;
@property(assign,readonly) NSNumber * stepValue;
@property(assign,copy) NSString * units;

+ (bool)isValidMetadata:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)configureWithCharacteristicMetadata:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (id)initWithCharacteristicMetadata:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)manufacturerDescription;
- (id)maxLength;
- (id)maximumValue;
- (id)minimumValue;
- (id)stepValue;
- (id)units;

@end