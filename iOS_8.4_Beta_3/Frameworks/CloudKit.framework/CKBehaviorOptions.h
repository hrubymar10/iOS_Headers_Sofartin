/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKBehaviorOptions : NSObject {
    NSMutableDictionary *_cachedPrefs;
    NSObject<OS_dispatch_queue> *_cachedPrefsQueue;
}

@property (nonatomic, retain) NSMutableDictionary *cachedPrefs;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cachedPrefsQueue;

+ (id)sharedOptions;

- (void).cxx_destruct;
- (bool)CFNetworkLogging;
- (const char *)CKCtlPrompt;
- (bool)CKTimeLogging;
- (bool)CKTimeLoggingDetailed;
- (unsigned long long)PCSCacheSize;
- (int)PCSRetryCount;
- (id)_behaviorContainerOptionForKey:(id)arg1;
- (id)_behaviorOptionForKey:(id)arg1;
- (bool)_buildIsOverridden;
- (id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (bool)_getBoolOptionForKey:(id)arg1 defaultValue:(bool)arg2;
- (double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2;
- (int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2;
- (id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2;
- (void)_setPref:(id)arg1 forKey:(id)arg2;
- (void)_startListeningForNotifications;
- (id)_urlForKey:(id)arg1 defaultURLString:(id)arg2;
- (unsigned long long)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned long long)arg1;
- (unsigned long long)assetEvictionGracePeriodWithDefaultValue:(unsigned long long)arg1;
- (int)backgroundSessionConnectionPoolLimitWithDefaultValue:(int)arg1;
- (id)buildVersion;
- (id)cachedPrefs;
- (id)cachedPrefsQueue;
- (int)cachedRecordExpiryTime;
- (int)clientThrottleQueueWidth;
- (bool)compressRequests;
- (id)configBaseURL;
- (id)contextLoggingBlacklist;
- (id)contextLoggingWhitelist;
- (id)customCloudDBBaseURL;
- (id)customDeviceServiceBaseURL;
- (id)customShareServiceBaseURL;
- (long long)defaultOperationQualityOfService;
- (double)defaultRequestTimeout;
- (double)defaultResourceTimeout;
- (int)defaultRetryAfter;
- (bool)disableCaching;
- (bool)enableMescal;
- (bool)evictRecentAssets;
- (long long)flowControlBudget;
- (long long)flowControlBudgetOverride;
- (double)flowControlRegeneration;
- (double)flowControlRegenerationOverride;
- (id)init;
- (bool)isAppleInternalInstall;
- (unsigned long long)maxBatchSize;
- (unsigned long long)maxPackageDownloadsPerBatchWithDefaultValue:(unsigned long long)arg1;
- (unsigned long long)maxPackageUploadsPerBatchWithDefaultValue:(unsigned long long)arg1;
- (double)maximumFetchWaitTime;
- (double)maximumThrottleSeconds;
- (double)maximumWaitAfterFetchRequest;
- (double)operationTimeout;
- (bool)optimisticPCS;
- (id)otherAccountsWithDefaultValue:(id)arg1;
- (id)primaryAccountEmailOverride;
- (id)primaryAccountPasswordOverride;
- (id)productName;
- (id)productVersion;
- (double)publicIdentitiesExpirationTimeout;
- (bool)sandboxCloudD;
- (id)secondaryAccountEmailOverride;
- (id)secondaryAccountPasswordOverride;
- (bool)sendDebugHeader;
- (int)serverIDExpiryTime;
- (void)setBuildVersion:(id)arg1;
- (void)setCFNetworkLogging:(bool)arg1;
- (void)setCKCtlPrompt:(char *)arg1;
- (void)setCKTimeLogging:(bool)arg1;
- (void)setCKTimeLoggingDetailed:(bool)arg1;
- (void)setCachedPrefs:(id)arg1;
- (void)setCachedPrefsQueue:(id)arg1;
- (void)setCachedRecordExpiryTime:(int)arg1;
- (void)setCompressRequests:(bool)arg1;
- (void)setConfigBaseURL:(id)arg1;
- (void)setCustomCloudDBBaseURL:(id)arg1;
- (void)setCustomDeviceServiceBaseURL:(id)arg1;
- (void)setCustomShareServiceBaseURL:(id)arg1;
- (void)setDefaultRequestTimeout:(double)arg1;
- (void)setDefaultResourceTimeout:(double)arg1;
- (void)setDisableCaching:(bool)arg1;
- (void)setEnableMescal:(bool)arg1;
- (void)setOperationTimeout:(double)arg1;
- (void)setOptimisticPCS:(bool)arg1;
- (void)setPrimaryAccountEmailOverride:(id)arg1;
- (void)setPrimaryAccountPasswordOverride:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setSecondaryAccountEmailOverride:(id)arg1;
- (void)setSecondaryAccountPasswordOverride:(id)arg1;
- (void)setSendDebugHeader:(bool)arg1;
- (void)setServerIDExpiryTime:(int)arg1;
- (void)setSetupBaseURL:(id)arg1;
- (void)setShouldProfileSQL:(bool)arg1;
- (void)setTrafficLogMaximumDataSize:(int)arg1;
- (void)setUseBackgroundSessions:(bool)arg1;
- (void)setUseEncryption:(bool)arg1;
- (void)setUseStingray:(bool)arg1;
- (id)setupBaseURL;
- (bool)shouldDecryptRecordsBeforeSave;
- (bool)shouldLogProtobufBinary;
- (bool)shouldProfileSQL;
- (int)trafficLogMaximumDataSize;
- (bool)useBackgroundSessions;
- (bool)useEncryption;
- (bool)useStingray;
- (bool)validateMescalResponses;

@end
