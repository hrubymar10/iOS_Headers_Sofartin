/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRequestOperation : PBCodable <NSCopying> {
    CKDPAssetUploadTokenRetrieveRequest *_assetUploadTokenRetrieveRequest;
    CKDPDeleteCommentRequest *_deleteCommentRequest;
    CKDPDeleteContainerRequest *_deleteContainerRequest;
    CKDPGetCommentRequest *_getCommentRequest;
    CKDPGetCommentsRequest *_getCommentsRequest;
    CKDPGetLikesRequest *_getLikesRequest;
    CKDPRequestOperationHeader *_header;
    CKDPLikeRequest *_likeRequest;
    CKDPMescalCertificateRequest *_mescalCertificateRequest;
    CKDPMescalSessionInfoRequest *_mescalSessionInfoRequest;
    CKDPMescalSignatureRequest *_mescalSignatureRequest;
    CKDPNotificationMarkReadRequest *_notificationMarkReadRequest;
    CKDPNotificationSyncRequest *_notificationSyncRequest;
    CKDPPkiRegisterRequest *_pkiRegisterRequest;
    CKDPPkiRetrieveRequest *_pkiRetrieveRequest;
    CKDPPostCommentRequest *_postCommentRequest;
    CKDPPromoteContainerSchemaRequest *_promoteContainerSchemaRequest;
    CKDPPulseRequest *_pulseRequest;
    CKDPQueryRetrieveRequest *_queryRetrieveRequest;
    CKDPRecordDeleteRequest *_recordDeleteRequest;
    CKDPRecordRetrieveChangesRequest *_recordRetrieveChangesRequest;
    CKDPRecordRetrieveRequest *_recordRetrieveRequest;
    CKDPRecordRetrieveVersionsRequest *_recordRetrieveVersionsRequest;
    CKDPRecordSaveRequest *_recordSaveRequest;
    CKDPOperation *_request;
    CKDPResetContainerRequest *_resetContainerRequest;
    CKDPSetBadgeCountRequest *_setBadgeCountRequest;
    CKDPShareAcceptRequest *_shareAcceptRequest;
    CKDPShareDeleteRequest *_shareDeleteRequest;
    CKDPShareRetrieveRequest *_shareRetrieveRequest;
    CKDPShareSaveRequest *_shareSaveRequest;
    CKDPShareTokenDeleteRequest *_shareTokenDeleteRequest;
    CKDPShareTokenRetrieveRequest *_shareTokenRetrieveRequest;
    CKDPShareTokenSaveRequest *_shareTokenSaveRequest;
    CKDPSubscriptionCreateRequest *_subscriptionCreateRequest;
    CKDPSubscriptionDeleteRequest *_subscriptionDeleteRequest;
    CKDPSubscriptionRetrieveRequest *_subscriptionRetrieveRequest;
    CKDPTokenRegistrationRequest *_tokenRegistrationRequest;
    CKDPTokenUnregistrationRequest *_tokenUnregistrationRequest;
    CKDPUnlikeRequest *_unlikeRequest;
    CKDPUserAvailableQuotaRequest *_userAvailableQuotaRequest;
    CKDPUserPrivacySettingsBatchLookupRequest *_userPrivacySettingsBatchLookupRequest;
    CKDPUserPrivacySettingsResetRequest *_userPrivacySettingsResetRequest;
    CKDPUserPrivacySettingsRetrieveRequest *_userPrivacySettingsRetrieveRequest;
    CKDPUserPrivacySettingsUpdateRequest *_userPrivacySettingsUpdateRequest;
    CKDPUserQueryRequest *_userQueryRequest;
    CKDPUserRetrieveRequest *_userRetrieveRequest;
    CKDPWebAuthTokenRetrieveRequest *_webAuthTokenRetrieveRequest;
    CKDPZoneDeleteRequest *_zoneDeleteRequest;
    CKDPZoneRetrieveChangesRequest *_zoneRetrieveChangesRequest;
    CKDPZoneRetrieveRequest *_zoneRetrieveRequest;
    CKDPZoneSaveRequest *_zoneSaveRequest;
}

