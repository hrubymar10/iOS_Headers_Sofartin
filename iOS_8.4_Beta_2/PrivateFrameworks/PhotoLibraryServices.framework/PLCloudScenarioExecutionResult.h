/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudScenarioExecutionResult : NSObject {
    bool _duplicateScenario;
    NSMutableArray *_failedOperations;
    NSMutableArray *_successfullOperations;
}

@property(assign,readwrite) bool duplicateScenario;
@property(assign,retain) NSMutableArray * failedOperations;
@property(assign,retain) NSMutableArray * successfullOperations;

- (void)dealloc;
- (bool)duplicateScenario;
- (id)failedOperations;
- (id)init;
- (void)setDuplicateScenario:(bool)arg1;
- (void)setFailedOperations:(id)arg1;
- (void)setSuccessfullOperations:(id)arg1;
- (id)successfullOperations;

@end