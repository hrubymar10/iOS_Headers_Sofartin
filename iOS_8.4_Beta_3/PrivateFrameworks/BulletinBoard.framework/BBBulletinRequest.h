/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinRequest : BBBulletin {
    unsigned long long _expirationEvents;
}

@property (nonatomic, retain) BBAccessoryIcon *accessoryIconMask;
@property (nonatomic, copy) BBAction *acknowledgeAction;
@property (nonatomic) long long addressBookRecordID;
@property (nonatomic, copy) NSSet *alertSuppressionContexts;
@property (nonatomic, copy) BBAction *alternateAction;
@property (nonatomic, copy) NSString *bulletinID;
@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic) bool clearable;
@property (nonatomic) unsigned long long counter;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) long long dateFormatStyle;
@property (nonatomic) bool dateIsAllDay;
@property (nonatomic, copy) BBAction *defaultAction;
@property (nonatomic, copy) BBAction *dismissAction;
@property (nonatomic, copy) NSString *dismissalID;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic) unsigned long long expirationEvents;
@property (nonatomic, copy) BBAction *expireAction;
@property (nonatomic) bool expiresOnPublisherDeath;
@property (nonatomic) bool hasEventDate;
@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) BBContent *modalAlertContent;
@property (nonatomic) long long primaryAttachmentType;
@property (nonatomic, copy) NSString *publisherBulletinID;
@property (nonatomic, copy) BBAction *raiseAction;
@property (nonatomic) unsigned long long realertCount;
@property (nonatomic, retain) NSDate *recencyDate;
@property (nonatomic, copy) NSString *recordID;
@property (nonatomic, copy) NSString *section;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic) long long sectionSubtype;
@property (nonatomic) bool showsUnreadIndicator;
@property (nonatomic, copy) BBAction *snoozeAction;
@property (nonatomic, retain) BBSound *sound;
@property (nonatomic, retain) BBContent *starkBannerContent;
@property (nonatomic, copy) NSSet *subsectionIDs;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSArray *supplementaryActions;
@property (nonatomic) bool tentative;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool usesExternalSync;
@property (nonatomic) bool wantsFullscreenPresentation;

- (void)_updateSupplementaryAction:(id)arg1;
- (void)addAlertSuppressionAppID:(id)arg1;
- (void)addAttachmentOfType:(long long)arg1;
- (void)addButton:(id)arg1;
- (unsigned long long)expirationEvents;
- (void)generateBulletinID;
- (void)generateNewBulletinID;
- (bool)hasContentModificationsRelativeTo:(id)arg1;
- (void)publish;
- (void)publish:(bool)arg1;
- (unsigned long long)realertCount;
- (void)setContextValue:(id)arg1 forKey:(id)arg2;
- (void)setExpirationEvents:(unsigned long long)arg1;
- (void)setPrimaryAttachmentType:(long long)arg1;
- (void)setRealertCount:(unsigned long long)arg1;
- (void)setShowsUnreadIndicator:(bool)arg1;
- (void)setSupplementaryActions:(id)arg1;
- (void)setSupplementaryActions:(id)arg1 forLayout:(long long)arg2;
- (void)setTentative:(bool)arg1;
- (void)setUnlockActionLabel:(id)arg1;
- (bool)showsUnreadIndicator;
- (bool)tentative;
- (void)withdraw;

@end
