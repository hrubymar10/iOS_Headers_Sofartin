/* Generated by RuntimeBrowser.
 */

@protocol HMIDSMessageTransport <NSObject>

@required

+ (NSMutableDictionary *)dictionaryForMessageName:(NSString *)arg1 messageIdentifier:(NSUUID *)arg2 messagePayload:(NSDictionary *)arg3 target:(NSUUID *)arg4 transactionID:(NSString *)arg5 msgType:(unsigned long long)arg6;
+ (void)messageElementsFromDictionary:(NSDictionary *)arg1 messageName:(id*)arg2 messageIdentifier:(id*)arg3 messagePayload:(id*)arg4 target:(id*)arg5 transactionID:(id*)arg6 isRequest:(bool*)arg7 isResponse:(bool*)arg8 isNotification:(bool*)arg9;

- (void)handleMessageWithName:(NSString *)arg1 messageIdentifier:(NSUUID *)arg2 messagePayload:(NSDictionary *)arg3 target:(NSUUID *)arg4 destination:(NSString *)arg5;
- (void)handleMessageWithName:(NSString *)arg1 messageIdentifier:(NSUUID *)arg2 messagePayload:(NSDictionary *)arg3 target:(NSUUID *)arg4 destination:(NSString *)arg5 responseHandler:(id)arg6;

@end