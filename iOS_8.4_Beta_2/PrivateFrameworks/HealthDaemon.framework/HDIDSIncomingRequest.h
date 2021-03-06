/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDIDSIncomingRequest : NSObject {
    NSData *_data;
    bool _expectsResponse;
    NSString *_idsIdentifier;
    HDIDSMessageCenter *_messageCenter;
    unsigned short _messageID;
    id _pbRequest;
    unsigned long long _priority;
    HDIDSOutgoingResponse *_response;
}

@property(assign,retain) NSData * data;
@property(assign,readwrite) bool expectsResponse;
@property(assign,copy) NSString * idsIdentifier;
@property(assign,readwrite) HDIDSMessageCenter * messageCenter;
@property(assign,readwrite) unsigned short messageID;
@property(assign,retain) id pbRequest;
@property(assign,readwrite) unsigned long long priority;
@property(assign,retain) HDIDSOutgoingResponse * response;

- (void).cxx_destruct;
- (void)configureResponse;
- (id)data;
- (void)dealloc;
- (id)description;
- (bool)expectsResponse;
- (id)idsIdentifier;
- (id)messageCenter;
- (unsigned short)messageID;
- (id)pbRequest;
- (unsigned long long)priority;
- (id)response;
- (void)setData:(id)arg1;
- (void)setExpectsResponse:(bool)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setMessageID:(unsigned short)arg1;
- (void)setPbRequest:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setResponse:(id)arg1;

@end