@property(assign,retain) CKDPAssetUploadTokenRetrieveRequest * assetUploadTokenRetrieveRequest;
@property(assign,retain) CKDPDeleteCommentRequest * deleteCommentRequest;
@property(assign,retain) CKDPDeleteContainerRequest * deleteContainerRequest;
@property(assign,retain) CKDPGetCommentRequest * getCommentRequest;
@property(assign,retain) CKDPGetCommentsRequest * getCommentsRequest;
@property(assign,retain) CKDPGetLikesRequest * getLikesRequest;
@property(assign,readonly) bool hasAssetUploadTokenRetrieveRequest;
@property(assign,readonly) bool hasDeleteCommentRequest;
@property(assign,readonly) bool hasDeleteContainerRequest;
@property(assign,readonly) bool hasGetCommentRequest;
@property(assign,readonly) bool hasGetCommentsRequest;
@property(assign,readonly) bool hasGetLikesRequest;
@property(assign,readonly) bool hasHeader;
@property(assign,readonly) bool hasLikeRequest;
@property(assign,readonly) bool hasMescalCertificateRequest;
@property(assign,readonly) bool hasMescalSessionInfoRequest;
@property(assign,readonly) bool hasMescalSignatureRequest;
@property(assign,readonly) bool hasNotificationMarkReadRequest;
@property(assign,readonly) bool hasNotificationSyncRequest;
@property(assign,readonly) bool hasPkiRegisterRequest;
@property(assign,readonly) bool hasPkiRetrieveRequest;
@property(assign,readonly) bool hasPostCommentRequest;
@property(assign,readonly) bool hasPromoteContainerSchemaRequest;
@property(assign,readonly) bool hasPulseRequest;
@property(assign,readonly) bool hasQueryRetrieveRequest;
@property(assign,readonly) bool hasRecordDeleteRequest;
@property(assign,readonly) bool hasRecordRetrieveChangesRequest;
@property(assign,readonly) bool hasRecordRetrieveRequest;
@property(assign,readonly) bool hasRecordRetrieveVersionsRequest;
@property(assign,readonly) bool hasRecordSaveRequest;
@property(assign,readonly) bool hasRequest;
@property(assign,readonly) bool hasResetContainerRequest;
@property(assign,readonly) bool hasSetBadgeCountRequest;
@property(assign,readonly) bool hasShareAcceptRequest;
@property(assign,readonly) bool hasShareDeleteRequest;
@property(assign,readonly) bool hasShareRetrieveRequest;
@property(assign,readonly) bool hasShareSaveRequest;
@property(assign,readonly) bool hasShareTokenDeleteRequest;
@property(assign,readonly) bool hasShareTokenRetrieveRequest;
@property(assign,readonly) bool hasShareTokenSaveRequest;
@property(assign,readonly) bool hasSubscriptionCreateRequest;
@property(assign,readonly) bool hasSubscriptionDeleteRequest;
@property(assign,readonly) bool hasSubscriptionRetrieveRequest;
@property(assign,readonly) bool hasTokenRegistrationRequest;
@property(assign,readonly) bool hasTokenUnregistrationRequest;
@property(assign,readonly) bool hasUnlikeRequest;
@property(assign,readonly) bool hasUserAvailableQuotaRequest;
@property(assign,readonly) bool hasUserPrivacySettingsBatchLookupRequest;
@property(assign,readonly) bool hasUserPrivacySettingsResetRequest;
@property(assign,readonly) bool hasUserPrivacySettingsRetrieveRequest;
@property(assign,readonly) bool hasUserPrivacySettingsUpdateRequest;
@property(assign,readonly) bool hasUserQueryRequest;
@property(assign,readonly) bool hasUserRetrieveRequest;
@property(assign,readonly) bool hasWebAuthTokenRetrieveRequest;
@property(assign,readonly) bool hasZoneDeleteRequest;
@property(assign,readonly) bool hasZoneRetrieveChangesRequest;
@property(assign,readonly) bool hasZoneRetrieveRequest;
@property(assign,readonly) bool hasZoneSaveRequest;
@property(assign,retain) CKDPRequestOperationHeader * header;
@property(assign,retain) CKDPLikeRequest * likeRequest;
@property(assign,retain) CKDPMescalCertificateRequest * mescalCertificateRequest;
@property(assign,retain) CKDPMescalSessionInfoRequest * mescalSessionInfoRequest;
@property(assign,retain) CKDPMescalSignatureRequest * mescalSignatureRequest;
@property(assign,retain) CKDPNotificationMarkReadRequest * notificationMarkReadRequest;
@property(assign,retain) CKDPNotificationSyncRequest * notificationSyncRequest;
@property(assign,retain) CKDPPkiRegisterRequest * pkiRegisterRequest;
@property(assign,retain) CKDPPkiRetrieveRequest * pkiRetrieveRequest;
@property(assign,retain) CKDPPostCommentRequest * postCommentRequest;
@property(assign,retain) CKDPPromoteContainerSchemaRequest * promoteContainerSchemaRequest;
@property(assign,retain) CKDPPulseRequest * pulseRequest;
@property(assign,retain) CKDPQueryRetrieveRequest * queryRetrieveRequest;
@property(assign,retain) CKDPRecordDeleteRequest * recordDeleteRequest;
@property(assign,retain) CKDPRecordRetrieveChangesRequest * recordRetrieveChangesRequest;
@property(assign,retain) CKDPRecordRetrieveRequest * recordRetrieveRequest;
@property(assign,retain) CKDPRecordRetrieveVersionsRequest * recordRetrieveVersionsRequest;
@property(assign,retain) CKDPRecordSaveRequest * recordSaveRequest;
@property(assign,retain) CKDPOperation * request;
@property(assign,retain) CKDPResetContainerRequest * resetContainerRequest;
@property(assign,retain) CKDPSetBadgeCountRequest * setBadgeCountRequest;
@property(assign,retain) CKDPShareAcceptRequest * shareAcceptRequest;
@property(assign,retain) CKDPShareDeleteRequest * shareDeleteRequest;
@property(assign,retain) CKDPShareRetrieveRequest * shareRetrieveRequest;
@property(assign,retain) CKDPShareSaveRequest * shareSaveRequest;
@property(assign,retain) CKDPShareTokenDeleteRequest * shareTokenDeleteRequest;
@property(assign,retain) CKDPShareTokenRetrieveRequest * shareTokenRetrieveRequest;
@property(assign,retain) CKDPShareTokenSaveRequest * shareTokenSaveRequest;
@property(assign,retain) CKDPSubscriptionCreateRequest * subscriptionCreateRequest;
@property(assign,retain) CKDPSubscriptionDeleteRequest * subscriptionDeleteRequest;
@property(assign,retain) CKDPSubscriptionRetrieveRequest * subscriptionRetrieveRequest;
@property(assign,retain) CKDPTokenRegistrationRequest * tokenRegistrationRequest;
@property(assign,retain) CKDPTokenUnregistrationRequest * tokenUnregistrationRequest;
@property(assign,retain) CKDPUnlikeRequest * unlikeRequest;
@property(assign,retain) CKDPUserAvailableQuotaRequest * userAvailableQuotaRequest;
@property(assign,retain) CKDPUserPrivacySettingsBatchLookupRequest * userPrivacySettingsBatchLookupRequest;
@property(assign,retain) CKDPUserPrivacySettingsResetRequest * userPrivacySettingsResetRequest;
@property(assign,retain) CKDPUserPrivacySettingsRetrieveRequest * userPrivacySettingsRetrieveRequest;
@property(assign,retain) CKDPUserPrivacySettingsUpdateRequest * userPrivacySettingsUpdateRequest;
@property(assign,retain) CKDPUserQueryRequest * userQueryRequest;
@property(assign,retain) CKDPUserRetrieveRequest * userRetrieveRequest;
@property(assign,retain) CKDPWebAuthTokenRetrieveRequest * webAuthTokenRetrieveRequest;
@property(assign,retain) CKDPZoneDeleteRequest * zoneDeleteRequest;
@property(assign,retain) CKDPZoneRetrieveChangesRequest * zoneRetrieveChangesRequest;
@property(assign,retain) CKDPZoneRetrieveRequest * zoneRetrieveRequest;
@property(assign,retain) CKDPZoneSaveRequest * zoneSaveRequest;

