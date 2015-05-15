/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletin : NSObject <BBUniquableObject, NSCopying, NSSecureCoding> {
    BBAccessoryIcon *_accessoryIconMask;
    NSMutableDictionary *_actions;
    long long _addressBookRecordID;
    NSSet *_alertSuppressionContexts;
    BBAttachments *_attachments;
    NSString *_bulletinID;
    NSString *_bulletinVersionID;
    NSArray *_buttons;
    bool _clearable;
    BBContent *_content;
    NSDictionary *_context;
    unsigned long long _counter;
    NSDate *_date;
    long long _dateFormatStyle;
    bool _dateIsAllDay;
    NSString *_dismissalID;
    NSDate *_endDate;
    NSDate *_expirationDate;
    unsigned long long _expirationEvents;
    bool _expiresOnPublisherDeath;
    bool _hasEventDate;
    NSDate *_lastInterruptDate;
    NSMutableArray *_lifeAssertions;
    bool _loading;
    BBContent *_modalAlertContent;
    NSMutableSet *_observers;
    NSString *_parentSectionID;
    NSDate *_publicationDate;
    NSString *_publisherBulletinID;
    NSString *_publisherRecordID;
    NSDate *_recencyDate;
    NSString *_sectionID;
    long long _sectionSubtype;
    bool _showsMessagePreview;
    BBSound *_sound;
    BBContent *_starkBannerContent;
    NSSet *_subsectionIDs;
    NSMutableDictionary *_supplementaryActionsByLayout;
    NSTimeZone *_timeZone;
    NSString *_universalSectionID;
    NSString *_unlockActionLabelOverride;
    bool _usesExternalSync;
    bool _wantsFullscreenPresentation;
    NSSet *alertSuppressionAppIDs_deprecated;
    unsigned long long realertCount_deprecated;
}

