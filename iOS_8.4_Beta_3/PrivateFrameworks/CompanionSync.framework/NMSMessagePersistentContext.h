/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface NMSMessagePersistentContext : NSObject <NSSecureCoding> {
    NSDictionary *_customIDSFlags;
    NSDate *_date;
    bool _fromRequest;
    NSString *_idsIdentifier;
    unsigned short _messageID;
    bool _processAcked;
    bool _sendAcked;
    NSDictionary *_userInfo;
}

@property (nonatomic, retain) NSDictionary *customIDSFlags;
@property (nonatomic, retain) NSDate *date;
@property (getter=isFromRequest, nonatomic) bool fromRequest;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic) unsigned short messageID;
@property (nonatomic) bool processAcked;
@property (nonatomic) bool sendAcked;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)customIDSFlags;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)idsIdentifier;
- (id)initWithCoder:(id)arg1;
- (bool)isFromRequest;
- (unsigned short)messageID;
- (bool)processAcked;
- (bool)sendAcked;
- (void)setCustomIDSFlags:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setFromRequest:(bool)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageID:(unsigned short)arg1;
- (void)setProcessAcked:(bool)arg1;
- (void)setSendAcked:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
