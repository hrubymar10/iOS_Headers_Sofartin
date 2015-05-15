/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMTranscriptChatItemRules : NSObject <IMChatItemRules> {
    IMChat *_chat;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2;
- (void)_didProcessChatItems:(id)arg1;
- (id)_initWithChat:(id)arg1;
- (void)_invalidate;
- (id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2;
- (bool)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3;
- (bool)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2;
- (id)chatItemForIMChatItem:(id)arg1;
- (bool)shouldShowRaiseMessageStatus;
- (id)testChatItems;

@end
