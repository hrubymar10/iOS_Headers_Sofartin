/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDChatRegistry : NSObject {
    NSMutableDictionary *_chats;
    NSRecursiveLock *_chatsLock;
    bool _doneLoadingAfterMerge;
    bool _isLoading;
}

@property(assign,readonly) NSArray * chats;

+ (id)sharedInstance;

- (id)_chatInfo;
- (id)_chatInfoForSaving;
- (void)_forceReloadChats:(bool)arg1;
- (void)_makeAllAttachmentsClassC;
- (void)_rebuildSpotlightDatabaseFor18306262;
- (bool)_saveChats;
- (void)addChat:(id)arg1;
- (void)addItem:(id)arg1 toChat:(id)arg2;
- (void)addMessage:(id)arg1 toChat:(id)arg2;
- (id)allExistingChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2;
- (id)chatForHandle:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4;
- (id)chatForHandles:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 displayName:(id)arg6 guid:(id)arg7;
- (id)chatForRoom:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4;
- (id)chats;
- (void)dealloc;
- (id)existingChatForID:(id)arg1 account:(id)arg2;
- (id)existingChatForIDs:(id)arg1 account:(id)arg2 displayName:(id)arg3 groupID:(id)arg4 style:(unsigned char)arg5;
- (id)existingChatForIDs:(id)arg1 account:(id)arg2 style:(unsigned char)arg3;
- (id)existingChatForRoom:(id)arg1 account:(id)arg2;
- (id)existingChatWithGUID:(id)arg1;
- (id)existingChatWithIdentifier:(id)arg1 account:(id)arg2;
- (id)existingChatsForIDs:(id)arg1 onService:(id)arg2 style:(unsigned char)arg3;
- (id)init;
- (bool)loadChatsWithCompletionBlock:(id)arg1;
- (void)removeChat:(id)arg1;
- (void)removeItem:(id)arg1 fromChat:(id)arg2;
- (void)removeMessage:(id)arg1 fromChat:(id)arg2;
- (bool)saveChats;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)systemDidUnlock;
- (void)updateLastMessageForChat:(id)arg1;
- (void)updateLastMessageForChat:(id)arg1 hintMessage:(id)arg2;
- (bool)updateProperties:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3;
- (void)updateStateForChat:(id)arg1;
- (void)updateStateForChat:(id)arg1 forcePost:(bool)arg2;
- (void)updateStateForChat:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 forcePost:(bool)arg4;
- (bool)updateUnreadCountForChat:(id)arg1;

@end