@property (nonatomic, retain) BBAccessoryIcon *accessoryIconMask;
@property (nonatomic, copy) BBAction *acknowledgeAction;
@property (nonatomic, copy) NSMutableDictionary *actions;
@property (nonatomic) long long addressBookRecordID;
@property (nonatomic, readonly) NSSet *alertSuppressionAppIDs;
@property (nonatomic, copy) NSSet *alertSuppressionAppIDs_deprecated;
@property (nonatomic, copy) NSSet *alertSuppressionContexts;
@property (nonatomic, copy) BBAction *alternateAction;
@property (nonatomic, readonly) NSString *alternateActionLabel;
@property (nonatomic, retain) BBAttachments *attachments;
@property (nonatomic, readonly) NSString *bannerAccessoryRemoteServiceBundleIdentifier;
@property (nonatomic, readonly) NSString *bannerAccessoryRemoteViewControllerClassName;
@property (nonatomic, readonly) bool bannerShowsSubtitle;
@property (nonatomic, copy) NSString *bulletinID;
@property (nonatomic, copy) NSString *bulletinVersionID;
@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic, readonly) bool canBeSilencedByMenuButtonPress;
@property (nonatomic) bool clearable;
@property (nonatomic, readonly) bool coalescesWhenLocked;
@property (nonatomic, retain) BBContent *content;
@property (nonatomic, retain) NSDictionary *context;
@property (nonatomic) unsigned long long counter;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) long long dateFormatStyle;
@property (nonatomic) bool dateIsAllDay;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) BBAction *defaultAction;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *dismissalID;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic) unsigned long long expirationEvents;
@property (nonatomic, copy) BBAction *expireAction;
@property (nonatomic) bool expiresOnPublisherDeath;
@property (nonatomic, readonly) NSString *fullAlternateActionLabel;
@property (nonatomic, readonly) NSString *fullUnlockActionLabel;
@property (nonatomic) bool hasEventDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long iPodOutAlertType;
@property (nonatomic, readonly) bool ignoresQuietMode;
@property (nonatomic, readonly) bool inertWhenLocked;
@property (nonatomic, retain) NSDate *lastInterruptDate;
@property (nonatomic, retain) NSMutableArray *lifeAssertions;
@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) unsigned long long messageNumberOfLines;
@property (nonatomic, readonly) NSString *missedBannerDescriptionFormat;
@property (nonatomic, retain) BBContent *modalAlertContent;
@property (nonatomic, retain) NSMutableSet *observers;
@property (nonatomic, readonly) bool orderSectionUsingRecencyDate;
@property (nonatomic, copy) NSString *parentSectionID;
@property (nonatomic, readonly) bool playsSoundForModify;
@property (nonatomic, readonly) bool preservesUnlockActionCase;
@property (nonatomic, readonly) bool preventLock;
@property (nonatomic, readonly) long long primaryAttachmentType;
@property (nonatomic, retain) NSDate *publicationDate;
@property (nonatomic, copy) NSString *publisherBulletinID;
@property (nonatomic, copy) BBAction *raiseAction;
@property (nonatomic, readonly) unsigned long long realertCount;
@property (nonatomic) unsigned long long realertCount_deprecated;
@property (nonatomic, retain) NSDate *recencyDate;
@property (nonatomic, copy) NSString *recordID;
@property (nonatomic, readonly) NSString *secondaryContentRemoteServiceBundleIdentifier;
@property (nonatomic, readonly) NSString *secondaryContentRemoteViewControllerClassName;
@property (nonatomic, copy) NSString *section;
@property (nonatomic, readonly) NSString *sectionDisplayName;
@property (nonatomic, readonly) bool sectionDisplaysCriticalBulletins;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic, readonly) BBSectionIcon *sectionIcon;
@property (nonatomic) long long sectionSubtype;
@property (nonatomic, readonly) bool showsContactPhoto;
@property (nonatomic, readonly) bool showsDateInFloatingLockScreenAlert;
@property (nonatomic) bool showsMessagePreview;
@property (nonatomic, readonly) bool showsSubtitle;
@property (nonatomic, readonly) bool showsUnreadIndicatorForNoticesFeed;
@property (nonatomic, copy) BBAction *snoozeAction;
@property (nonatomic, retain) BBSound *sound;
@property (nonatomic, retain) BBContent *starkBannerContent;
@property (nonatomic, copy) NSSet *subsectionIDs;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) unsigned long long subtypePriority;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *supplementaryActionsByLayout;
@property (nonatomic, readonly) bool suppressesAlertsWhenAppIsActive;
@property (nonatomic, readonly) bool suppressesMessageForPrivacy;
@property (nonatomic, readonly) bool suppressesTitle;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, readonly) BBColor *tintColor;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) NSString *topic;
@property (nonatomic, copy) NSString *universalSectionID;
@property (nonatomic, readonly) NSString *unlockActionLabel;
@property (nonatomic, copy) NSString *unlockActionLabelOverride;
@property (nonatomic) bool usesExternalSync;
@property (nonatomic, readonly) bool usesVariableLayout;
@property (nonatomic, readonly) bool visuallyIndicatesWhenDateIsInFuture;
@property (nonatomic) bool wantsFullscreenPresentation;

+ (id)addBulletinToCache:(id)arg1;
+ (id)bulletinWithBulletin:(id)arg1;
+ (id)copyCachedBulletinWithBulletinID:(id)arg1;
+ (void)killSounds;
+ (void)removeBulletinFromCache:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)validSortDescriptorsFromSortDescriptors:(id)arg1;
+ (void)vetSortDescriptor:(id)arg1;

