/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationFlowControlManager : NSObject {
    NSMutableDictionary *_flowControlledOperationClasses;
}

@property(assign,readonly) NSMutableDictionary * flowControlledOperationClasses;

- (void).cxx_destruct;
- (id)flowControlledOperationClasses;
- (id)init;
- (bool)isOperationLimited:(id)arg1;
- (void)limitOperation:(id)arg1 retryAfter:(id)arg2;
- (double)secondsUntilUnlimited:(id)arg1;
- (id)statusReport;
- (void)unlimitAllOperations;

@end
