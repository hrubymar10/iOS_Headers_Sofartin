/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudExecutingScenario : NSObject {
    id _completionCallback;
    PLCloudScenarioExecutionResult *_executionState;
    PLCloudScenario *_scenario;
}

@property(assign,copy) id completionCallback;
@property(assign,retain) PLCloudScenarioExecutionResult * executionState;
@property(assign,retain) PLCloudScenario * scenario;

- (id)completionCallback;
- (void)dealloc;
- (id)executionState;
- (id)scenario;
- (void)setCompletionCallback:(id)arg1;
- (void)setExecutionState:(id)arg1;
- (void)setScenario:(id)arg1;

@end
