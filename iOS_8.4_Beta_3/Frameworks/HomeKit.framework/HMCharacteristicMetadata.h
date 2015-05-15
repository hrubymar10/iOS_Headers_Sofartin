/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristicMetadata : NSObject <NSSecureCoding> {
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

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (id)initWithCoder:(id)arg1;
- (id)manufacturerDescription;
- (id)maxLength;
- (id)maximumValue;
- (id)minimumValue;
- (id)stepValue;
- (id)units;

@end