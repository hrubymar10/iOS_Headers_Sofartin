/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSupportSaveOperationState : NSObject {
    NSURL *_URL;
    bool _didWriteSupportBundleSuccessfuly;
    NSUUID *_documentUUID;
    NSUUID *_originalDocumentUUID;
    NSURL *_originalURL;
    NSUUID *_originalVersionUUID;
    TSUSafeSaveAssistant *_safeSaveAssistant;
    bool _shouldLeavePendingEndSave;
    long long _updateType;
}

@property(assign,copy) NSURL * URL;
@property(assign,readwrite) bool didWriteSupportBundleSuccessfuly;
@property(assign,copy) NSUUID * documentUUID;
@property(assign,readonly) NSUUID * originalDocumentUUID;
@property(assign,readonly) NSURL * originalURL;
@property(assign,readonly) NSUUID * originalVersionUUID;
@property(assign,readonly) bool preserveDocumentUUID;
@property(assign,retain) TSUSafeSaveAssistant * safeSaveAssistant;
@property(assign,readwrite) bool shouldLeavePendingEndSave;
@property(assign,readonly) bool shouldUpdate;
@property(assign,readonly) long long updateType;

- (void).cxx_destruct;
- (id)URL;
- (bool)didWriteSupportBundleSuccessfuly;
- (id)documentUUID;
- (id)init;
- (id)initWithOriginalDocumentUUID:(id)arg1 originalVersionUUID:(id)arg2 originalURL:(id)arg3 updateType:(long long)arg4;
- (id)originalDocumentUUID;
- (id)originalURL;
- (id)originalVersionUUID;
- (bool)preserveDocumentUUID;
- (id)safeSaveAssistant;
- (void)setDidWriteSupportBundleSuccessfuly:(bool)arg1;
- (void)setDocumentUUID:(id)arg1;
- (void)setSafeSaveAssistant:(id)arg1;
- (void)setShouldLeavePendingEndSave:(bool)arg1;
- (void)setURL:(id)arg1;
- (bool)shouldLeavePendingEndSave;
- (bool)shouldUpdate;
- (long long)updateType;

@end
