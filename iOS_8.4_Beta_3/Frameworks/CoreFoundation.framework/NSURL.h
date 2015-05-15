/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSURL : NSObject <NSCopying, NSSecureCoding, PQLValuable, PQLValuable, QLPreviewItem, TSUDownloadItem> {
    NSURL *_baseURL;
    void *_clients;
    void *_reserved;
    NSString *_urlString;
}

@property(assign,copy) NSURL * URLByDeletingLastPathComponent;
@property(assign,copy) NSURL * URLByDeletingPathExtension;
@property(assign,copy) NSURL * URLByResolvingSymlinksInPath;
@property(assign,copy) NSURL * URLByStandardizingPath;
@property(assign,copy) NSString * absoluteString;
@property(assign,copy) NSURL * absoluteURL;
@property(assign,readonly) int addressBookUID;
@property(assign,copy) NSURL * baseURL;
@property(assign,readonly) NSString * br_lastEditorDeviceName;
@property(assign,readonly) NSString * br_lastEditorName;
@property(assign,readonly) int callService;
@property(assign,readonly) bool ckShouldShowComposeUI;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * description;
@property(assign,readonly) NSString * downloadTaskDescription;
@property(assign,readonly) NSURL * downloadURL;
@property(assign,copy) NSURL * filePathURL;
@property(assign,readonly) const char * fileSystemRepresentation;
@property(getter=isFileURL,assign,readonly) bool fileURL;
@property(assign,readonly) bool forceAssist;
@property(assign,copy) NSString * fragment;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * host;
@property(assign,readonly) bool isBasebandLogURL;
@property(assign,readonly) bool isEmergencyCallURL;
@property(assign,readonly) bool isEmergencyURL;
@property(assign,readonly) bool isPlayImmediatelyURL;
@property(assign,readonly) bool isShowNowPlayingURL;
@property(assign,readonly) bool isVoicemailURL;
@property(assign,copy) NSString * lastPathComponent;
@property(assign,readonly) NSString * mpUniversalTrackIDBaseID;
@property(assign,readonly) long long mpUniversalTrackIDType;
@property(assign,readonly) bool needsDownload;
@property(assign,readonly) NSString * originatingUIIdentifier;
@property(assign,readonly) NSString * overrideName;
@property(assign,copy) NSString * parameterString;
@property(assign,copy) NSString * password;
@property(assign,copy) NSString * path;
@property(assign,copy) NSArray * pathComponents;
@property(assign,copy) NSString * pathExtension;
@property(assign,readonly) NSString * phoneNumber;
@property(assign,copy) NSNumber * port;
@property(assign,readonly) NSString * previewItemTitle;
@property(assign,readonly) NSURL * previewItemURL;
@property(assign,copy) NSString * query;
@property(assign,copy) NSString * relativePath;
@property(assign,copy) NSString * relativeString;
@property(assign,copy) NSString * resourceSpecifier;
@property(assign,copy) NSString * scheme;
@property(assign,readonly) NSString * shortcutIdentifier;
@property(assign,copy) NSURL * standardizedURL;
@property(assign,readonly) Class superclass;
@property(assign,readonly) Class superclass;
@property(assign,readonly) Class superclass;
@property(assign,readonly) Class superclass;
@property(assign,readonly) bool suppressAssist;
@property(assign,readonly) long long totalBytesExpectedToBeDownloaded;
@property(assign,readonly) NSString * tsu_UTI;
@property(assign,readonly) NSString * tsu_UTI;
@property(assign,copy) NSString * user;
@property(assign,readonly) bool wasAlreadyAssisted;

