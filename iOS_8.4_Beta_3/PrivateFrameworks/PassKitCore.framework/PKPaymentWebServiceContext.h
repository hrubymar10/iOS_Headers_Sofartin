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

@property(assign,readonly) NSDictionary * TSMURLStringByPushTopic;
@property(assign,copy) NSArray * certificates;
@property(assign,retain) PKPaymentWebServiceConfiguration * configuration;
@property(assign,copy) NSDate * configurationDate;
@property(assign,readwrite) long long consistencyCheckBackoffLevel;
@property(assign,readwrite) bool devSigned;
@property(assign,copy) NSString * deviceID;
@property(assign,copy) NSString * lastUpdatedTag;
@property(assign,readwrite) bool messageServiceDisabled;
@property(assign,readonly) PKPaymentWebServiceRegion * primaryRegion;
@property(assign,copy) NSString * primaryRegionIdentifier;
@property(assign,copy) NSString * pushToken;
@property(assign,retain) NSDictionary * regions;
@property(assign,copy) NSDate * registrationDate;
@property(assign,copy) NSString * secureElementID;
@property(assign,readwrite) bool transactionServiceDisabled;
@property(assign,retain) NSMutableDictionary * verificationRequestsByPassUniqueID;
@property(assign,readwrite) long long version;

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
