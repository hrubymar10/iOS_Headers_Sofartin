/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDataDeletionJournalEntry : HDJournalEntry {
    HKObject *_dataObject;
    bool _restrictSource;
}

@property(assign,readonly) HKObject * dataObject;
@property(assign,readonly) bool restrictSource;

+ (void)applyEntries:(id)arg1 withDaemon:(id)arg2;
+ (long long)behavior;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataObject:(id)arg1 restrictSource:(bool)arg2;
- (bool)restrictSource;

@end