- (void).cxx_destruct;
- (id)assetUploadTokenRetrieveRequest;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deleteCommentRequest;
- (id)deleteContainerRequest;
- (id)description;
- (id)dictionaryRepresentation;
- (id)getCommentRequest;
- (id)getCommentsRequest;
- (id)getLikesRequest;
- (bool)hasAssetUploadTokenRetrieveRequest;
- (bool)hasDeleteCommentRequest;
- (bool)hasDeleteContainerRequest;
- (bool)hasGetCommentRequest;
- (bool)hasGetCommentsRequest;
- (bool)hasGetLikesRequest;
- (bool)hasHeader;
- (bool)hasLikeRequest;
- (bool)hasMescalCertificateRequest;
- (bool)hasMescalSessionInfoRequest;
- (bool)hasMescalSignatureRequest;
- (bool)hasNotificationMarkReadRequest;
- (bool)hasNotificationSyncRequest;
- (bool)hasPkiRegisterRequest;
- (bool)hasPkiRetrieveRequest;
- (bool)hasPostCommentRequest;
- (bool)hasPromoteContainerSchemaRequest;
- (bool)hasPulseRequest;
- (bool)hasQueryRetrieveRequest;
- (bool)hasRecordDeleteRequest;
- (bool)hasRecordRetrieveChangesRequest;
- (bool)hasRecordRetrieveRequest;
- (bool)hasRecordRetrieveVersionsRequest;
- (bool)hasRecordSaveRequest;
- (bool)hasRequest;
- (bool)hasResetContainerRequest;
- (bool)hasSetBadgeCountRequest;
- (bool)hasShareAcceptRequest;
- (bool)hasShareDeleteRequest;
- (bool)hasShareRetrieveRequest;
- (bool)hasShareSaveRequest;
- (bool)hasShareTokenDeleteRequest;
- (bool)hasShareTokenRetrieveRequest;
- (bool)hasShareTokenSaveRequest;
- (bool)hasSubscriptionCreateRequest;
- (bool)hasSubscriptionDeleteRequest;
- (bool)hasSubscriptionRetrieveRequest;
- (bool)hasTokenRegistrationRequest;
- (bool)hasTokenUnregistrationRequest;
- (bool)hasUnlikeRequest;
- (bool)hasUserAvailableQuotaRequest;
- (bool)hasUserPrivacySettingsBatchLookupRequest;
- (bool)hasUserPrivacySettingsResetRequest;
- (bool)hasUserPrivacySettingsRetrieveRequest;
- (bool)hasUserPrivacySettingsUpdateRequest;
- (bool)hasUserQueryRequest;
- (bool)hasUserRetrieveRequest;
- (bool)hasWebAuthTokenRetrieveRequest;
- (bool)hasZoneDeleteRequest;
- (bool)hasZoneRetrieveChangesRequest;
- (bool)hasZoneRetrieveRequest;
- (bool)hasZoneSaveRequest;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (id)likeRequest;
- (void)mergeFrom:(id)arg1;
- (id)mescalCertificateRequest;
- (id)mescalSessionInfoRequest;
- (id)mescalSignatureRequest;
- (id)notificationMarkReadRequest;
- (id)notificationSyncRequest;
- (id)pkiRegisterRequest;
- (id)pkiRetrieveRequest;
- (id)postCommentRequest;
- (id)promoteContainerSchemaRequest;
- (id)pulseRequest;
- (id)queryRetrieveRequest;
- (bool)readFrom:(id)arg1;
- (id)recordDeleteRequest;
- (id)recordRetrieveChangesRequest;
- (id)recordRetrieveRequest;
- (id)recordRetrieveVersionsRequest;
- (id)recordSaveRequest;
- (id)request;
- (id)resetContainerRequest;
- (void)setAssetUploadTokenRetrieveRequest:(id)arg1;
- (id)setBadgeCountRequest;
- (void)setDeleteCommentRequest:(id)arg1;
- (void)setDeleteContainerRequest:(id)arg1;
- (void)setGetCommentRequest:(id)arg1;
- (void)setGetCommentsRequest:(id)arg1;
- (void)setGetLikesRequest:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setLikeRequest:(id)arg1;
- (void)setMescalCertificateRequest:(id)arg1;
- (void)setMescalSessionInfoRequest:(id)arg1;
- (void)setMescalSignatureRequest:(id)arg1;
- (void)setNotificationMarkReadRequest:(id)arg1;
- (void)setNotificationSyncRequest:(id)arg1;
- (void)setPkiRegisterRequest:(id)arg1;
- (void)setPkiRetrieveRequest:(id)arg1;
- (void)setPostCommentRequest:(id)arg1;
- (void)setPromoteContainerSchemaRequest:(id)arg1;
- (void)setPulseRequest:(id)arg1;
- (void)setQueryRetrieveRequest:(id)arg1;
- (void)setRecordDeleteRequest:(id)arg1;
- (void)setRecordRetrieveChangesRequest:(id)arg1;
- (void)setRecordRetrieveRequest:(id)arg1;
- (void)setRecordRetrieveVersionsRequest:(id)arg1;
- (void)setRecordSaveRequest:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResetContainerRequest:(id)arg1;
- (void)setSetBadgeCountRequest:(id)arg1;
- (void)setShareAcceptRequest:(id)arg1;
- (void)setShareDeleteRequest:(id)arg1;
- (void)setShareRetrieveRequest:(id)arg1;
- (void)setShareSaveRequest:(id)arg1;
- (void)setShareTokenDeleteRequest:(id)arg1;
- (void)setShareTokenRetrieveRequest:(id)arg1;
- (void)setShareTokenSaveRequest:(id)arg1;
- (void)setSubscriptionCreateRequest:(id)arg1;
- (void)setSubscriptionDeleteRequest:(id)arg1;
- (void)setSubscriptionRetrieveRequest:(id)arg1;
- (void)setTokenRegistrationRequest:(id)arg1;
- (void)setTokenUnregistrationRequest:(id)arg1;
- (void)setUnlikeRequest:(id)arg1;
- (void)setUserAvailableQuotaRequest:(id)arg1;
- (void)setUserPrivacySettingsBatchLookupRequest:(id)arg1;
- (void)setUserPrivacySettingsResetRequest:(id)arg1;
- (void)setUserPrivacySettingsRetrieveRequest:(id)arg1;
- (void)setUserPrivacySettingsUpdateRequest:(id)arg1;
- (void)setUserQueryRequest:(id)arg1;
- (void)setUserRetrieveRequest:(id)arg1;
- (void)setWebAuthTokenRetrieveRequest:(id)arg1;
- (void)setZoneDeleteRequest:(id)arg1;
- (void)setZoneRetrieveChangesRequest:(id)arg1;
- (void)setZoneRetrieveRequest:(id)arg1;
- (void)setZoneSaveRequest:(id)arg1;
- (id)shareAcceptRequest;
- (id)shareDeleteRequest;
- (id)shareRetrieveRequest;
- (id)shareSaveRequest;
- (id)shareTokenDeleteRequest;
- (id)shareTokenRetrieveRequest;
- (id)shareTokenSaveRequest;
- (id)subscriptionCreateRequest;
- (id)subscriptionDeleteRequest;
- (id)subscriptionRetrieveRequest;
- (id)tokenRegistrationRequest;
- (id)tokenUnregistrationRequest;
- (id)unlikeRequest;
- (id)userAvailableQuotaRequest;
- (id)userPrivacySettingsBatchLookupRequest;
- (id)userPrivacySettingsResetRequest;
- (id)userPrivacySettingsRetrieveRequest;
- (id)userPrivacySettingsUpdateRequest;
- (id)userQueryRequest;
- (id)userRetrieveRequest;
- (id)webAuthTokenRetrieveRequest;
- (void)writeTo:(id)arg1;
- (id)zoneDeleteRequest;
- (id)zoneRetrieveChangesRequest;
- (id)zoneRetrieveRequest;
- (id)zoneSaveRequest;

@end
