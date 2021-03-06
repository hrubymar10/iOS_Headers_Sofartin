/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMChat : NSObject {
    IMAccount *_account;
    NSArray *_attachments;
    float _cachedSendProgress;
    <IMChatItemRules> *_chatItemRules;
    NSMutableArray *_chatItems;
    IMScheduledUpdater *_chatItemsUpdater;
    NSMutableArray *_chatItemsUpdates;
    NSMutableDictionary *_chatProperties;
    void *_context;
    NSString *_currentLocationGUID;
    NSDate *_dateCreated;
    NSDate *_dateModified;
    unsigned long long _dbFailedCount;
    unsigned long long _dbUnreadCount;
    unsigned int _didSendAFinishedMessage;
    NSString *_displayName;
    BOOL _downgradeState;
    IMScheduledUpdater *_downgradeStateUpdater;
    bool _forceMMS;
    NSArray *_frequentReplies;
    NSString *_groupID;
    NSString *_guid;
    NSMutableSet *_guids;
    unsigned int _hasBeenConfigured;
    unsigned int _hasPendingMarkRead;
    NSString *_identifier;
    bool _ignoreDowngradeStatusUpdates;
    IMMessage *_invitationForPendingParticipants;
    unsigned int _isFirstMessageInvitation;
    unsigned int _isRecording;
    unsigned int _isUpdatingChatItems;
    NSMutableDictionary *_itemMap;
    long long _joinState;
    NSString *_lastAddressedHandleID;
    IMMultiDict *_messageActionsMap;
    NSMutableArray *_messagesPendingJoin;
    IMChatItem *_nextStaleChatItem;
    unsigned long long _numberOfMessagesToKeepLoaded;
    NSMutableDictionary *_participantProperties;
    NSMutableDictionary *_participantStates;
    NSArray *_participants;
    NSString *_roomName;
    NSString *_roomNameWithoutSuffix;
    <IMChatSendProgressDelegate> *_sendProgressDelegate;
    NSTimer *_sendProgressTimer;
    NSMutableDictionary *_sendingItems;
    unsigned char _style;
    IMTimingCollection *_timingCollection;
    NSString *_typingGUID;
    id _typingIndicatorTimer;
    NSMutableDictionary *_unfinishedMessageMap;
    unsigned int _wasInvitationHandled;
}

@property (setter=_setGUIDs:, nonatomic, retain) NSMutableSet *_guids;
@property (nonatomic, readonly) bool _shouldRegisterChat;
@property (nonatomic, readonly) IMAccount *account;
@property (nonatomic, readonly) bool allRecipientsFollowingLocation;
@property (nonatomic, readonly) bool allRecipientsSharingLocation;
@property (nonatomic, readonly, retain) NSSet *allSiblingFMFHandles;
@property (nonatomic, readonly, copy) NSArray *attachments;
@property (nonatomic, readonly) bool canHaveMultipleParticipants;
@property (nonatomic, readonly) bool canLeaveChat;
@property (nonatomic, readonly) NSString *chatIdentifier;
@property (nonatomic, readonly, retain) IMChatRegistry *chatRegistry;
@property (nonatomic, readonly) unsigned char chatStyle;
@property (nonatomic) void*contextInfo;
@property (nonatomic, readonly) NSDate *dateCreated;
@property (nonatomic, readonly) NSDate *dateModified;
@property (nonatomic) NSString *displayName;
@property (nonatomic, readonly, retain) NSSet *fmfHandles;
@property (nonatomic) bool forceMMS;
@property (nonatomic, retain) NSArray *frequentReplies;
@property (nonatomic, retain) NSString *groupID;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) bool hasMoreMessagesToLoad;
@property (nonatomic, readonly) bool hasRecipientsFollowingLocation;
@property (nonatomic, readonly) bool hasRecipientsSharingLocation;
@property (nonatomic, readonly) bool hasSiblingRecipientsSharingLocation;
@property (nonatomic, readonly) bool hasUnhandledInvitation;
@property (nonatomic, retain) IMMessage *invitationForPendingParticipants;
@property (nonatomic, readonly) long long joinState;
@property (nonatomic, readonly, retain) NSString *lastAddressedHandleID;
@property (nonatomic, readonly) IMMessage *lastFinishedMessage;
@property (nonatomic, readonly) IMMessage *lastIncomingFinishedMessage;
@property (nonatomic, readonly) IMMessage *lastIncomingMessage;
@property (nonatomic, readonly) IMMessage *lastMessage;
@property (nonatomic, readonly) NSString *localTypingMessageGUID;
@property (nonatomic) bool localUserIsRecording;
@property (nonatomic) bool localUserIsTyping;
@property (nonatomic, readonly) unsigned long long messageCount;
@property (nonatomic, readonly) unsigned long long messageFailureCount;
@property (getter=_nextStaleChatItem, setter=_setNextStaleChatItem:, nonatomic, retain) IMChatItem *nextStaleChatItem;
@property (nonatomic) unsigned long long numberOfMessagesToKeepLoaded;
@property (nonatomic, readonly) unsigned long long overallChatStatus;
@property (nonatomic, readonly) NSArray *participants;
@property (nonatomic, readonly, retain) NSString *persistentID;
@property (nonatomic, retain) IMHandle *recipient;
@property (nonatomic, readonly) NSString *roomName;
@property (nonatomic, readonly) NSString *roomNameWithoutSuffix;
@property (nonatomic) <IMChatSendProgressDelegate> *sendProgressDelegate;
@property (nonatomic, readonly) bool suppressAccountRetargetingForGroupConversation;
@property (nonatomic, readonly) unsigned long long unreadMessageCount;

