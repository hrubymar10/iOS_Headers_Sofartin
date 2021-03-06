/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMMessage : NSObject <NSCopying> {
    NSError *_error;
    NSArray *_fileTransferGUIDs;
    unsigned long long _flags;
    NSString *_guid;
    bool _isInvitationMessage;
    long long _messageID;
    NSAttributedString *_messageSubject;
    NSString *_plainBody;
    IMHandle *_sender;
    IMHandle *_subject;
    NSAttributedString *_text;
    NSDate *_time;
    NSDate *_timeDelivered;
    NSDate *_timePlayed;
    NSDate *_timeRead;
}

@property(assign,retain) IMMessageItem * _imMessageItem;
@property(assign,retain) NSError * error;
@property(assign,copy) NSArray * fileTransferGUIDs;
@property(assign,readwrite) unsigned long long flags;
@property(assign,retain) NSString * guid;
@property(assign,readonly) bool hasDataDetectorResults;
@property(assign,readonly) bool hasInlineAttachments;
@property(assign,retain) NSArray * inlineAttachmentAttributesArray;
@property(assign,readonly) bool isAddressedToMe;
@property(assign,readonly) bool isAlert;
@property(assign,readonly) bool isAudioMessage;
@property(assign,readonly) bool isAutoReply;
@property(assign,readonly) bool isDelayed;
@property(assign,readonly) bool isDelivered;
@property(assign,readonly) bool isEmote;
@property(assign,readonly) bool isEmpty;
@property(assign,readonly) bool isFinished;
@property(assign,readonly) bool isFromMe;
@property(assign,readwrite) bool isInvitationMessage;
@property(assign,readonly) bool isLocatingMessage;
@property(assign,readonly) bool isPlayed;
@property(assign,readonly) bool isRead;
@property(assign,readonly) bool isSent;
@property(assign,readonly) bool isSystemMessage;
@property(assign,readonly) bool isTypingMessage;
@property(assign,readwrite) long long messageID;
@property(assign,retain) NSAttributedString * messageSubject;
@property(assign,retain) NSString * plainBody;
@property(assign,retain) IMHandle * sender;
@property(assign,retain) NSString * senderName;
@property(assign,retain) IMHandle * subject;
@property(assign,retain) NSString * summaryString;
@property(assign,retain) NSAttributedString * text;
@property(assign,retain) NSDate * time;
@property(assign,retain) NSDate * timeDelivered;
@property(assign,retain) NSDate * timePlayed;
@property(assign,retain) NSDate * timeRead;
@property(assign,readonly) bool wasDataDetected;
@property(assign,readonly) bool wasDowngraded;

+ (id)_vCardDataWithCLLocation:(id)arg1;
+ (id)defaultInvitationMessageFromSender:(id)arg1 flags:(unsigned long long)arg2;
+ (id)fromMeIMHandle:(id)arg1 withText:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4;
+ (id)instantMessageWithText:(id)arg1 flags:(unsigned long long)arg2;
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4;
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3;
+ (id)locatingMessageWithGuid:(id)arg1 error:(id)arg2;
+ (id)messageFromIMMessageItem:(id)arg1 sender:(id)arg2 subject:(id)arg3;
+ (id)messageFromIMMessageItemDictionary:(id)arg1 body:(id)arg2 sender:(id)arg3 subject:(id)arg4;
+ (id)messageWithLocation:(id)arg1 flags:(unsigned long long)arg2 error:(id)arg3 guid:(id)arg4;

- (id)__ck_attachmentText:(bool)arg1;
- (id)__ck_downgradedMessage;
- (bool)__ck_isEqualToMessageUsingGUID:(id)arg1;
- (bool)__ck_isSMS;
- (bool)__ck_isiMessage;
- (id)__ck_previewText;
- (id)__ck_service;
- (id)__ck_undowngradedMessage;
- (id)_copyWithFlags:(unsigned long long)arg1;
- (id)_imMessageItem;
- (id)_initWithSender:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 plainText:(id)arg6 text:(id)arg7 messageSubject:(id)arg8 fileTransferGUIDs:(id)arg9 flags:(unsigned long long)arg10 error:(id)arg11 guid:(id)arg12 messageID:(long long)arg13 subject:(id)arg14;
- (void)_updateError:(id)arg1;
- (void)_updateFileTransferGUIDs:(id)arg1;
- (void)_updateFlags:(unsigned long long)arg1;
- (void)_updateGUID:(id)arg1;
- (void)_updateMessageID:(long long)arg1;
- (void)_updateSender:(id)arg1;
- (void)_updateText:(id)arg1;
- (void)_updateTime:(id)arg1;
- (void)_updateTimeDelivered:(id)arg1;
- (void)_updateTimePlayed:(id)arg1;
- (void)_updateTimeRead:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 comparisonType:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)fileTransferGUIDs;
- (unsigned long long)flags;
- (id)guid;
- (bool)hasDataDetectorResults;
- (bool)hasInlineAttachments;
- (id)initWithSender:(id)arg1 fileTransfer:(id)arg2;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(unsigned long long)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9;
- (id)inlineAttachmentAttributesArray;
- (bool)isAddressedToMe;
- (bool)isAlert;
- (bool)isAudioMessage;
- (bool)isAutoReply;
- (bool)isDelayed;
- (bool)isDelivered;
- (bool)isEmote;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isFinished;
- (bool)isFromMe;
- (bool)isInvitationMessage;
- (bool)isLocatingMessage;
- (bool)isPlayed;
- (bool)isRead;
- (bool)isSent;
- (bool)isSystemMessage;
- (bool)isTypingMessage;
- (long long)messageID;
- (id)messageSubject;
- (id)plainBody;
- (id)sender;
- (id)senderName;
- (void)setIsAddressedToMe:(bool)arg1;
- (void)setIsInvitationMessage:(bool)arg1;
- (id)subject;
- (id)summaryString;
- (id)text;
- (id)time;
- (id)timeDelivered;
- (id)timePlayed;
- (id)timeRead;
- (bool)wasDataDetected;
- (bool)wasDowngraded;

@end
