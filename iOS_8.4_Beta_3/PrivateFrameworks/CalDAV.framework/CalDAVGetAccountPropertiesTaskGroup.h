/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
    NSSet *_calendarHomes;
    NSURL *_delegatePrincipalURL;
    NSURL *_dropboxURL;
    NSURL *_inboxURL;
    NSURL *_notificationURL;
    NSURL *_outboxURL;
    CalDAVServerVersion *_serverVersion;
    bool _supportsCalendarUserSearch;
    NSURL *_updatedPrincipalURL;
    NSSet *_userAddresses;
}

@property (nonatomic, readonly) NSSet *calendarHomes;
@property (nonatomic, retain) NSURL *delegatePrincipalURL;
@property (nonatomic, readonly) NSURL *dropboxURL;
@property (nonatomic, readonly) NSURL *inboxURL;
@property (nonatomic, readonly) NSURL *notificationURL;
@property (nonatomic, readonly) NSURL *outboxURL;
@property (nonatomic, readonly) CalDAVServerVersion *serverVersion;
@property (nonatomic, readonly) bool supportsCalendarUserSearch;
@property (nonatomic, readonly) NSURL *updatedPrincipalURL;
@property (nonatomic, readonly) NSSet *userAddresses;

- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)calendarHomes;
- (void)dealloc;
- (id)delegatePrincipalURL;
- (id)description;
- (id)dropboxURL;
- (bool)forceOptionsRequest;
- (id)homeSet;
- (id)inboxURL;
- (id)notificationURL;
- (id)outboxURL;
- (void)processPrincipalHeaders:(id)arg1;
- (id)serverVersion;
- (void)setDelegatePrincipalURL:(id)arg1;
- (void)startTaskGroup;
- (bool)supportsCalendarUserSearch;
- (id)updatedPrincipalURL;
- (id)userAddresses;

@end