+ (void)_initializeFMF;
+ (Class)chatItemRulesClass;
+ (void)setChatItemRulesClass:(Class)arg1;

- (id)_IMUnfinishedMapSenderGUIDToRemove:(id)arg1 requireFinished:(bool)arg2;
- (bool)__ck_isMuted;
- (id)__ck_muteUntilDate;
- (void)__ck_saveWatermark;
- (void)__ck_setMuteUntilDate:(id)arg1;
- (void)__ck_updateWatermarkToMessageID:(long long)arg1 date:(id)arg2;
- (id)__ck_watermarkDate;
- (long long)__ck_watermarkMessageID;
- (void)__clearReadMessageCache;
- (void)_accountControllerUpdated:(id)arg1;
- (bool)_accountIsOperational:(id)arg1 forService:(id)arg2;
- (void)_accountLoggedOut:(id)arg1;
- (void)_addParticipant:(id)arg1;
- (void)_appendChatItemsForItem:(id)arg1;
- (void)_buildInitialChatItems:(id)arg1;
- (void)_calculateDowngradeState;
- (void)_calculateDowngradeStateTimerFired;
- (bool)_chatHasValidAccount:(id)arg1 forService:(id)arg2;
- (void)_clearCachedIdentifier;
- (void)_clearDowngradeMarkers;
- (void)_clearIncomingTypingIndicators;
- (void)_clearTypingIndicatorTimeout;
- (void)_clearUnreadCount;
- (void)_configureLocationShareItem:(id)arg1;
- (id)_consecutiveDowngradeAttemptsViaManualDowngrades:(bool)arg1;
- (void)_daemonAlive:(id)arg1;
- (void)_daemonDied:(id)arg1;
- (void)_delayedInvalidateDowngradeState;
- (void)_endTiming;
- (id)_guids;
- (void)_handleDeliveredCommand:(id)arg1;
- (void)_handleHandleStatusChanged:(id)arg1;
- (void)_handleIncomingCommand:(id)arg1;
- (bool)_handleIncomingItem:(id)arg1;
- (bool)_handleIncomingItem:(id)arg1 shouldQueue:(bool)arg2;
- (void)_handleMessageGUIDDeletions:(id)arg1;
- (bool)_hasCommunicatedOnService:(id)arg1;
- (bool)_hasSendingMessages;
- (id)_initWithDictionaryRepresentation:(id)arg1 items:(id)arg2 participantsHint:(id)arg3 accountHint:(id)arg4;
- (id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 displayName:(id)arg5 items:(id)arg6 participants:(id)arg7;
- (void)_initialize;
- (void)_insertChatItemsForItem:(id)arg1;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(bool)arg3 isHistoryQuery:(bool)arg4;
- (void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(bool)arg3 isHistoryQuery:(bool)arg4 limit:(unsigned long long)arg5;
- (void)_invalidateDowngradeState;
- (void)_inviteParticipants:(id)arg1 reason:(id)arg2;
- (void)_invitePendingParticipants;
- (bool)_isDuplicate:(id)arg1;
- (id)_itemForGUID:(id)arg1;
- (id)_itemsForGUIDs:(id)arg1;
- (void)_mapItem:(id)arg1;
- (void)_mapSendingItem:(id)arg1;
- (void)_markItemsAsRead:(id)arg1;
- (id)_messageActionsMap;
- (id)_nextStaleChatItem;
- (void)_participant:(id)arg1 statusChanged:(int)arg2;
- (id)_pendingParticipants;
- (id)_performQueryWithKey:(id)arg1 loadImmediately:(bool)arg2 block:(id)arg3;
- (id)_performQueryWithKey:(id)arg1 loadImmediately:(bool)arg2 block:(id)arg3 completion:(id)arg4;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2 shouldLog:(bool)arg3;
- (id)_previousAccountForService:(id)arg1;
- (id)_privateInitWithAccount:(id)arg1 style:(unsigned char)arg2 roomName:(id)arg3 messages:(id)arg4 participants:(id)arg5;
- (float)_progressSending:(unsigned long long*)arg1 of:(unsigned long long*)arg2;
- (void)_queueChatItemsUpdate:(id)arg1;
- (void)_queueReplaceStaleChatItems;
- (void)_recomputeOverallChatStatusQuietly:(bool)arg1;
- (void)_remapHandle:(id)arg1 toHandle:(id)arg2;
- (void)_removeChatItemsForItem:(id)arg1;
- (void)_removeChatItemsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_replaceChatItemsForItem:(id)arg1 withChatItemsForItem:(id)arg2;
- (void)_replaceChatItemsWithChatItemsForItems:(id)arg1 isRefresh:(bool)arg2;
- (void)_replaceStaleChatItems;
- (void)_resetSendProgress;
- (bool)_sanityCheckAccounts;
- (void)_scheduleSendProgressTimerIfNeeded;
- (void)_sendCurrentLocationMessageUsingLocationManager:(id)arg1;
- (void)_sendMessage:(id)arg1 adjustingSender:(bool)arg2 shouldQueue:(bool)arg3;
- (void)_sendProgressTimerFired:(id)arg1;
- (void)_setAccount:(id)arg1;
- (void)_setAccount:(id)arg1 locally:(bool)arg2;
- (void)_setAndIncrementDowngradeMarkersForManual:(bool)arg1;
- (void)_setAttachments:(id)arg1;
- (void)_setChatProperties:(id)arg1;
- (void)_setDBFailedCount:(unsigned long long)arg1;
- (void)_setDBUnreadCount:(unsigned long long)arg1;
- (void)_setDisplayName:(id)arg1;
- (void)_setGUIDs:(id)arg1;
- (void)_setJoinState:(long long)arg1;
- (void)_setJoinState:(long long)arg1 quietly:(bool)arg2;
- (void)_setLocalUserIsTyping:(bool)arg1 recording:(bool)arg2 suppliedGUID:(id)arg3;
- (void)_setNextStaleChatItem:(id)arg1;
- (void)_setParticipantState:(unsigned long long)arg1 forHandle:(id)arg2 quietly:(bool)arg3;
- (void)_setPreviousAccount:(id)arg1 forService:(id)arg2;
- (void)_setTimerForReadMessageCache;
- (void)_setTypingIndicatorTimeout;
- (void)_setupObservation;
- (bool)_shouldAnnouncePeopleJoin;
- (bool)_shouldRegisterChat;
- (void)_showErrorMessage:(id)arg1;
- (void)_startTiming:(id)arg1;
- (void)_targetToService:(id)arg1 newComposition:(bool)arg2;
- (id)_timingCollection;
- (void)_trimItemsLeavingNumber:(unsigned long long)arg1;
- (void)_trimMessagesAsNeeded;
- (void)_typingIndicatorTimedOut:(id)arg1;
- (void)_unmapItem:(id)arg1;
- (void)_unmapSendingItem:(id)arg1;
- (void)_unwatchHandleStatusChangedForHandle:(id)arg1;
- (void)_updateChatItems;
- (void)_updateChatItemsWithReason:(id)arg1 block:(id)arg2;
- (void)_updateChatItemsWithReason:(id)arg1 block:(id)arg2 shouldPost:(bool)arg3;
- (void)_updateDisplayName:(id)arg1;
- (void)_updateDowngradeState:(BOOL)arg1 checkAgainInterval:(double)arg2;
- (void)_updateSendProgress;
- (void)_updateTypingIndicatorTimeout;
- (void)_watchHandleStatusChangedForHandle:(id)arg1;
- (void)acceptInvitation;
- (id)account;
- (void)addPendingParticipants:(id)arg1;
- (id)allChatProperties;
- (id)allPropertiesOfParticipant:(id)arg1;
- (bool)allRecipientsFollowingLocation;
- (bool)allRecipientsSharingLocation;
- (id)allSiblingFMFHandles;
- (id)attachments;
- (bool)authorizedToSendCurrentLocationMessage;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (bool)canAddParticipant:(id)arg1;
- (bool)canAddParticipants:(id)arg1;
- (bool)canHaveMultipleParticipants;
- (bool)canLeaveChat;
- (bool)canSendCurrentLocationMessage;
- (bool)canSendMessage:(id)arg1;
- (bool)canSendTransfer:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (id)chatIdentifier;
- (id)chatItems;
- (id)chatItemsForItems:(id)arg1;
- (id)chatItemsForMessages:(id)arg1;
- (id)chatRegistry;
- (unsigned char)chatStyle;
- (void)clear;
- (void*)contextInfo;
- (id)dateCreated;
- (id)dateModified;
- (void)dealloc;
- (void)declineInvitation;
- (bool)deleteAllHistory;
- (void)deleteChatItems:(id)arg1;
- (void)deleteTransfers:(id)arg1;
- (id)description;
- (id)displayName;
- (void)endHoldingUpdatesForAllKeys;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (id)fmfHandles;
- (bool)forceMMS;
- (id)frequentReplies;
- (id)groupID;
- (id)guid;
- (bool)hasMoreMessagesToLoad;
- (bool)hasRecipientsFollowingLocation;
- (bool)hasRecipientsSharingLocation;
- (bool)hasSiblingRecipientsSharingLocation;
- (bool)hasUnhandledInvitation;
- (id)init;
- (id)invitationForPendingParticipants;
- (void)inviteParticipants:(id)arg1 reason:(id)arg2;
- (bool)isDowngraded;
- (void)join;
- (long long)joinState;
- (id)lastAddressedHandleID;
- (id)lastFinishedMessage;
- (id)lastIncomingFinishedMessage;
- (id)lastIncomingMessage;
- (id)lastMessage;
- (void)leave;
- (void)loadAttachments:(id)arg1;
- (id)loadFrequentRepliesLimit:(unsigned long long)arg1 loadImmediately:(bool)arg2;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(bool)arg3;
- (id)loadMessagesUpToGUID:(id)arg1 date:(id)arg2 limit:(unsigned long long)arg3 loadImmediately:(bool)arg4;
- (id)loadMessagesUpToGUID:(id)arg1 limit:(unsigned long long)arg2;
- (id)loadUnreadMessagesWithLimit:(unsigned long long)arg1 fallbackToMessagesUpToGUID:(id)arg2;
- (id)localTypingMessageGUID;
- (bool)localUserIsRecording;
- (bool)localUserIsTyping;
- (void)markAllLocationShareItemsAsUnactionable;
- (void)markAllMessagesAsRead;
- (void)markAsSpam;
- (void)markChatItemAsPlayed:(id)arg1;
- (void)markChatItemAsSaved:(id)arg1;
- (void)markMessageAsRead:(id)arg1;
- (void)markMessagesAsRead:(id)arg1;
- (unsigned long long)messageCount;
- (unsigned long long)messageFailureCount;
- (id)messageForGUID:(id)arg1;
- (unsigned long long)numberOfMessagesToKeepLoaded;
- (unsigned long long)overallChatStatus;
- (id)participants;
- (id)participantsWithState:(unsigned long long)arg1;
- (id)persistentID;
- (id)recipient;
- (void)refreshServiceForSending;
- (void)remove;
- (void)removeParticipants:(id)arg1 reason:(id)arg2;
- (id)roomName;
- (id)roomNameWithoutSuffix;
- (void)sendCurrentLocationMessage;
- (bool)sendDowngradeNotificationTo:(id)arg1;
- (void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(bool)arg2;
- (void)sendMessage:(id)arg1;
- (id)sendProgressDelegate;
- (void)setContextInfo:(void*)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setForceMMS:(bool)arg1;
- (void)setFrequentReplies:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setInvitationForPendingParticipants:(id)arg1;
- (void)setLocalUserIsRecording:(bool)arg1;
- (void)setLocalUserIsTyping:(bool)arg1;
- (void)setNumberOfMessagesToKeepLoaded:(unsigned long long)arg1;
- (void)setRecipient:(id)arg1;
- (void)setRecipient:(id)arg1 locally:(bool)arg2;
- (void)setRoomName:(id)arg1;
- (void)setSendProgressDelegate:(id)arg1;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3;
- (void)shareLocationUntilDate:(id)arg1;
- (void)startTrackingParticipantLocations;
- (unsigned long long)stateForParticipant:(id)arg1;
- (void)stopSharingLocation;
- (void)stopTrackingParticipantLocations;
- (bool)suppressAccountRetargetingForGroupConversation;
- (id)testChatItems;
- (unsigned long long)unreadMessageCount;
- (void)updateChatItemsIfNeeded;
- (void)updateMessage:(id)arg1;
- (void)updateMessage:(id)arg1 flags:(unsigned long long)arg2;
- (id)valueForChatProperty:(id)arg1;
- (id)valueForProperty:(id)arg1 ofParticipant:(id)arg2;

@end
