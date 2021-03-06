/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMLocationShareOfferChatItem : IMTranscriptChatItem <IMMessageChatItem> {
    bool _actionableEclipsed;
    IMHandle *_sender;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) bool failed;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isFromMe;
@property(assign,readonly) long long offerState;
@property(assign,retain) IMHandle * sender;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSDate * time;

- (Class)__ck_chatItemClass;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
- (bool)_isActionableEclipsed;
- (void)_setActionableEclipsed:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)failed;
- (bool)isFromMe;
- (long long)offerState;
- (id)sender;
- (id)time;

@end
