/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface NMSOutgoingRequest : NSObject <NMSObfuscatableDescriptionProviding> {
    NSData *_data;
    NSDictionary *_extraIDSOptions;
    NSString *_idsIdentifier;
    NMSMessageCenter *_messageCenter;
    unsigned short _messageID;
    id _pbRequest;
    NSDictionary *_persistentUserInfo;
    unsigned long long _priority;
    double _responseTimeout;
    double _sendTimeout;
    bool _shouldEncrypt;
}

@property(assign,retain) NSData * data;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSDictionary * extraIDSOptions;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * idsIdentifier;
@property(assign,readwrite) NMSMessageCenter * messageCenter;
@property(assign,readwrite) unsigned short messageID;
@property(assign,retain) id pbRequest;
@property(assign,retain) NSDictionary * persistentUserInfo;
@property(assign,readwrite) unsigned long long priority;
@property(assign,readwrite) double responseTimeout;
@property(assign,readwrite) double sendTimeout;
@property(assign,readwrite) bool shouldEncrypt;
@property(assign,readonly) Class superclass;

+ (id)requestWithMessageID:(unsigned short)arg1;

- (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;
- (id)data;
- (id)description;
- (id)extraIDSOptions;
- (id)idsIdentifier;
- (id)init;
- (id)messageCenter;
- (unsigned short)messageID;
- (id)pbRequest;
- (id)persistentUserInfo;
- (unsigned long long)priority;
- (double)responseTimeout;
- (double)sendTimeout;
- (void)setData:(id)arg1;
- (void)setExtraIDSOptions:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setMessageID:(unsigned short)arg1;
- (void)setPbRequest:(id)arg1;
- (void)setPersistentUserInfo:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setResponseTimeout:(double)arg1;
- (void)setSendTimeout:(double)arg1;
- (void)setShouldEncrypt:(bool)arg1;
- (bool)shouldEncrypt;

@end
