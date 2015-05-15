/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMLocationShareOfferChatItem : IMTranscriptChatItem <IMMessageChatItem> {
    bool _actionableEclipsed;
    IMHandle *_sender;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool failed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly) long long offerState;
@property (nonatomic, readonly, retain) IMHandle *sender;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSDate *time;

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
