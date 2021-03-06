/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSAutomaticReadingListSocialSource : NSObject {
    NSArray *_accounts;
    NSMutableDictionary *_accountsToNumberOfRequestsInProgressForOlderItems;
    NSDictionary *_accountsToTrackedRecordsInfoMap;
    NSArray *_activeAccounts;
    Class _fallbackIconProviderClass;
    NSTimer *_minimumTimeBetweenRequestsTimer;
    unsigned long long _numberOfRequestsInProgressForNewerItems;
    id _serviceImage;
    NSXPCConnection *_socialHelperConnection;
}

@property(assign,readonly) NSString * accountTypeIdentifier;
@property(assign,copy) NSArray * accounts;
@property(assign,retain) NSDictionary * accountsToTrackedRecordsInfoMap;
@property(getter=isActive,assign,readonly) bool active;
@property(assign,copy) NSArray * activeAccounts;
@property(assign,retain) Class fallbackIconProviderClass;
@property(assign,retain) NSTimer * minimumTimeBetweenRequestsTimer;
@property(assign,readwrite) unsigned long long numberOfRequestsInProgressForNewerItems;
@property(assign,readonly) id serviceImage;
@property(assign,readonly) NSString * serviceName;
@property(assign,readonly) NSString * serviceType;
@property(assign,retain) NSXPCConnection * socialHelperConnection;

+ (id)allSocialSources;
+ (id)itemsFromAllSocialSourcesByDate;
+ (void)refreshAllSocialSources;

- (void).cxx_destruct;
- (void)_accountsChanged:(id)arg1;
- (id)_activeAccountsFromAccountList:(id)arg1;
- (void)_addItems:(id)arg1 withAge:(int)arg2 inRange:(id)arg3 rangeOfTrackedRecordsAtTimeOfRequest:(id)arg4 forAccountWithIdentifier:(id)arg5;
- (void)_didAddItemsForAccountWithIdentifier:(id)arg1;
- (void)_didCompleteRequestForItemsWithAge:(int)arg1 accountIdentifier:(id)arg2;
- (void)_didStartRequestForItemsWithAge:(int)arg1 accountIdentifier:(id)arg2;
- (id)_existingSocialHelperConnection;
- (id)_findAccounts;
- (void)_invalidateSocialHelperConnectionIfPossible;
- (void)_minimumTimeBetweenRequestsTimerFired:(id)arg1;
- (void)_performRequestForMoreItemsWithAge:(int)arg1 accountIdentifier:(id)arg2 successHandler:(id)arg3;
- (void)_requestOlderItemsIfNecessaryToReachMaximumForAccountWithIdentifier:(id)arg1;
- (id)accountTypeIdentifier;
- (id)accounts;
- (id)accountsToTrackedRecordsInfoMap;
- (id)activeAccounts;
- (long long)compareItem:(id)arg1 toItem:(id)arg2;
- (long long)compareNewestRecordInRange:(id)arg1 toNewestRecordInRange:(id)arg2;
- (long long)compareNewestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2;
- (long long)compareOldestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2;
- (void)dealloc;
- (Class)fallbackIconProviderClass;
- (id)init;
- (bool)isActive;
- (Class)itemClass;
- (double)minimumTimeBetweenRequests;
- (id)minimumTimeBetweenRequestsTimer;
- (unsigned long long)numberOfRequestsInProgressForNewerItems;
- (id)recordRange:(id)arg1 withOldestFromItem:(id)arg2;
- (void)repostItem:(id)arg1 fromAccountWithIdentifier:(id)arg2;
- (id)repostResourceURLStringForItem:(id)arg1;
- (void)requestMaximumNumberOfOlderItems;
- (void)requestMoreItemsWithAge:(int)arg1;
- (id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2;
- (id)resourceURLString;
- (id)serviceImage;
- (id)serviceName;
- (id)serviceType;
- (void)setAccounts:(id)arg1;
- (void)setAccountsToTrackedRecordsInfoMap:(id)arg1;
- (void)setFallbackIconProviderClass:(Class)arg1;
- (void)setMinimumTimeBetweenRequestsTimer:(id)arg1;
- (void)setNumberOfRequestsInProgressForNewerItems:(unsigned long long)arg1;
- (void)setShouldHideItems:(bool)arg1 forAccount:(id)arg2;
- (void)setSocialHelperConnection:(id)arg1;
- (bool)shouldHideItemsFromAccount:(id)arg1;
- (id)socialHelperConnection;
- (void)updateMinimumTimeBetweenRequestsFromResponseHeaders:(id)arg1;

@end
