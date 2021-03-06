/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFContactsSearchManager : NSObject <DASearchQueryConsumer> {
    void *_addressBook;
    int _contactSearchAccountChangedToken;
    NSArray *_explicitSearchAccountIDs;
    unsigned int _genNumber;
    unsigned long long _implicitGroupCreationThreshold;
    bool _includeUpcomingEventMembers;
    NSOrderedSet *_properties;
    NSOperationQueue *_queue;
    NSString *_recentsBundleIdentifier;
    bool _registeredForAddressBookChanges;
    NSArray *_searchAccounts;
    unsigned long long _searchTypes;
    NSString *_sendingAddress;
    NSObject<OS_dispatch_queue> *_serverSearchQueue;
    NSMutableDictionary *_taskContextsByTaskID;
    struct __CFDictionary { } *_taskIDsBySearchQuery;
}

@property(assign,readwrite) unsigned long long implicitGroupCreationThreshold;
@property(assign,readwrite) bool includeUpcomingEventMembers;
@property(assign,copy) NSString * recentsBundleIdentifier;
@property(assign,retain) NSArray * searchAccountIDs;
@property(assign,readonly) NSArray * searchAccounts;
@property(assign,copy) NSString * sendingAddress;

- (void)_handleAddressBookChangeNotification;
- (void)_handleCorecipientSearchResults:(id)arg1 operation:(id)arg2 taskID:(id)arg3;
- (void)_handleLocalSearchResults:(id)arg1 type:(unsigned long long)arg2 operation:(id)arg3 taskID:(id)arg4;
- (void)_handleRecentsSearchFrequentResults:(id)arg1 infrequentResults:(id)arg2 operation:(id)arg3 taskID:(id)arg4;
- (void)_handleSearchQueriesByAccountID:(id)arg1 operation:(id)arg2 taskID:(id)arg3;
- (void)_handleSearchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)_handleSearchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)_handleSearchQueryFinished:(id)arg1 context:(id)arg2;
- (void)_handleTaskFinished:(id)arg1 context:(id)arg2;
- (void)_invalidateSearchAccounts;
- (void)_performLazySetup;
- (void)_registerForAddressBookChanges;
- (id)_serverSearchQueue;
- (void)cancelTaskWithID:(id)arg1;
- (void)dealloc;
- (unsigned long long)implicitGroupCreationThreshold;
- (bool)includeUpcomingEventMembers;
- (id)initWithAddressBook:(void*)arg1 properties:(int*)arg2 propertyCount:(unsigned int)arg3;
- (id)initWithAddressBook:(void*)arg1 properties:(int*)arg2 propertyCount:(unsigned int)arg3 recentsBundleIdentifier:(id)arg4;
- (id)recentsBundleIdentifier;
- (id)searchAccountIDs;
- (id)searchAccounts;
- (id)searchForCorecipientsWithRecipients:(id)arg1 consumer:(id)arg2;
- (id)searchForText:(id)arg1 consumer:(id)arg2;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (id)sendingAddress;
- (void)setImplicitGroupCreationThreshold:(unsigned long long)arg1;
- (void)setIncludeUpcomingEventMembers:(bool)arg1;
- (void)setRecentsBundleIdentifier:(id)arg1;
- (void)setSearchAccountIDs:(id)arg1;
- (void)setSearchTypes:(unsigned long long)arg1;
- (void)setSendingAddress:(id)arg1;

@end
