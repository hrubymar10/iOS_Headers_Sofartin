/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMHandle : IMDirectlyObservableObject <NSCoding> {
    long long _IDStatus;
    NSString *_IDWithTrimmedServer;
    NSString *_IDWithoutResource;
    NSString *_abFirstName;
    NSString *_abFullName;
    NSString *_abLastName;
    NSString *_abNickname;
    IMAccount *_account;
    int _addressBookIdentifier;
    unsigned int _authRequestStatus;
    bool _beingTornDown;
    bool _blockNotifications;
    unsigned long long _capabilities;
    NSDictionary *_certs;
    NSString *_countryCode;
    NSString *_displayID;
    NSArray *_emails;
    NSDictionary *_extraProps;
    NSDate *_feedUpdatedDate;
    NSString *_firstName;
    NSString *_formattedNumber;
    NSString *_fullName;
    NSSet *_groups;
    NSString *_guid;
    bool _hasCheckedCardMap;
    bool _hasCheckedPhoneNumber;
    bool _hasTemporaryWatch;
    NSString *_id;
    NSDate *_idleSince;
    bool _isAnonymous;
    bool _isBot;
    bool _isMobile;
    bool _isRegistered;
    bool _isRetainingAccount;
    NSString *_lastName;
    NSString *_nickname;
    NSString *_normalizedFormOfID;
    NSMutableArray *_notificationNameQueue;
    NSMutableArray *_notificationQueue;
    int _notificationQueueCount;
    NSDictionary *_otherServiceIDs;
    IMPerson *_person;
    struct __CFPhoneNumber { } *_phoneNumberRef;
    NSData *_pictureData;
    unsigned long long _prevStatus;
    NSString *_prevStatusMsg;
    long long _priority;
    NSString *_processedStatusMsg;
    unsigned long long _resourceIndex;
    NSAttributedString *_richStatusMsg;
    unsigned long long _status;
    NSURL *_statusMessageURL;
    NSString *_statusMsg;
    NSURL *_statusURL;
    NSString *_uncanonicalID;
    NSString *_uniqueName;
    NSDate *_whenStatusChanged;
    NSDate *_whenWentOffline;
}

