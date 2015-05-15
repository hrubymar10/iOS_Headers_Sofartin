/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMMessageItem : IMItem <IMRemoteObjectCoding, NSCoding, NSCopying> {
    NSAttributedString *_body;
    NSData *_bodyData;
    unsigned int _error;
    long long _expireState;
    NSArray *_fileTransferGUIDs;
    unsigned long long _flags;
    NSString *_plainBody;
    long long _replaceID;
    NSString *_subject;
    NSDate *_timeDelivered;
    NSDate *_timePlayed;
    NSDate *_timeRead;
}

@property(assign,retain) NSAttributedString * body;
@property(assign,retain) NSData * bodyData;
@property(assign,readwrite) unsigned int errorCode;
@property(assign,readwrite) long long expireState;
@property(assign,retain) NSArray * fileTransferGUIDs;
@property(assign,readwrite) unsigned long long flags;
@property(assign,readwrite) bool hasDataDetectorResults;
@property(assign,readonly) bool isAlert;
@property(assign,readonly) bool isAudioMessage;
@property(assign,readonly) bool isDelivered;
@property(assign,readonly) bool isEmote;
@property(assign,readonly) bool isEmpty;
@property(assign,readonly) bool isExpirable;
@property(assign,readonly) bool isFinished;
@property(assign,readonly) bool isFromExternalSource;
@property(assign,readonly) bool isLocatingMessage;
@property(assign,readonly) bool isPlayed;
@property(assign,readonly) bool isPrepared;
@property(assign,readonly) bool isRead;
@property(assign,readonly) bool isSent;
@property(assign,readonly) bool isTypingMessage;
@property(assign,retain) NSString * plainBody;
@property(assign,readwrite) long long replaceID;
@property(assign,retain) NSString * subject;
@property(assign,retain) NSDate * timeDelivered;
@property(assign,retain) NSDate * timePlayed;
@property(assign,retain) NSDate * timeRead;
@property(assign,readonly) bool wasDataDetected;
@property(assign,readonly) bool wasDowngraded;

- (void)_clearBodyData;
- (void)_generateBodyDataIfNeeded;
- (void)_generateBodyTextIfNeeded;
- (bool)_hasMessageChatItem;
- (id)_newChatItems;
- (id)_otherHandle;
- (void)_regenerateBodyData;
- (void)_regenerateBodyText;
- (id)_senderHandle;
- (id)_service;
- (void)_updateFlags:(unsigned long long)arg1;
- (void)adjustIsEmptyFlag;
- (id)body;
- (id)bodyData;
- (id)copyDictionaryRepresentation;
- (id)copyWithFlags:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)errorCode;
- (long long)expireState;
- (id)fileTransferGUIDs;
- (unsigned long long)flags;
- (bool)hasDataDetectorResults;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 hint:(id)arg2;
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8;
- (id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 errorType:(unsigned int)arg22;
- (bool)isAlert;
- (bool)isAudioMessage;
- (bool)isDelivered;
- (bool)isEmote;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isExpirable;
- (bool)isFinished;
- (bool)isFromExternalSource;
- (bool)isFromMe;
- (bool)isLocatingMessage;
- (bool)isPlayed;
- (bool)isPrepared;
- (bool)isRead;
- (bool)isSent;
- (bool)isTypingMessage;
- (id)message;
- (id)plainBody;
- (long long)replaceID;
- (id)sender;
- (void)setBody:(id)arg1;
- (void)setBodyData:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setExpireState:(long long)arg1;
- (void)setFileTransferGUIDs:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setHasDataDetectorResults:(bool)arg1;
- (void)setPlainBody:(id)arg1;
- (void)setReplaceID:(long long)arg1;
- (void)setSubject:(id)arg1;
- (void)setTimeDelivered:(id)arg1;
- (void)setTimePlayed:(id)arg1;
- (void)setTimeRead:(id)arg1;
- (void)setWasDataDetected:(bool)arg1;
- (id)subject;
- (id)timeDelivered;
- (id)timePlayed;
- (id)timeRead;
- (bool)wasDataDetected;
- (bool)wasDowngraded;

@end
