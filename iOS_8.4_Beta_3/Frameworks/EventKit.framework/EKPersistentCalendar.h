/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentCalendar : EKPersistentObject

@property(assign,readonly) NSString * UUID;
@property(assign,readwrite) unsigned long long allowedEntityTypes;
@property(assign,readwrite) bool allowsContentModifications;
@property(assign,copy) NSString * bulkRequests;
@property(assign,readwrite) bool canBePublished;
@property(assign,readwrite) bool canBeShared;
@property(getter=isColorDisplayOnly,assign,readwrite) bool colorDisplayOnly;
@property(assign,copy) NSString * colorString;
@property(assign,readwrite) int displayOrder;
@property(assign,copy) NSString * externalID;
@property(assign,copy) NSString * externalModificationTag;
@property(getter=isHidden,assign,readwrite) bool hidden;
@property(getter=isImmutable,assign,readwrite) bool immutable;
@property(assign,readwrite) unsigned long long invitationStatus;
@property(assign,readonly) bool isDefaultCalendarForSource;
@property(assign,readwrite) bool isFacebookBirthdayCalendar;
@property(assign,readwrite) bool isFamilyCalendar;
@property(assign,readwrite) bool isHolidaySubscribedCalendar;
@property(assign,readwrite) bool isIgnoringEventAlerts;
@property(assign,readwrite) bool isIgnoringSharedCalendarNotifications;
@property(assign,readwrite) bool isMarkedImmutableSharees;
@property(assign,readwrite) bool isMarkedUndeletable;
@property(assign,copy) NSURL * ownerIdentityAddress;
@property(assign,copy) NSString * ownerIdentityDisplayName;
@property(assign,copy) NSString * ownerIdentityEmail;
@property(assign,copy) NSString * ownerIdentityFirstName;
@property(assign,copy) NSString * ownerIdentityLastName;
@property(assign,readwrite) bool prohibitsScheduling;
@property(getter=isPublished,assign,readwrite) bool published;
@property(assign,copy) NSString * publishedURL;
@property(assign,copy) NSString * pushKey;
@property(assign,readwrite) bool schedulingProhibited;
@property(assign,copy) NSURL * selfIdentityAddress;
@property(assign,copy) NSString * selfIdentityDisplayName;
@property(assign,copy) NSString * selfIdentityEmail;
@property(assign,copy) NSString * selfIdentityFirstName;
@property(assign,copy) NSString * selfIdentityLastName;
@property(assign,copy) NSURL * sharedOwnerAddress;
@property(assign,copy) NSString * sharedOwnerName;
@property(assign,copy) NSSet * sharees;
@property(getter=isSharingInvitation,assign,readwrite) bool sharingInvitation;
@property(assign,readwrite) long long sharingInvitationResponse;
@property(assign,readwrite) long long sharingStatus;
@property(assign,retain) EKPersistentSource * source;
@property(assign,copy) NSString * subcalAccountID;
@property(getter=isSubscribed,assign,readwrite) bool subscribed;
@property(assign,copy) NSString * symbolicColorName;
@property(assign,copy) NSString * title;

+ (id)calendar;
+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (id)UUID;
- (void)addSharee:(id)arg1;
- (unsigned long long)allowedEntityTypes;
- (bool)allowsContentModifications;
- (id)bulkRequests;
- (bool)canBePublished;
- (bool)canBeShared;
- (id)colorString;
- (id)description;
- (id)digest;
- (int)displayOrder;
- (int)entityType;
- (id)externalID;
- (id)externalModificationTag;
- (id)init;
- (unsigned long long)invitationStatus;
- (bool)isColorDisplayOnly;
- (bool)isDefaultCalendarForSource;
- (bool)isFacebookBirthdayCalendar;
- (bool)isFamilyCalendar;
- (bool)isHidden;
- (bool)isHolidaySubscribedCalendar;
- (bool)isIgnoringEventAlerts;
- (bool)isIgnoringSharedCalendarNotifications;
- (bool)isImmutable;
- (bool)isMarkedImmutableSharees;
- (bool)isMarkedUndeletable;
- (bool)isPublished;
- (bool)isSharingInvitation;
- (bool)isSubscribed;
- (id)ownerIdentityAddress;
- (id)ownerIdentityDisplayName;
- (id)ownerIdentityEmail;
- (id)ownerIdentityFirstName;
- (id)ownerIdentityLastName;
- (bool)prohibitsScheduling;
- (id)publishedURL;
- (id)pushKey;
- (void)removeSharee:(id)arg1;
- (bool)schedulingProhibited;
- (id)selfIdentityAddress;
- (id)selfIdentityDisplayName;
- (id)selfIdentityEmail;
- (id)selfIdentityFirstName;
- (id)selfIdentityLastName;
- (void)setAllowedEntityTypes:(unsigned long long)arg1;
- (void)setAllowsContentModifications:(bool)arg1;
- (void)setBulkRequests:(id)arg1;
- (void)setCanBePublished:(bool)arg1;
- (void)setCanBeShared:(bool)arg1;
- (void)setColorDisplayOnly:(bool)arg1;
- (void)setColorString:(id)arg1;
- (void)setDigest:(id)arg1;
- (void)setDisplayOrder:(int)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setImmutable:(bool)arg1;
- (void)setInvitationStatus:(unsigned long long)arg1;
- (void)setIsFacebookBirthdayCalendar:(bool)arg1;
- (void)setIsFamilyCalendar:(bool)arg1;
- (void)setIsHolidaySubscribedCalendar:(bool)arg1;
- (void)setIsIgnoringEventAlerts:(bool)arg1;
- (void)setIsIgnoringSharedCalendarNotifications:(bool)arg1;
- (void)setIsMarkedImmutableSharees:(bool)arg1;
- (void)setIsMarkedUndeletable:(bool)arg1;
- (void)setIsPublished:(bool)arg1;
- (void)setOwnerIdentityAddress:(id)arg1;
- (void)setOwnerIdentityDisplayName:(id)arg1;
- (void)setOwnerIdentityEmail:(id)arg1;
- (void)setOwnerIdentityFirstName:(id)arg1;
- (void)setOwnerIdentityLastName:(id)arg1;
- (void)setProhibitsScheduling:(bool)arg1;
- (void)setPublished:(bool)arg1;
- (void)setPublishedURL:(id)arg1;
- (void)setPushKey:(id)arg1;
- (void)setSchedulingProhibited:(bool)arg1;
- (void)setSelfIdentityAddress:(id)arg1;
- (void)setSelfIdentityDisplayName:(id)arg1;
- (void)setSelfIdentityEmail:(id)arg1;
- (void)setSelfIdentityFirstName:(id)arg1;
- (void)setSelfIdentityLastName:(id)arg1;
- (void)setSharedOwnerAddress:(id)arg1;
- (void)setSharedOwnerName:(id)arg1;
- (void)setSharees:(id)arg1;
- (void)setSharingInvitation:(bool)arg1;
- (void)setSharingInvitationResponse:(long long)arg1;
- (void)setSharingStatus:(long long)arg1;
- (void)setSource:(id)arg1;
- (void)setSubcalAccountID:(id)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setSymbolicColorName:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)sharedOwnerAddress;
- (id)sharedOwnerName;
- (id)sharees;
- (long long)sharingInvitationResponse;
- (long long)sharingStatus;
- (id)source;
- (id)subcalAccountID;
- (id)symbolicColorName;
- (id)title;
- (bool)validate:(id*)arg1;

@end
