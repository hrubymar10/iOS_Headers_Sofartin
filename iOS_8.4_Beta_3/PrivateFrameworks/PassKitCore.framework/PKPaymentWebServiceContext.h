/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentWebServiceContext : NSObject <NSSecureCoding> {
    NSArray *_certificates;
    PKPaymentWebServiceConfiguration *_configuration;
    NSDate *_configurationDate;
    long long _consistencyCheckBackoffLevel;
    bool _devSigned;
    NSString *_deviceID;
    NSString *_lastUpdatedTag;
    bool _messageServiceDisabled;
    NSString *_primaryRegionIdentifier;
    NSString *_pushToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_regions;
    NSDate *_registrationDate;
    NSString *_secureElementID;
    bool _transactionServiceDisabled;
    NSMutableDictionary *_verificationRequestsByPassUniqueID;
    long long _version;
}

@property (readonly) NSDictionary *TSMURLStringByPushTopic;
@property (copy) NSArray *certificates;
@property (retain) PKPaymentWebServiceConfiguration *configuration;
@property (copy) NSDate *configurationDate;
@property long long consistencyCheckBackoffLevel;
@property bool devSigned;
@property (copy) NSString *deviceID;
@property (copy) NSString *lastUpdatedTag;
@property bool messageServiceDisabled;
@property (readonly) PKPaymentWebServiceRegion *primaryRegion;
@property (copy) NSString *primaryRegionIdentifier;
@property (copy) NSString *pushToken;
@property (retain) NSDictionary *regions;
@property (copy) NSDate *registrationDate;
@property (copy) NSString *secureElementID;
@property bool transactionServiceDisabled;
@property (retain) NSMutableDictionary *verificationRequestsByPassUniqueID;
@property long long version;

+ (void)_migrateContext:(id)arg1;
+ (void)_migrateFrom0To1:(id)arg1;
+ (id)contextWithArchive:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)TSMPushTopics;
- (id)TSMURLStringByPushTopic;
- (void)addVerificationRequestRecord:(id)arg1 forUniqueID:(id)arg2;
- (void)archiveAtPath:(id)arg1;
- (id)certificates;
- (id)configuration;
- (id)configurationDate;
- (long long)consistencyCheckBackoffLevel;
- (void)dealloc;
- (bool)devSigned;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastUpdatedTag;
- (bool)messageServiceDisabled;
- (id)primaryRegion;
- (id)primaryRegionIdentifier;
- (id)pushToken;
- (id)regionForIdentifier:(id)arg1;
- (id)regions;
- (id)registrationDate;
- (void)removeVerificationRequestRecordForUniqueID:(id)arg1;
- (id)secureElementID;
- (void)setCertificates:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConfigurationDate:(id)arg1;
- (void)setConsistencyCheckBackoffLevel:(long long)arg1;
- (void)setDevSigned:(bool)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setLastUpdatedTag:(id)arg1;
- (void)setMessageServiceDisabled:(bool)arg1;
- (void)setPrimaryRegionIdentifier:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setRegions:(id)arg1;
- (void)setRegistrationDate:(id)arg1;
- (void)setSecureElementID:(id)arg1;
- (void)setTransactionServiceDisabled:(bool)arg1;
- (void)setVerificationRequestsByPassUniqueID:(id)arg1;
- (void)setVersion:(long long)arg1;
- (bool)transactionServiceDisabled;
- (id)verificationRequestRecordForUniqueID:(id)arg1;
- (id)verificationRequestsByPassUniqueID;
- (long long)version;

@end
