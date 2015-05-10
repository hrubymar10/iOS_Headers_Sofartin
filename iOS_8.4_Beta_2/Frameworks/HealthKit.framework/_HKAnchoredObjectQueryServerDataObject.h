/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAnchoredObjectQueryServerDataObject : _HKQueryServerDataObject {
    NSNumber *_anchor;
    unsigned long long _limit;
}

@property(assign,retain) NSNumber * anchor;
@property(assign,readwrite) unsigned long long limit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)limit;
- (void)setAnchor:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;

@end
