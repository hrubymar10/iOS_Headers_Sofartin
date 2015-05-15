/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDIDSMessagePersistentContext : NSObject <NSSecureCoding> {
    NSDate *_date;
    bool _fromRequest;
    NSString *_idsIdentifier;
    unsigned short _messageID;
    NSDictionary *_userInfo;
}

@property(assign,retain) NSDate * date;
@property(getter=isFromRequest,assign,readwrite) bool fromRequest;
@property(assign,copy) NSString * idsIdentifier;
@property(assign,readwrite) unsigned short messageID;
@property(assign,retain) NSDictionary * userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)idsIdentifier;
- (id)initWithCoder:(id)arg1;
- (bool)isFromRequest;
- (unsigned short)messageID;
- (void)setDate:(id)arg1;
- (void)setFromRequest:(bool)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageID:(unsigned short)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end