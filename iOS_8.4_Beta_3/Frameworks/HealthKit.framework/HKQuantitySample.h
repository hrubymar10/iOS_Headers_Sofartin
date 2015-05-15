/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKQuantitySample : HKSample <HDCoding> {
    HKQuantity *_quantity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HKQuantity *quantity;
@property (readonly) HKQuantityType *quantityType;
@property (readonly) Class superclass;

+ (bool)_isConcreteObjectClass;
+ (id)_quantitySampleWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(id)arg4 quantityType:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 quantity:(id)arg8;
+ (id)createWithCodable:(id)arg1;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setQuantity:(id)arg1;
- (id)_validateConfiguration;
- (id)_valueDescription;
- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)quantity;
- (id)quantityType;

@end
