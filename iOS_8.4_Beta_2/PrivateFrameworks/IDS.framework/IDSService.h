/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSService : NSObject {
    _IDSService *_internal;
}

@property(assign,retain) _IDSService * _internal;
@property(assign,copy) NSSet * accounts;
@property(assign,copy) NSArray * devices;

+ (bool)checkMessageSize:(unsigned long long)arg1 priority:(long long)arg2;

- (id)_internal;
- (id)accounts;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (bool)cancelIdentifier:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)deviceForFromID:(id)arg1;
- (id)devices;
- (id)iCloudAccount;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 commands:(id)arg2;
- (id)initWithService:(id)arg1 serviceDomain:(id)arg2;
- (bool)isPretendingToBeFull;
- (SEL)protobufActionForIncomingRequestsOfType:(unsigned short)arg1;
- (SEL)protobufActionForIncomingResponsesOfType:(unsigned short)arg1;
- (void)removeDelegate:(id)arg1;
- (bool)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendData:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5;
- (bool)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendResourceAtURL:(id)arg1 metadata:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3;
- (id)serviceDomain;
- (void)setPreferInfraWiFi:(bool)arg1;
- (void)setPretendingToBeFull:(bool)arg1;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;
- (id)uriForFromID:(id)arg1;

@end