@property(assign,retain) NSString * ID;
@property(assign,readwrite) long long IDStatus;
@property(assign,retain) NSString * IDWithoutResource;
@property(assign,retain) IMPerson * _cachedPerson;
@property(assign,retain) NSString * _displayNameWithAbbreviation;
@property(setter=_setIsRegisteredWithRegistrar:,assign,readwrite) bool _isRegisteredWithRegistrar;
@property(assign,retain) IMAccount * account;
@property(assign,retain) NSArray * accountSiblingsArray;
@property(assign,retain) NSString * accountTypeName;
@property(assign,readonly) int addressBookIdentifier;
@property(assign,readonly) bool areABPropertiesRecent;
@property(assign,readonly) unsigned int authRequestStatus;
@property(assign,retain) id bestAccountSibling;
@property(assign,readonly) id bestSibling;
@property(assign,readonly) bool canBeAdded;
@property(assign,readonly) bool canBeDeleted;
@property(assign,readonly) unsigned long long capabilities;
@property(assign,retain) NSString * countryCode;
@property(assign,retain) NSData * customPictureData;
@property(assign,readonly) NSArray * dependentIMHandles;
@property(assign,retain) NSString * displayID;
@property(assign,retain) NSString * email;
@property(assign,retain) NSArray * emails;
@property(assign,retain) NSArray * existingAccountSiblingsArray;
@property(assign,readonly) id existingIMHandleWithoutResource;
@property(assign,retain) NSDictionary * extraProperties;
@property(assign,retain) NSDate * feedUpdatedDate;
@property(assign,retain) NSString * firstName;
@property(assign,retain) NSString * fullName;
@property(assign,retain) NSSet * groups;
@property(assign,retain) NSArray * groupsArray;
@property(assign,retain) NSString * guid;
@property(assign,readonly) bool hasAudio;
@property(assign,readonly) bool hasConferencing;
@property(assign,readonly) bool hasLocation;
@property(assign,readonly) bool hasMultiwayAudio;
@property(assign,readonly) bool hasMultiwayVideo;
@property(assign,readonly) bool hasName;
@property(assign,readonly) bool hasNoConferencingCaps;
@property(assign,readonly) bool hasOtherSiblings;
@property(assign,readonly) bool hasResource;
@property(assign,readonly) bool hasServer;
@property(assign,readonly) bool hasVideo;
@property(assign,retain) NSString * idleString;
@property(assign,readonly) double idleTime;
@property(assign,readonly) id imHandleWithoutResource;
@property(assign,readonly) bool isAnonymous;
@property(setter=setBlocked:,assign,readwrite) bool isBlocked;
@property(assign,readonly) bool isBot;
@property(assign,readonly) bool isBuddy;
@property(assign,readonly) bool isConferenceAvailable;
@property(assign,readonly) bool isLoginIMHandle;
@property(assign,readonly) bool isLoginIMHandleForAnyAccount;
@property(assign,readonly) bool isMobile;
@property(assign,readonly) bool isSystemUser;
@property(assign,readonly) bool isVisiblyBlocked;
@property(assign,retain) NSString * lastName;
@property(assign,retain) NSString * mobileDeviceName;
@property(assign,retain) NSString * name;
@property(assign,retain) NSString * nameAndEmail;
@property(assign,retain) NSString * nameAndID;
@property(assign,retain) NSString * nameOfStatus;
@property(assign,retain) NSString * nickname;
@property(assign,retain) NSString * normalizedID;
@property(assign,retain) NSString * offlineString;
@property(assign,retain) NSString * originalID;
@property(assign,retain) NSDictionary * otherServiceIDs;
@property(setter=setIMPerson:,assign,retain) IMPerson * person;
@property(assign,retain) NSData * pictureData;
@property(assign,readonly) unsigned long long previousStatus;
@property(assign,retain) NSString * previousStatusMessage;
@property(assign,readwrite) long long priority;
@property(assign,retain) NSString * resource;
@property(assign,retain) NSAttributedString * richStatusMessage;
@property(assign,retain) NSString * server;
@property(assign,retain) IMServiceImpl * service;
@property(assign,retain) NSSet * siblings;
@property(assign,retain) NSArray * siblingsArray;
@property(assign,readonly) unsigned long long status;
@property(assign,retain) NSString * statusMessage;
@property(assign,retain) NSURL * statusMessageAsURL;
@property(assign,retain) NSURL * statusURL;
@property(assign,readonly) bool supportsARDMuxing;
@property(assign,readonly) double timeSinceStatusChanged;
@property(assign,readonly) double timeSinceWentOffline;
@property(assign,retain) NSString * uniqueName;
@property(assign,readonly) bool watchingIMHandle;

+ (void)_loadStatusNames;
+ (id)bestIMHandleInArray:(id)arg1;
+ (id)filterIMHandlesForAccountSiblings:(id)arg1 onAccount:(id)arg2;
+ (id)filterIMHandlesForBestAccountSiblings:(id)arg1;
+ (id)imHandlesForIMPerson:(id)arg1;
+ (id)nameOfStatus:(unsigned long long)arg1;
+ (bool)notificationsEnabled;
+ (void)setNotificationsEnabled:(bool)arg1;

