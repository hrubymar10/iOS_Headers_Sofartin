/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSoftwareLibrary : NSObject {
    SSXPCConnection *_connection;
}

- (void)_getItemsWithMessage:(id)arg1 completionBlock:(id)arg2;
- (void)_sendDemotionMessage:(id)arg1 completionBlock:(id)arg2;
- (void)dealloc;
- (void)getLibraryItemForBundleIdentifiers:(id)arg1 completionBlock:(id)arg2;
- (void)getLibraryItemsForITunesStoreItemIdentifiers:(id)arg1 completionBlock:(id)arg2;
- (id)init;
- (void)refreshReceiptsWithCompletionBlock:(id)arg1;
- (void)restoreDemotedApplicationWithBundleIdentifier:(id)arg1 options:(id)arg2 completionBlock:(id)arg3;

@end