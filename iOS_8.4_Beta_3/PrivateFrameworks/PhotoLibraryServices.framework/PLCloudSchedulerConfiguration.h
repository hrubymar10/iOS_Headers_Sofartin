/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSchedulerConfiguration : NSObject {
    unsigned long long _concurrencyLevel;
    NSArray *_scenarioProducers;
    NSArray *_triggers;
}

@property (nonatomic) unsigned long long concurrencyLevel;
@property (nonatomic, retain) NSArray *scenarioProducers;
@property (nonatomic, retain) NSArray *triggers;

- (unsigned long long)concurrencyLevel;
- (id)scenarioProducers;
- (void)setConcurrencyLevel:(unsigned long long)arg1;
- (void)setScenarioProducers:(id)arg1;
- (void)setTriggers:(id)arg1;
- (id)triggers;

@end