+ (id)CDVDefaultPortForScheme:(id)arg1;
+ (id)CDVURLWithScheme:(id)arg1 host:(id)arg2 port:(id)arg3 path:(id)arg4;
+ (id)CDVURLWithScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6;
+ (id)SLTwitterAccessTokenURL;
+ (id)SLTwitterAccountGenerateURL;
+ (id)SLTwitterAccountSettingsURL;
+ (id)SLTwitterCleanupPushDestinationsURL;
+ (id)SLTwitterDirectMessageURL;
+ (id)SLTwitterFriendsURL;
+ (id)SLTwitterFriendshipsURL;
+ (id)SLTwitterImageLimitsURL;
+ (id)SLTwitterNearbyPlacesURL;
+ (id)SLTwitterRequestTokenURL;
+ (id)SLTwitterRetweetURLForTweetID:(id)arg1;
+ (id)SLTwitterTCoLengthURL;
+ (id)SLTwitterUpdateMultiPartStatusURL;
+ (id)SLTwitterUpdateStatusURL;
+ (id)SLTwitterUserInfoURL;
+ (id)SLTwitterUsersLookupURL;
+ (id)SLTwitterVerifyCredentialsURL;
+ (id)URLByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)URLByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(bool*)arg4 error:(id*)arg5;
+ (id)URLForFacebookGraphAPIWithDomain:(id)arg1 path:(id)arg2;
+ (id)URLForFacebookGraphAPIWithPath:(id)arg1;
+ (id)URLForFacebookPageAtPath:(id)arg1;
+ (id)URLForFacebookRESTMethod:(id)arg1;
+ (id)URLWithAddressBookUID:(id)arg1;
+ (id)URLWithDirtyString:(id)arg1;
+ (id)URLWithDirtyString:(id)arg1;
+ (id)URLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3;
+ (id)URLWithPackagePart:(id)arg1;
+ (id)URLWithScheme:(id)arg1;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 user:(id)arg3 port:(int)arg4 uri:(id)arg5;
+ (id)URLWithString:(id)arg1;
+ (id)URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(bool)arg3 suppressAssist:(bool)arg4 wasAssisted:(bool)arg5;
+ (id)URLWithTelephoneNumber:(id)arg1 promptUser:(bool)arg2;
+ (id)_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)__unurl;
+ (id)_af_URLWithMessageIdentifier:(id)arg1;
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(bool)arg3;
+ (bool)_isBetaSwitchEnabledForKey:(struct __CFString { }*)arg1;
+ (id)_web_URLWithComponents:(struct { id x1; id x2; id x3; id x4; long long x5; id x6; id x7; id x8; })arg1;
+ (id)_web_URLWithData:(id)arg1;
+ (id)_web_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithDataAsString:(id)arg1;
+ (id)_web_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithUserTypedString:(id)arg1;
+ (id)_web_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithWTFString:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
+ (id)_web_URLWithWTFString:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1 relativeToURL:(id)arg2;
+ (id)_web_uniqueWebDataURL;
+ (id)ab_URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;
+ (id)ab_faceTimeURLWithDestinationID:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)bookmarkDataWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (void)br_documentURLFromBookmarkableString:(id)arg1 completion:(id)arg2;
+ (id)brc_fileReferenceURLWithVolumeID:(id)arg1 fileID:(id)arg2 andName:(id)arg3 isDirectory:(bool)arg4;
+ (id)brc_fileURLWithFileDescriptor:(int)arg1;
+ (bool)canHandleDownloadTask:(id)arg1;
+ (id)ckURLForChatIdentifier:(id)arg1 entryBody:(id)arg2;
+ (id)ckURLForResource:(id)arg1 withExtension:(id)arg2;
+ (int)classicPortForScheme:(id)arg1;
+ (int)classicPortForScheme:(id)arg1;
+ (id)copyDictionaryForQueryString:(id)arg1 unescapedValues:(bool)arg2;
+ (id)davCompatibleFilenameForFilename:(id)arg1;
+ (id)davCompatibleFilenameForFilename:(id)arg1;
+ (void)downloadManager:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
+ (bool)downloadManager:(id)arg1 task:(id)arg2 didFinishDownloadingToURL:(id)arg3 error:(id*)arg4;
+ (id)escapedStringForString:(id)arg1;
+ (id)faceTimeAcceptURLWithURL:(id)arg1;
+ (id)faceTimeAcceptURLWithURL:(id)arg1 conferenceID:(id)arg2;
+ (id)faceTimeLaunchForIncomingCallURL;
+ (id)faceTimePromptURLWithURL:(id)arg1;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(bool)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(bool)arg3;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(bool)arg3 suppressAssist:(bool)arg4 wasAssisted:(bool)arg5 audioOnly:(bool)arg6;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 audioOnly:(bool)arg3 forceAssist:(bool)arg4 suppressAssist:(bool)arg5 wasAssisted:(bool)arg6;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(bool)arg3 suppressAssist:(bool)arg4 wasAssisted:(bool)arg5;
+ (id)faceTimeURLWithURL:(id)arg1;
+ (id)filePathURLWithEscapes:(id)arg1;
+ (id)fileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(bool)arg2 relativeToURL:(id)arg3;
+ (id)fileURLWithPath:(id)arg1;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(bool)arg2;
+ (id)fileURLWithPathComponents:(id)arg1;
+ (id)iDiskSmallNameCompatibleNameForFilename:(id)arg1;
+ (id)improperlyEscapedString:(id)arg1;
+ (id)mapsURLWithAddress:(id)arg1;
+ (id)mapsURLWithQuery:(id)arg1;
+ (id)mapsURLWithSourceAddress:(id)arg1 destinationAddress:(id)arg2;
+ (id)newFromSqliteValue:(struct Mem { }*)arg1;
+ (id)newFromSqliteValue:(struct Mem { }*)arg1;
+ (id)properlyEscapedString:(id)arg1;
+ (id)queryStringForDictionary:(id)arg1 escapedValues:(bool)arg2;
+ (id)relativeURLWithEscapes:(id)arg1;
+ (id)resourceValuesForKeys:(id)arg1 fromBookmarkData:(id)arg2;
+ (id)safari_URLWithDataAsString:(id)arg1;
+ (id)safari_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)safari_URLWithUserTypedString:(id)arg1;
+ (void)safari_enumeratePossibleURLsForUserTypedString:(id)arg1 withBlock:(id)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })safari_hostAndPortRangeFromUserTypedString:(id)arg1;
+ (id)sfu_filePathURLWithEscapes:(id)arg1;
+ (id)sfu_improperlyEscapedString:(id)arg1;
+ (id)sfu_properlyEscapedString:(id)arg1;
+ (id)sfu_relativeURLWithEscapes:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)telephonyURLForTelEmergency;
+ (id)telephonyURLForTelEmergencyCall;
+ (id)telephonyURLForVoicemail;
+ (id)telephonyURLWithDestinationID:(id)arg1;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(bool)arg3 suppressAssist:(bool)arg4 wasAssisted:(bool)arg5;
+ (id)telephonyURLWithDestinationID:(id)arg1 promptUser:(bool)arg2;
+ (id)termsAndConditionsURL;
+ (id)unescapedStringForString:(id)arg1;
+ (id)uniqueURLWithRelativePart:(id)arg1;
+ (bool)writeBookmarkData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

