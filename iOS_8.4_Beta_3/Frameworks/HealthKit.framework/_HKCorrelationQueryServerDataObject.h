/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCorrelationQueryServerDataObject : _HKQueryServerDataObject {
    NSDictionary *_filterDictionary;
    long long _version;
}

@property (nonatomic, retain) NSDictionary *filterDictionary;
@property (nonatomic) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)filterDictionary;
- (id)initWithCoder:(id)arg1;
- (void)setFilterDictionary:(id)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end
