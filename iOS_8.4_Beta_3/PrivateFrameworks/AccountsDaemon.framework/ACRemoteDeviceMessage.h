/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACRemoteDeviceMessage : NSObject {
    NSData *_data;
    NSString *_identifier;
    bool _isReply;
    bool _needsReply;
    NSMutableDictionary *_payload;
}

@property(assign,readonly) ACAccount * account;
@property(assign,readonly) NSString * command;
@property(assign,readonly) NSData * data;
@property(assign,readonly) NSError * error;
@property(assign,readonly) NSString * identifier;
@property(assign,readwrite) bool isReply;
@property(assign,readwrite) bool needsReply;
@property(assign,readonly) NSDictionary * options;
@property(assign,readonly) NSObject<NSCoding> * result;
@property(assign,readonly) NSString * sentMessageIdentifier;
@property(assign,readonly) bool success;

+ (id)actionMessageWithCommand:(id)arg1 account:(id)arg2 options:(id)arg3;
+ (id)replyForMessage:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3;
+ (id)replyForMessage:(id)arg1 withSuccess:(bool)arg2 result:(id)arg3 error:(id)arg4;

- (void).cxx_destruct;
- (void)_invalidateCachedData;
- (id)_payloadObjectForKey:(id)arg1;
- (void)_setPayloadObject:(id)arg1 forKey:(id)arg2;
- (id)account;
- (id)command;
- (id)data;
- (id)description;
- (id)error;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isReply;
- (bool)needsReply;
- (id)options;
- (id)result;
- (id)sentMessageIdentifier;
- (void)setIsReply:(bool)arg1;
- (void)setNeedsReply:(bool)arg1;
- (bool)success;

@end