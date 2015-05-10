/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFFuture : NSObject {
    NSObject<OS_dispatch_group> *_executionGroup;
    id _result;
}

+ (id)futureWithResultGenerator:(id)arg1;
+ (id)futureWithSynchronousResultGenerator:(id)arg1;

- (void).cxx_destruct;
- (void)_wait;
- (id)chainResultGenerator:(id)arg1;
- (id)init;
- (id)initWithResultGenerator:(id)arg1;
- (id)initWithSynchronousResultGenerator:(id)arg1;
- (id)notifyWithCompletion:(id)arg1;
- (id)result;

@end
