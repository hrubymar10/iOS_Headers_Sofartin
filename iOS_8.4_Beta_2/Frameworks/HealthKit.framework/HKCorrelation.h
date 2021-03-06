/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCorrelation : HKSample <HDCoding, NSSecureCoding> {
    NSMutableDictionary *_objects;
}

@property(getter=_UUID,assign,readonly) NSUUID * UUID;
@property(assign,readonly) HKCorrelationType * correlationType;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSSet * objects;
@property(assign,readonly) Class superclass;

+ (bool)_allowEmptyCorrelations;
+ (bool)_isConcreteObjectClass;
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4;
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 metadata:(id)arg5;
+ (id)createWithCodable:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_UUID;
- (void)_addCorrelatedObject:(id)arg1;
- (void)_addCorrelatedObjects:(id)arg1;
- (id)_allTypes;
- (bool)_containsObjects;
- (bool)_correlatedObjectsMatchFilterDictionary:(id)arg1;
- (void)_filterCorrelatedObjectsWithFilterDictionary:(id)arg1;
- (id)_init;
- (void)_removeAllCorrelatedObjects;
- (id)_validateConfiguration;
- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
- (id)correlationType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)hd_cleanupBeforeJournalInsertion;
- (bool)hd_insertRelatedDataWithHealthDaemon:(id)arg1 database:(id)arg2 entity:(id)arg3 error:(id*)arg4;
- (id)hd_relatedJournalEntries;
- (id)initWithCoder:(id)arg1;
- (id)objects;
- (id)objectsForType:(id)arg1;

@end
