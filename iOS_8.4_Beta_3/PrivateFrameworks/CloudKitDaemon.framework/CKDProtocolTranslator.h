/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDProtocolTranslator : NSObject {
    NSString *_bundleIdentifier;
    NSString *_containerScopedUserID;
    <CKDProtocolTranslatorIdentityDelegate> *_identityDelegate;
    NSString *_overriddenContainerScopedUserID;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *containerScopedUserID;
@property (nonatomic) <CKDProtocolTranslatorIdentityDelegate> *identityDelegate;
@property (nonatomic, copy) NSString *overriddenContainerScopedUserID;
@property (nonatomic, readonly) CKDPIdentifier *pUserID;

+ (id)translatorIgnoringUserIDs;

- (void).cxx_destruct;
- (id)_initWithContainerScopedUserID:(id)arg1 bundleIdentifier:(id)arg2;
- (bool)_isDefaultUserNameFromClient:(id)arg1;
- (bool)_isDefaultUserNameFromServer:(id)arg1;
- (id)_pRecordFromRecordSansValues:(id)arg1 forCache:(bool)arg2;
- (id)assetFromPAsset:(id)arg1 error:(id*)arg2;
- (id)bundleIdentifier;
- (id)containerPrivacySettingsFromPContainerPrivacySettings:(id)arg1;
- (id)containerScopedUserID;
- (id)deltaPRecordFromRecord:(id)arg1 withAllFields:(bool)arg2 outDeletedMergeFields:(id*)arg3 outKeysToSend:(id*)arg4;
- (id)fieldValueFromObject:(id)arg1;
- (id)fieldValueListOfType:(int)arg1 withList:(id)arg2;
- (id)fieldValueOfType:(int)arg1 withObject:(id)arg2;
- (int)fieldValueTypeFromObject:(id)arg1;
- (id)identityDelegate;
- (id)identityFromPUser:(id)arg1;
- (id)initWithContainerScopedUserID:(id)arg1 bundleIdentifier:(id)arg2;
- (id)locationFieldValueWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)notificationFromPPushMessage:(id)arg1;
- (id)objectRepresentationFromFieldValue:(id)arg1;
- (id)overriddenContainerScopedUserID;
- (id)pAliasWithEmailAddress:(id)arg1;
- (id)pAliasWithUserRecordID:(id)arg1;
- (id)pAssetFromAsset:(id)arg1;
- (id)pFieldWithKey:(id)arg1 value:(id)arg2;
- (id)pIdentifierFromUserRecordID:(id)arg1;
- (id)pIdentifierFromUserRecordName:(id)arg1;
- (id)pPackageFromPackage:(id)arg1;
- (id)pParticipantFromShareParticipant:(id)arg1;
- (id)pQueryFromQuery:(id)arg1 error:(id*)arg2;
- (id)pRecordFromRecord:(id)arg1;
- (id)pRecordFromRecord:(id)arg1 forCache:(bool)arg2;
- (id)pRecordIdentifierFromRecordID:(id)arg1;
- (id)pRecordIdentifierFromShareID:(id)arg1;
- (id)pRecordZoneFromRecordZone:(id)arg1;
- (id)pRecordZoneIdentifierFromRecordZoneID:(id)arg1;
- (id)pShareFromShare:(id)arg1;
- (id)pShareIdentifierFromShareID:(id)arg1;
- (id)pSubscriptionFromSubscription:(id)arg1 error:(id*)arg2;
- (id)pUserID;
- (id)packageFromPPackage:(id)arg1 error:(id*)arg2;
- (id)recordFromPRecord:(id)arg1 error:(id*)arg2;
- (id)recordIDFromPRecordIdentifier:(id)arg1 error:(id*)arg2;
- (id)recordIDFromPUserName:(id)arg1 error:(id*)arg2;
- (id)recordZoneFromPRecordZone:(id)arg1 withDatabaseScope:(long long)arg2 error:(id*)arg3;
- (id)recordZoneIDFromPRecordZoneIdentifier:(id)arg1 error:(id*)arg2;
- (void)setContainerScopedUserID:(id)arg1;
- (void)setIdentityDelegate:(id)arg1;
- (void)setOverriddenContainerScopedUserID:(id)arg1;
- (id)shareFromPShare:(id)arg1 error:(id*)arg2;
- (id)shareIDFromPShareIdentifier:(id)arg1 error:(id*)arg2;
- (id)shareParticipantFromPParticipant:(id)arg1 error:(id*)arg2;
- (id)subscriptionFromPSubscription:(id)arg1 error:(id*)arg2;
- (id)userNameFromPIdentifier:(id)arg1 error:(id*)arg2;

@end
