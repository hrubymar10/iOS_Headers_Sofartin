/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSendParameters : NSObject <NSCopying> {
    NSMutableDictionary *_params;
}

@property (nonatomic, retain) NSString *accountUUID;
@property (nonatomic) bool activityContinuation;
@property (nonatomic, retain) NSString *alternateCallbackID;
@property (nonatomic, retain) NSArray *bulkedPayload;
@property (nonatomic) bool bypassDuet;
@property (nonatomic) bool bypassSizeCheck;
@property (nonatomic) bool bypassStorage;
@property (nonatomic, retain) NSNumber *command;
@property (nonatomic) bool compressPayload;
@property (nonatomic) bool compressed;
@property (nonatomic) bool daemonDeathResend;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSData *dataToEncrypt;
@property (nonatomic, retain) NSDictionary *deliveryStatusContext;
@property (nonatomic, retain) NSArray *destinations;
@property (nonatomic, readonly, retain) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) NSArray *duetIdentifiersOverride;
@property (nonatomic) bool encryptPayload;
@property (nonatomic) bool enforceRemoteTimeouts;
@property (nonatomic) bool expectsPeerResponse;
@property (nonatomic, readonly, retain) NSDate *expirationDate;
@property (nonatomic) bool fireAndForget;
@property (nonatomic, retain) NSString *fromID;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSArray *interestingRegistrationProperties;
@property (nonatomic) bool isProxiedOutgoingMessage;
@property (nonatomic) bool localDelivery;
@property (nonatomic, retain) NSDictionary *message;
@property (nonatomic, retain) NSData *messageUUID;
@property (nonatomic) bool nonWaking;
@property (nonatomic, retain) NSString *peerResponseIdentifier;
@property (nonatomic) long long priority;
@property (nonatomic, retain) NSDictionary *protobuf;
@property (nonatomic, retain) NSString *queueOneIdentifier;
@property (nonatomic, retain) NSArray *requireAllRegistrationProperties;
@property (nonatomic) bool requireBluetooth;
@property (nonatomic, retain) NSDictionary *resourceMetadata;
@property (nonatomic, retain) NSString *resourcePath;
@property (nonatomic) double timeout;
@property (nonatomic) bool useDictAsTopLevel;
@property (nonatomic) bool wantsAppAck;
@property (nonatomic) bool wantsDeliveryStatus;
@property (nonatomic) bool wantsResponse;

- (id)accountUUID;
- (bool)activityContinuation;
- (id)alternateCallbackID;
- (id)bulkedPayload;
- (bool)bypassDuet;
- (bool)bypassSizeCheck;
- (bool)bypassStorage;
- (id)command;
- (bool)compressPayload;
- (bool)compressed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)daemonDeathResend;
- (id)data;
- (id)dataToEncrypt;
- (void)dealloc;
- (id)deliveryStatusContext;
- (id)destinations;
- (id)dictionaryRepresentation;
- (id)duetIdentifiersOverride;
- (void)encodeWithCoder:(id)arg1;
- (bool)encryptPayload;
- (bool)enforceRemoteTimeouts;
- (bool)expectsPeerResponse;
- (id)expirationDate;
- (bool)fireAndForget;
- (id)fromID;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)interestingRegistrationProperties;
- (bool)isProxiedOutgoingMessage;
- (bool)localDelivery;
- (id)message;
- (id)messageUUID;
- (bool)nonWaking;
- (id)objectForKey:(id)arg1;
- (id)peerResponseIdentifier;
- (long long)priority;
- (id)protobuf;
- (id)queueOneIdentifier;
- (id)requireAllRegistrationProperties;
- (bool)requireBluetooth;
- (id)resourceMetadata;
- (id)resourcePath;
- (void)setAccountUUID:(id)arg1;
- (void)setActivityContinuation:(bool)arg1;
- (void)setAlternateCallbackID:(id)arg1;
- (void)setBulkedPayload:(id)arg1;
- (void)setBypassDuet:(bool)arg1;
- (void)setBypassSizeCheck:(bool)arg1;
- (void)setBypassStorage:(bool)arg1;
- (void)setCommand:(id)arg1;
- (void)setCompressPayload:(bool)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setDaemonDeathResend:(bool)arg1;
- (void)setData:(id)arg1;
- (void)setDataToEncrypt:(id)arg1;
- (void)setDeliveryStatusContext:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setDuetIdentifiersOverride:(id)arg1;
- (void)setEncryptPayload:(bool)arg1;
- (void)setEnforceRemoteTimeouts:(bool)arg1;
- (void)setExpectsPeerResponse:(bool)arg1;
- (void)setFireAndForget:(bool)arg1;
- (void)setFromID:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterestingRegistrationProperties:(id)arg1;
- (void)setIsProxiedOutgoingMessage:(bool)arg1;
- (void)setLocalDelivery:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageUUID:(id)arg1;
- (void)setNonWaking:(bool)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setPeerResponseIdentifier:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setProtobuf:(id)arg1;
- (void)setQueueOneIdentifier:(id)arg1;
- (void)setRequireAllRegistrationProperties:(id)arg1;
- (void)setRequireBluetooth:(bool)arg1;
- (void)setResourceMetadata:(id)arg1;
- (void)setResourcePath:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUseDictAsTopLevel:(bool)arg1;
- (void)setWantsAppAck:(bool)arg1;
- (void)setWantsDeliveryStatus:(bool)arg1;
- (void)setWantsResponse:(bool)arg1;
- (double)timeout;
- (bool)useDictAsTopLevel;
- (bool)wantsAppAck;
- (bool)wantsDeliveryStatus;
- (bool)wantsResponse;

@end
