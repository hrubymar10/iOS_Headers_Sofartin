/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDBackgroundTask : NSObject {
    NSObject<OS_xpc_object> *_job;
}

@property(assign,retain) NSDate * endDate;
@property(assign,retain) NSDate * startDate;
@property(assign,retain) NSDictionary * userContext;

- (void).cxx_destruct;
- (id)_initWithJob:(id)arg1;
- (id)_job;
- (id)description;
- (id)endDate;
- (id)init;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setUserContext:(id)arg1;
- (id)startDate;
- (bool)taskExpired;
- (bool)taskSatisfied;
- (bool)taskValid;
- (id)userContext;

@end
