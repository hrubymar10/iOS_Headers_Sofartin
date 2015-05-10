/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPAppDelegate : TSABaseApplicationDelegate {
    bool _appDoneLaunching;
    bool _cachedBidiIsSupported;
}

@property(assign,readonly) NSArray * wordDocumentTypes;

+ (id)sharedDelegate;

- (id)appChartPropertyOverrides;
- (id)applicationName;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale { }*)arg1;
- (id)createCompatibilityDelegate;
- (void)dealloc;
- (Class)documentRootClass;
- (id)documentTypeDisplayName;
- (id)importableDocumentTypes;
- (id)init;
- (id)nativeDocumentType;
- (id)nativeSFFDocumentType;
- (void)p_inputMethodsChanged:(id)arg1;
- (void)p_localeChanged:(id)arg1;
- (id)previewImageNameForDocumentType:(id)arg1;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
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
- (bool)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
- (id)tangierEditingFormatDocumentType;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (id)templateTypeDisplayName;
- (bool)textInspectorShowsMoreSubpane;
- (id)wordDocumentTypes;

@end