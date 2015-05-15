/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAppDelegateBase : TSABaseApplicationDelegate {
    bool _cachedBidiIsSupported;
}

@property(assign,readonly) NSArray * powerPointDocumentTypes;

- (bool)URLIsValidForImportedHyperlink:(id)arg1;
- (id)appChartPropertyOverrides;
- (void)applicationDidFinishLaunching;
- (id)applicationName;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale { }*)arg1;
- (id)createCompatibilityDelegate;
- (id)defaultHyperlinkURL;
- (Class)documentRootClass;
- (id)documentTypeDisplayName;
- (id)importableDocumentTypes;
- (id)init;
- (id)invalidURLSchemes;
- (double)maximumAspectRatioForPreviewImage;
- (double)mimimumAspectRatioForPreviewImage;
- (id)nativeDocumentType;
- (id)nativeSFFDocumentType;
- (void)p_inputMethodsChanged:(id)arg1;
- (id)powerPointDocumentTypes;
- (id)previewImageNameForDocumentType:(id)arg1;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (void)registerAllowedElementKinds;
- (void)registerClassTypeMappings;
- (id)stringForCloseDocument;
- (id)stringForCollaboratorConflict;
- (id)stringForCollaboratorConflictDetails;
- (id)stringForCollaboratorConflictWithKeepDetails;
- (id)stringForCollaboratorsBlockedWhileOffline;
- (id)stringForDocumentUpdated;
- (id)stringForDocumentUpdatedByOwner;
- (id)stringForDocumentUpdatedTitle;
- (id)stringForRemoteVersionRestorationAlertMessage;
- (id)stringForRemoteVersionRestorationWithUnsavedChangesAlertMessage;
- (id)stringForUpdatingDocument;
- (bool)supportsRTL;
- (bool)supportsShrinkTextToFit;
- (id)tangierEditingFormatDocumentType;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (id)templateTypeDisplayName;

@end