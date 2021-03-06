/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DASharedCalendarContext : NSObject {
    NSString *_accountID;
    NSString *_calendarID;
    id _completionBlock;
    NSObject<OS_dispatch_queue> *_queue;
    bool _shouldSyncCalendar;
}

@property(assign,readonly) NSString * accountID;
@property(assign,readonly) NSString * calendarID;
@property(assign,copy) id completionBlock;
@property(assign,readonly) NSObject<OS_dispatch_queue> * queue;
@property(assign,readwrite) bool shouldSyncCalendar;

- (void).cxx_destruct;
- (id)accountID;
- (id)calendarID;
- (id)completionBlock;
- (void)finishedWithError:(id)arg1;
- (id)initWithCalendarID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(id)arg4;
- (id)queue;
- (void)setShouldSyncCalendar:(bool)arg1;
- (bool)shouldSyncCalendar;

@end