- (id)ID;
- (long long)IDStatus;
- (id)IDWithoutResource;
- (id)_IDWithTrimmedServer;
- (id)_abPersonCreateIfNeeded;
- (id)_bestChatSibling;
- (id)_cachedPerson;
- (id)_chatSiblings;
- (id)_chatSiblingsArray;
- (void)_clearABPersonLookup;
- (void)_clearABProperties;
- (void)_clearStatusMessageURLCache;
- (void)_createPhoneNumberRefIfNeeded;
- (id)_displayNameWithAbbreviation;
- (void)_filterStatusMessage;
- (id)_formattedPhoneNumber;
- (id)_handleInfo;
- (bool)_hasABName;
- (bool)_hasServiceNameProperties;
- (void)_imPersonPictureChanged:(id)arg1;
- (bool)_isChatSiblingOf:(id)arg1;
- (bool)_isMyIDInList:(id)arg1;
- (bool)_isRegisteredWithRegistrar;
- (id)_nameForComparisonPreferFirst:(bool)arg1;
- (id)_nameUsingUnique:(bool)arg1;
- (void)_postNotification:(id)arg1;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_registerForIMPersonPictureChanges;
- (void)_registerForNotifications;
- (void)_removeAccountReference:(id)arg1;
- (void)_sendAutomationData:(id)arg1 properties:(id)arg2;
- (void)_sendCommand:(id)arg1 properties:(id)arg2;
- (void)_sendRemoteLogDumpRequest;
- (void)_sendRemoteLogDumpRequest:(id)arg1;
- (void)_setABPersonFirstName:(id)arg1 lastName:(id)arg2;
- (void)_setBaseFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3;
- (bool)_setCapabilities:(unsigned long long)arg1;
- (void)_setCountryCode:(id)arg1;
- (void)_setExtraProperties:(id)arg1;
- (void)_setIDStatus:(long long)arg1;
- (void)_setIsRegisteredWithRegistrar:(bool)arg1;
- (void)_setOriginalID:(id)arg1;
- (void)_setOriginalID:(id)arg1 countryCode:(id)arg2 updateSiblings:(bool)arg3;
- (void)_setOriginalID:(id)arg1 updateSiblings:(bool)arg2;
- (void)_stopRetainingAccount:(id)arg1;
- (void)_unregisterFromIMPersonPictureChanges;
- (void)_updateOriginalID:(id)arg1;
- (void)_updateStatusBasedOnAuthRequestStatus;
- (id)account;
- (id)accountSiblingsArray;
- (id)accountTypeName;
- (int)addressBookIdentifier;
- (bool)areABPropertiesRecent;
- (unsigned int)authRequestStatus;
- (void)beginNotificationQueue;
- (id)bestAccountSibling;
- (id)bestIMHandleForAccount:(id)arg1;
- (id)bestIMHandleForAccount:(id)arg1 onService:(id)arg2 inGroup:(id)arg3 otherThan:(id)arg4;
- (id)bestIMHandleForService:(id)arg1;
- (id)bestSibling;
- (bool)canBeAdded;
- (bool)canBeDeleted;
- (unsigned long long)capabilities;
- (id)chatSiblingsArray;
- (void)clearABPerson;
- (long long)compareAccountNames:(id)arg1;
- (long long)compareFirstNames:(id)arg1;
- (long long)compareIDs:(id)arg1;
- (long long)compareLastNames:(id)arg1;
- (long long)compareNormalizedIDs:(id)arg1;
- (long long)compareStatus:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)customPictureData;
- (void)customPictureDataChanged:(id)arg1 key:(id)arg2;
- (void)dealloc;
- (id)dependentIMHandles;
- (id)description;
- (id)displayID;
- (id)displayNameForChat:(id)arg1;
- (id)email;
- (id)emails;
- (void)encodeWithCoder:(id)arg1;
- (id)existingAccountSiblingsArray;
- (id)existingChatSiblingsArray;
- (id)existingIMHandleWithoutResource;
- (id)extraProperties;
- (id)feedUpdatedDate;
- (void)finalize;
- (id)firstName;
- (id)fmfHandle;
- (id)fmfSiblingHandles;
- (id)fullName;
- (id)groups;
- (id)groupsArray;
- (id)guid;
- (bool)hasAudio;
- (bool)hasCapability:(unsigned long long)arg1;
- (bool)hasConferencing;
- (bool)hasLocation;
- (bool)hasMultiwayAudio;
- (bool)hasMultiwayVideo;
- (bool)hasName;
- (bool)hasNoConferencingCaps;
- (bool)hasOtherSiblings;
- (bool)hasResource;
- (bool)hasServer;
- (bool)hasVideo;
- (unsigned long long)hash;
- (id)idleString;
- (double)idleTime;
- (id)imHandleForOtherAccount:(id)arg1;
- (id)imHandleRegistrarGUID;
- (id)imHandleWithoutResource;
- (id)init;
- (id)initWithAccount:(id)arg1 ID:(id)arg2;
- (id)initWithAccount:(id)arg1 ID:(id)arg2 alreadyCanonical:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isAccountSiblingOf:(id)arg1;
- (bool)isAnonymous;
- (bool)isBetterThanIMHandle:(id)arg1;
- (bool)isBlocked;
- (bool)isBot;
- (bool)isBuddy;
- (bool)isConferenceAvailable;
- (bool)isLoginIMHandle;
- (bool)isLoginIMHandleForAnyAccount;
- (bool)isMobile;
- (bool)isSiblingOf:(id)arg1;
- (bool)isSystemUser;
- (bool)isVisiblyBlocked;
- (id)lastName;
- (bool)matchesIMHandle:(id)arg1;
- (id)mobileDeviceName;
- (id)name;
- (id)nameAndEmail;
- (id)nameAndID;
- (id)nameOfStatus;
- (id)nickname;
- (id)normalizedID;
- (id)offlineString;
- (id)originalID;
- (id)otherServiceIDs;
- (id)person;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (id)pictureData;
- (void)postNotificationName:(id)arg1;
- (unsigned long long)previousStatus;
- (id)previousStatusMessage;
- (long long)priority;
- (void)propertiesChanged:(id)arg1;
- (id)publicAPIPropertiesDictionary;
- (oneway void)release;
- (void)releaseNotificationQueue;
- (void)requestValueOfProperty:(id)arg1;
- (bool)resetABPerson;
- (void)resetABProperties;
- (void)resetUniqueName;
- (id)resource;
- (id)richStatusMessage;
- (void)sendNotificationABPersonChanged;
- (id)server;
- (id)service;
- (void)setAnonymous:(bool)arg1;
- (void)setAuthRequestStatus:(unsigned int)arg1;
- (void)setBlocked:(bool)arg1;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setCustomPictureData:(id)arg1;
- (void)setCustomPictureData:(id)arg1 key:(id)arg2;
- (void)setEmail:(id)arg1;
- (void)setEmail:(id)arg1 andUpdateABPerson:(bool)arg2;
- (void)setEmails:(id)arg1;
- (void)setEmails:(id)arg1 andUpdateABPerson:(bool)arg2;
- (void)setFeedUpdatedDate:(id)arg1;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 andUpdateABPerson:(bool)arg4;
- (void)setHasTemporaryWatch:(bool)arg1;
- (void)setIDStatus:(long long)arg1;
- (void)setIMPerson:(id)arg1;
- (void)setIdleSince:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setIsBot:(bool)arg1;
- (void)setIsMobile:(bool)arg1;
- (void)setLocalNickname:(id)arg1;
- (void)setOtherServiceIDs:(id)arg1;
- (void)setPersonStatus:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setStatus:(unsigned long long)arg1 message:(id)arg2 richMessage:(id)arg3;
- (void)setStatusMessageAsURL:(id)arg1;
- (void)setStatusURLFromString:(id)arg1;
- (void)setUniqueName:(id)arg1;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2;
- (bool)shouldQueueNotifications;
- (id)siblings;
- (id)siblingsArray;
- (unsigned int)sortOrderInGroup:(id)arg1;
- (unsigned long long)status;
- (void)statusChanged:(unsigned long long)arg1;
- (void)statusChanged:(unsigned long long)arg1 message:(id)arg2;
- (id)statusMessage;
- (id)statusMessageAsURL;
- (void)statusMessageChanged:(id)arg1;
- (id)statusURL;
- (bool)supportsARDMuxing;
- (double)timeSinceStatusChanged;
- (double)timeSinceWentOffline;
- (id)uniqueName;
- (bool)watchingIMHandle;

@end