- (id)_actionKeyForType:(long long)arg1;
- (id)_actionWithID:(id)arg1 fromActions:(id)arg2;
- (id)_allActions;
- (id)_allSupplementaryActions;
- (id)_defaultActionWithFilter:(id)arg1;
- (void)_fillOutCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (bool)_isPushOrLocalNotification;
- (id)_launchURLForAction:(id)arg1 context:(id)arg2;
- (id)_responseForAction:(id)arg1;
- (id)_responseForAction:(id)arg1 withOrigin:(int)arg2 context:(id)arg3;
- (id)_safeDescription:(bool)arg1;
- (id)_sectionParameters;
- (id)_sectionSubtypeParameters;
- (id)accessoryIconMask;
- (id)acknowledgeAction;
- (id)actionBlockForAction:(id)arg1;
- (id)actionBlockForAction:(id)arg1 withOrigin:(int)arg2;
- (id)actionBlockForAction:(id)arg1 withOrigin:(int)arg2 context:(id)arg3;
- (id)actionBlockForButton:(id)arg1;
- (id)actionForResponse:(id)arg1;
- (id)actionWithIdentifier:(id)arg1;
- (id)actions;
- (void)addLifeAssertion:(id)arg1;
- (void)addObserver:(id)arg1;
- (long long)addressBookRecordID;
- (id)alertSuppressionAppIDs;
- (id)alertSuppressionAppIDs_deprecated;
- (id)alertSuppressionContexts;
- (id)alternateAction;
- (id)alternateActionLabel;
- (id)attachments;
- (id)attachmentsCreatingIfNecessary:(bool)arg1;
- (id)bannerAccessoryRemoteServiceBundleIdentifier;
- (id)bannerAccessoryRemoteViewControllerClassName;
- (bool)bannerShowsSubtitle;
- (bool)bulletinAlertShouldOverrideQuietMode;
- (id)bulletinID;
- (id)bulletinVersionID;
- (id)buttons;
- (bool)canBeSilencedByMenuButtonPress;
- (bool)clearable;
- (bool)coalescesWhenLocked;
- (id)composedAttachmentImage;
- (id)composedAttachmentImageForKey:(id)arg1;
- (id)composedAttachmentImageForKey:(id)arg1 withObserver:(id)arg2;
- (struct CGSize { double x1; double x2; })composedAttachmentImageSize;
- (struct CGSize { double x1; double x2; })composedAttachmentImageSizeForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })composedAttachmentImageSizeForKey:(id)arg1 withObserver:(id)arg2;
- (struct CGSize { double x1; double x2; })composedAttachmentImageSizeWithObserver:(id)arg1;
- (id)composedAttachmentImageWithObserver:(id)arg1;
- (id)content;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)counter;
- (id)date;
- (long long)dateFormatStyle;
- (bool)dateIsAllDay;
- (void)dealloc;
- (id)defaultAction;
- (id)description;
- (id)dismissAction;
- (id)dismissalID;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)expirationDate;
- (unsigned long long)expirationEvents;
- (id)expireAction;
- (bool)expiresOnPublisherDeath;
- (id)firstValidObserver;
- (id)fullAlternateActionLabel;
- (id)fullUnlockActionLabel;
- (bool)hasEventDate;
- (long long)iPodOutAlertType;
- (bool)ignoresQuietMode;
- (bool)inertWhenLocked;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isLoading;
- (bool)isPlayingSound;
- (void)killSound;
- (id)lastInterruptDate;
- (id)lifeAssertions;
- (bool)matchesPublisherBulletinID:(id)arg1 andRecordID:(id)arg2;
- (id)message;
- (unsigned long long)messageNumberOfLines;
- (id)missedBannerDescriptionFormat;
- (id)modalAlertContent;
- (unsigned long long)numberOfAdditionalAttachments;
- (unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1;
- (id)observers;
- (bool)orderSectionUsingRecencyDate;
- (id)parentSectionID;
- (bool)playSound;
- (bool)playsSoundForModify;
- (bool)preservesUnlockActionCase;
- (bool)preventLock;
- (long long)primaryAttachmentType;
- (id)publicationDate;
- (id)publisherBulletinID;
- (id)publisherMatchID;
- (id)publisherMatchID;
- (id)raiseAction;
- (unsigned long long)realertCount;
- (unsigned long long)realertCount_deprecated;
- (id)recencyDate;
- (id)recordID;
- (id)responseForAcknowledgeAction;
- (id)responseForAction:(id)arg1;
- (id)responseForButtonActionAtIndex:(unsigned long long)arg1;
- (id)responseForDefaultAction;
- (id)responseForExpireAction;
- (id)responseForRaiseAction;
- (id)responseForSnoozeAction;
- (id)responseSendBlock;
- (id)safeDescription;
- (id)sb_minimalSupplementaryActions;
- (id)sb_nonPluginDefaultAction;
- (bool)sb_shouldSuppressMessageForPrivacy;
- (bool)sb_supportsRaiseAction;
- (id)secondaryContentRemoteServiceBundleIdentifier;
- (id)secondaryContentRemoteViewControllerClassName;
- (id)section;
- (id)sectionDisplayName;
- (bool)sectionDisplaysCriticalBulletins;
- (id)sectionID;
- (id)sectionIcon;
- (id)sectionMatchID;
- (long long)sectionSubtype;
- (void)setAccessoryIconMask:(id)arg1;
- (void)setAcknowledgeAction:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setAddressBookRecordID:(long long)arg1;
- (void)setAlertSuppressionAppIDs_deprecated:(id)arg1;
- (void)setAlertSuppressionContexts:(id)arg1;
- (void)setAlternateAction:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setBulletinID:(id)arg1;
- (void)setBulletinVersionID:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setClearable:(bool)arg1;
- (void)setContent:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCounter:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setDateFormatStyle:(long long)arg1;
- (void)setDateIsAllDay:(bool)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setDismissAction:(id)arg1;
- (void)setDismissalID:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExpirationEvents:(unsigned long long)arg1;
- (void)setExpireAction:(id)arg1;
- (void)setExpiresOnPublisherDeath:(bool)arg1;
- (void)setHasEventDate:(bool)arg1;
- (void)setLastInterruptDate:(id)arg1;
- (void)setLifeAssertions:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setModalAlertContent:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setParentSectionID:(id)arg1;
- (void)setPublicationDate:(id)arg1;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRaiseAction:(id)arg1;
- (void)setRealertCount_deprecated:(unsigned long long)arg1;
- (void)setRecencyDate:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSectionSubtype:(long long)arg1;
- (void)setShowsMessagePreview:(bool)arg1;
- (void)setSnoozeAction:(id)arg1;
- (void)setSound:(id)arg1;
- (void)setStarkBannerContent:(id)arg1;
- (void)setSubsectionIDs:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSupplementaryActionsByLayout:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniversalSectionID:(id)arg1;
- (void)setUnlockActionLabelOverride:(id)arg1;
- (void)setUsesExternalSync:(bool)arg1;
- (void)setWantsFullscreenPresentation:(bool)arg1;
- (id)shortDescription;
- (bool)showsContactPhoto;
- (bool)showsDateInFloatingLockScreenAlert;
- (bool)showsMessagePreview;
- (bool)showsSubtitle;
- (bool)showsUnreadIndicatorForNoticesFeed;
- (id)snoozeAction;
- (id)sound;
- (id)starkBannerContent;
- (id)subsectionIDs;
- (id)subtitle;
- (unsigned long long)subtypePriority;
- (id)supplementaryActions;
- (id)supplementaryActionsByLayout;
- (id)supplementaryActionsForLayout:(long long)arg1;
- (bool)suppressesAlertsWhenAppIsActive;
- (bool)suppressesMessageForPrivacy;
- (bool)suppressesTitle;
- (id)syncHash;
- (id)timeZone;
- (id)tintColor;
- (id)title;
- (id)topic;
- (id)uniqueIdentifier;
- (id)universalSectionID;
- (id)unlockActionLabel;
- (id)unlockActionLabelOverride;
- (bool)usesExternalSync;
- (bool)usesVariableLayout;
- (bool)visuallyIndicatesWhenDateIsInFuture;
- (bool)wantsFullscreenPresentation;

@end