- (id)CAMLType;
- (id)CDVFileSystemSafePath;
- (bool)CDVIsEqualToURL:(id)arg1;
- (bool)CDVIsSafeRedirectForRequestURL:(id)arg1;
- (id)CDVPassword;
- (id)CDVRawLastPathComponent;
- (id)CDVRawLastPathComponentPreservingEscapes;
- (id)CDVRawPath;
- (id)CDVServerURL;
- (id)CDVServerURLWithPath:(bool)arg1;
- (id)CDVURLByDeletingLastPathComponent;
- (id)CDVURLWithPassword:(id)arg1;
- (id)CDVURLWithPath:(id)arg1;
- (id)CDVURLWithScheme:(id)arg1 userandpass:(id)arg2 host:(id)arg3 port:(id)arg4 path:(id)arg5 parameters:(id)arg6 encodePercents:(bool)arg7;
- (id)CDVURLWithUser:(id)arg1;
- (id)CDVfixedURLByAppendingPathComponent:(id)arg1;
- (id)CNFQueryDictionary;
- (id)URLByAppendingCNFQueryDictionary:(id)arg1;
- (id)URLByAppendingPathComponent:(id)arg1;
- (id)URLByAppendingPathComponent:(id)arg1 isDirectory:(bool)arg2;
- (id)URLByAppendingPathExtension:(id)arg1;
- (id)URLByAppendingQueryParameter:(id)arg1 value:(id)arg2;
- (id)URLByDeletingLastPathComponent;
- (id)URLByDeletingPathExtension;
- (id)URLByDeletingQueryParameterWithKey:(id)arg1;
- (id)URLByRemovingLastPathComponent;
- (id)URLByRemovingLastPathComponent;
- (id)URLByResolvingSymlinksInPath;
- (id)URLBySettingQueryParameterValue:(id)arg1 forKey:(id)arg2;
- (id)URLByStandardizingPath;
- (id)URLWithNewQueryParameterDictionary:(id)arg1;
- (id)URLWithUsername:(id)arg1;
- (id)URLWithUsername:(id)arg1;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)URLWithoutPassword;
- (id)URLWithoutUsername;
- (id)URLWithoutUsername;
- (id)WF_hostnameFromSecondLevelDomain;
- (bool)WF_hostnameIsIPAddress;
- (id)WF_normalizedRelativePath;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)_URLByEscapingSpacesAndControlChars;
- (id)_af_messageIdentifierValue;
- (unsigned long long)_cfTypeID;
- (struct __CFURL { }*)_cfurl;
- (struct __CFDictionary { }*)_clientsCreatingIfNecessary:(bool)arg1;
- (void)_domain:(id*)arg1 subdomain:(id*)arg2;
- (id)_fixedUpSideFaultError:(id)arg1;
- (void)_freeClients;
- (id)_geo_portionAfterHostname;
- (bool)_gkIsSecure;
- (bool)_gkIsValidServerURL;
- (id)_gkQueryDictionary;
- (id)_gkURLByAddingQueryParameters:(id)arg1;
- (id)_gkURLByReplacingSchemeWithScheme:(id)arg1;
- (id)_hostString;
- (bool)_isAbsolute;
- (bool)_isDeallocating;
- (bool)_isGoogleMapsDomain:(id)arg1 subdomain:(id)arg2 path:(id)arg3 queryKeysAndValues:(id)arg4;
- (bool)_isPhoneNumberID:(id)arg1;
- (bool)_isPhoneNumberID:(id)arg1;
- (bool)_isSafeDirectoryForDownloads:(int)arg1;
- (bool)_isSafeFileForBackgroundUpload:(int)arg1;
- (id)_mobilePhonePathParameters;
- (id)_mobilePhoneQueryParameters;
- (long long)_mpUTITypeFromMRUTIType:(unsigned int)arg1;
- (void)_performWithPhysicalURL:(id)arg1;
- (id)_phoneNumberConvertNumbersToLatin:(bool)arg1;
- (long long)_promiseExtensionConsume;
- (void)_promiseExtensionRelease:(long long)arg1;
- (id)_relativeURLPath;
- (id)_safari_URLByReplacingComponent:(long long)arg1 includingSeparators:(bool)arg2 withString:(id)arg3;
- (id)_safari_URLByReplacingComponent:(long long)arg1 withString:(id)arg2;
- (bool)_tryRetain;
- (id)_valueFromFaultDictionary:(id)arg1 forKey:(id)arg2;
- (bool)_webBookmarks_isHTTPFamilyURL;
- (id)_web_URLByRemovingLastPathComponent_nowarn;
- (id)_web_URLByRemovingUserAndPath_nowarn;
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;
- (id)_web_URLByRemovingUserInfo;
- (id)_web_URLByTruncatingOneCharacterBeforeComponent:(long long)arg1;
- (const char *)_web_URLCString;
- (struct { id x1; id x2; id x3; id x4; long long x5; id x6; id x7; id x8; })_web_URLComponents;
- (id)_web_URLWithLowercasedScheme;
- (id)_web_dataForURLComponentType:(long long)arg1;
- (id)_web_hostData;
- (id)_web_hostString;
- (bool)_web_isEmpty;
- (bool)_web_isJavaScriptURL;
- (id)_web_originalData;
- (id)_web_originalDataAsString;
- (struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; })_web_originalDataAsWTFString;
- (id)_web_schemeData;
- (id)_web_schemeSeparatorWithoutColon;
- (id)_web_scriptIfJavaScriptURL;
- (id)_web_suggestedFilenameWithMIMEType:(id)arg1;
- (id)_web_userVisibleString;
- (id)_webkit_URLByRemovingFragment;
- (id)_webkit_URLByRemovingResourceSpecifier;
- (id)_webkit_URLFromURLOrSchemelessFileURL;
- (id)_webkit_canonicalize;
- (bool)_webkit_isFTPDirectoryURL;
- (bool)_webkit_isFileURL;
- (bool)_webkit_isJavaScriptURL;
- (id)_webkit_scriptIfJavaScriptURL;
- (bool)_webkit_shouldLoadAsEmptyDocument;
- (id)_webkit_suggestedFilenameWithMIMEType:(id)arg1;
- (id)absoluteString;
- (id)absoluteURL;
- (bool)absoluteURLisEqual:(id)arg1;
- (int)addressBookUID;
- (bool)afui_hasMapItemScheme;
- (id)appleStoreURL;
- (id)baseURL;
- (id)betaStoreURL;
- (id)bookmarkDataWithAliasRecord:(id)arg1;
- (id)bookmarkDataWithOptions:(unsigned long long)arg1 includingResourceValuesForKeys:(id)arg2 relativeToURL:(id)arg3 error:(id*)arg4;
- (id)br_URLByResolvingExternalDocumentReferenceWithError:(id*)arg1;
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 error:(id*)arg3;
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 lastEditorUserName:(id)arg3 error:(id*)arg4;
- (void)br_bookmarkableStringWithEtag:(bool)arg1 completion:(id)arg2;
- (id)br_cloudDocsContainer;
- (id)br_containerID;
- (id)br_containerIDForDocumentsContainerURL;
- (void)br_containerIDsWithExternalReferencesWithHandler:(id)arg1;
- (id)br_debugDescription;
- (bool)br_getTagNames:(id*)arg1 error:(id*)arg2;
- (void)br_isConflictedWithHandler:(id)arg1;
- (bool)br_isDocumentsContainer;
- (bool)br_isExternalDocumentReference;
- (bool)br_isInCloudDocsPrivateStorages;
- (bool)br_isInMobileDocuments;
- (bool)br_isInSameVolumeAsURL:(id)arg1;
- (bool)br_isParentOfURL:(id)arg1;
- (bool)br_isParentOfURL:(id)arg1 strictly:(bool)arg2;
- (bool)br_isStrictlyInMobileDocuments;
- (id)br_lastEditorDeviceName;
- (id)br_lastEditorName;
- (id)br_pathRelativeToMobileDocuments;
- (void)br_preCacheBookmarkData:(id)arg1 versionEtag:(id)arg2;
- (bool)br_setTagNames:(id)arg1 error:(id*)arg2;
- (id)brc_applicationBundleID;
- (id)brc_applicationContainerID;
- (id)brc_attributesValues:(id)arg1 container:(id)arg2 lookup:(id)arg3;
- (id)brc_fileReferenceFileID;
- (bool)brc_fileReferenceParseIntoVolumeID:(id*)arg1 fileID:(id*)arg2 andRelativePath:(id*)arg3;
- (id)brc_fileReferenceRelativePath;
- (id)brc_fileReferenceVolumeID;
- (id)brc_issueSandboxExtensionOfClass:(const char *)arg1 error:(id*)arg2;
- (id)brc_localizedApplicationName;
- (id)cacheKeyRepresentation;
- (int)callService;
- (bool)checkPromisedItemIsReachableAndReturnError:(id*)arg1;
- (bool)checkResourceIsReachableAndReturnError:(id*)arg1;
- (void)chmod:(unsigned short)arg1;
- (bool)ckShouldShowComposeUI;
- (id)ckWillNotLaunchComposeUIURL;
- (bool)compareToLocalString:(id)arg1;
- (bool)compareToLocalURL:(id)arg1;
- (bool)conformsToOverridePatternWithKey:(id)arg1;
- (id)copyQueryStringDictionaryWithUnescapedValues:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)downloadTaskDescription;
- (id)downloadURL;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateQueryWithBlock:(id)arg1;
- (id)faceTimeDestinationAccount;
- (id)facebookURL;
- (id)filePathURL;
- (id)fileReferenceURL;
- (const char *)fileSystemRepresentation;
- (void)finalize;
- (id)fmfURL;
- (id)fmipURL;
- (bool)forceAssist;
- (id)formattedFaceTimeDestinationAccount;
- (id)formattedPhoneNumber;
- (id)fragment;
- (id)gamecenterURL;
- (bool)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;
- (bool)getPromisedItemResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (bool)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (id)gs_URLByUpdatingPathExtensionWithPathOrURL:(id)arg1;
- (id)gs_issueExtension:(const char *)arg1 error:(id*)arg2;
- (id)gs_issueReadExtensionIfNeededForPid:(int)arg1;
- (bool)hasTelephonyScheme;
- (unsigned long long)hash;
- (id)host;
- (id)hostWithoutWWW;
- (id)iCloudFamilyURL;
- (id)iCloudSharingURL;
- (id)iCloudSharingURL_noFragment;
- (id)iTunesStoreURL;
- (id)iWorkApplicationName;
- (id)iWorkDocumentName;
- (id)init;
- (id)initByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(bool*)arg4 error:(id*)arg5;
- (id)initFileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(bool)arg2 relativeToURL:(id)arg3;
- (id)initFileURLWithPath:(id)arg1;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(bool)arg2;
- (id)initWithCDVScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 parameterString:(id)arg7 query:(id)arg8 fragment:(id)arg9;
- (id)initWithCPLArchiver:(id)arg1;
- (id)initWithCalDirtyString:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDirtyString:(id)arg1;
- (id)initWithPackagePart:(id)arg1;
- (id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 relativeToURL:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isAMOSCommittedIdentifier;
- (bool)isAMOSIdentifier;
- (bool)isAccountURL;
- (bool)isAppStoreURL;
- (bool)isAssetURL;
- (bool)isBasebandLogURL;
- (bool)isEmergencyCallURL;
- (bool)isEmergencyURL;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDAVURL:(id)arg1;
- (bool)isEqualToURL:(id)arg1;
- (bool)isEqualToURL:(id)arg1;
- (bool)isEqualToURLIgnoringScheme:(id)arg1;
- (bool)isFaceTimeAcceptURL;
- (bool)isFaceTimeAudioAcceptURL;
- (bool)isFaceTimeAudioPromptURL;
- (bool)isFaceTimeAudioURL;
- (bool)isFaceTimePromptURL;
- (bool)isFaceTimeURL;
- (bool)isFileReferenceURL;
- (bool)isFileURL;
- (bool)isGoogleMapsURL;
- (bool)isHTTPOrHTTPSURL;
- (bool)isInternalToPackage;
- (bool)isInternalUIKitURL;
- (bool)isJavaScriptURL;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isLaunchForIncomingCallURL;
- (bool)isMailToURL;
- (bool)isMemberOfClass:(Class)arg1;
- (bool)isMusicStoreURL;
- (bool)isOnRemoteFileSystem;
- (bool)isPlayImmediatelyURL;
- (bool)isRelative;
- (bool)isSafeExternalURL;
- (bool)isShowNowPlayingURL;
- (bool)isSpringboardHandledURL;
- (bool)isStoreServicesURL;
- (bool)isStoreServicesURL;
- (bool)isUpgradeURL;
- (bool)isValidFaceTimeURL;
- (bool)isVoicemailURL;
- (bool)isWebSafeTelephoneURL;
- (bool)isWebcalURL;
- (bool)isiWorkURL;
- (id)itmsURL;
- (id)keynoteLiveURL;
- (id)lastPathComponent;
- (id)lastPathComponent;
- (id)lastPathComponent;
- (id)leastInfoStringRepresentationRelativeToParentURL:(id)arg1;
- (bool)loadingInUIWebViewWillLaunchAnotherApp;
- (id)mapsURL;
- (id)mf_firstPartNumber;
- (bool)mf_isValidAttachmentURL;
- (id)mf_lastPartNumber;
- (id)mf_partNumbers;
- (unsigned int)mf_rowID;
- (id)mpUniversalTrackIDBaseID;
- (long long)mpUniversalTrackIDType;
- (id)numberQualifiedForAddressBook;
- (id)originatingUIIdentifier;
- (id)overrideName;
- (id)parameterString;
- (id)password;
- (id)path;
- (id)pathComponents;
- (id)pathDecodedAndWithoutTrailingSlashRemoved;
- (id)pathExtension;
- (id)pathWithoutDecodingAndRemovingTrailingSlash;
- (id)pathWithoutTrailingRemovingSlash;
- (id)pathWithoutTrailingRemovingSlash;
- (id)pathWithoutTrailingRemovingSlash;
- (id)phobosURL;
- (id)phoneNumber;
- (id)photosURL;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (id)port;
- (id)previewItemURL;
- (id)promisedItemResourceValuesForKeys:(id)arg1 error:(id*)arg2;
- (id)query;
- (id)queryParameters;
- (id)queryParameters;
- (id)queryParameters;
- (id)radarWebURL;
- (id)rawPath;
- (id)rc_URLByAppendingStringToLastComponentBasename:(id)arg1;
- (id)rc_URLByFixingUpPersistentMediaRecordingsDirectory;
- (id)rc_URLByReplacingPathExtensionWithExtension:(id)arg1;
- (id)relativePath;
- (id)relativeString;
- (oneway void)release;
- (void)removeAllCachedResourceValues;
- (void)removeCachedResourceValueForKey:(id)arg1;
- (id)resourceSpecifier;
- (id)resourceValuesForKeys:(id)arg1 error:(id*)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (id)safari_URLByDeletingPort;
- (id)safari_URLByReplacingHostWithString:(id)arg1;
- (id)safari_URLByReplacingQueryWithString:(id)arg1;
- (id)safari_URLByReplacingSchemeWithString:(id)arg1;
- (id)safari_canonicalURL;
- (bool)safari_hasCharactersBeyondPath;
- (bool)safari_hasScheme:(id)arg1;
- (bool)safari_isDataURL;
- (bool)safari_isHTTPFamilyURL;
- (id)safari_originalDataAsString;
- (id)safari_userVisibleHost;
- (id)safari_userVisibleHostWithoutWWWSubdomain;
- (id)safari_userVisibleString;
- (id)sanitizedURL;
- (id)scheme;
- (id)schemeSwizzledURL;
- (id)searchResultDomain;
- (id)searchResultIdentifier;
- (id)serverURL;
- (id)serverURL;
- (bool)setResourceValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)setResourceValues:(id)arg1 error:(id*)arg2;
- (void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2;
- (bool)sfu_isRelative;
- (id)shortcutIdentifier;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (id)standardizedURL;
- (bool)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;
- (long long)storeURLType;
- (bool)suppressAssist;
- (id)telephonyParameterDictionary;
- (long long)totalBytesExpectedToBeDownloaded;
- (id)tsp_URLExceptPrivate;
- (id)tsp_embeddedUTI;
- (bool)tsp_getIsUbiquitousValue:(bool*)arg1 error:(id*)arg2;
- (bool)tsp_isAssetsLibraryURL;
- (bool)tsp_isIWorkAVAssetURL;
- (bool)tsp_isOnNonHFSVolume;
- (bool)tsp_isUbiquitous;
- (id)tsp_pathExceptPrivate;
- (id)tsu_UTI;
- (id)tsu_UTI;
- (bool)tsu_conformsToUTI:(id)arg1;
- (bool)tsu_conformsToUTI:(id)arg1;
- (id)tsu_documentIdentifier;
- (unsigned long long)tsu_fileSize;
- (bool)tsu_isFileSizeTooLargeForSharing;
- (bool)tsu_isShared;
- (bool)tsu_isSharedWithMe;
- (void)tsu_performSecurityScopedResourceAccessAsynchronouslyUsingBlock:(id)arg1;
- (void)tsu_performSecurityScopedResourceAccessUsingBlock:(id)arg1;
- (id)twitterURL;
- (bool)ui_hasReadSandboxExtended;
- (bool)ui_hasSandboxExtendedForClass:(const char *)arg1;
- (id)ui_issueReadSandboxExtensionWithError:(id*)arg1;
- (id)ui_issueReadWriteSandboxExtensionWithError:(id*)arg1;
- (id)ui_issueSandboxExtensionOfClass:(const char *)arg1 error:(id*)arg2;
- (id)unquotedPassword;
- (id)unquotedPassword;
- (id)uri;
- (id)uri;
- (id)urlByRemovingUsername;
- (id)urlByReplacingSchemeWithScheme:(id)arg1;
- (id)urlBySettingHost:(id)arg1;
- (id)urlBySettingHost:(id)arg1 keepUsername:(bool)arg2;
- (id)urlBySettingPath:(id)arg1;
- (id)urlBySettingPath:(id)arg1 keepUsername:(bool)arg2;
- (id)urlBySettingPort:(id)arg1;
- (id)urlBySettingPort:(id)arg1 keepUsername:(bool)arg2;
- (id)urlBySettingQueryStringDictionary:(id)arg1;
- (id)urlBySettingScheme:(id)arg1;
- (id)urlBySettingScheme:(id)arg1 keepUsername:(bool)arg2;
- (id)urlBySettingUsername:(id)arg1;
- (id)user;
- (bool)wasAlreadyAssisted;
- (id)webSafeTelephoneURL;
- (id)youTubeURL;

@end
