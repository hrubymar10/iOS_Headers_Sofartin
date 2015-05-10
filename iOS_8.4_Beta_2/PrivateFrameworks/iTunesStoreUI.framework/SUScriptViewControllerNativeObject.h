/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptViewControllerNativeObject : SUScriptNativeObject <SKUIPassbookLoaderDelegate> {
    SKUIPassbookLoader *_passbookLoader;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)_loadPassbookPassWithURL:(id)arg1;
- (void)_parentViewControllerChangeNotification:(id)arg1;
- (void)_reloadVisibility;
- (void)dealloc;
- (void)destroyNativeObject;
- (void)passbookLoaderDidFinish:(id)arg1;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (void)setScriptObject:(id)arg1;
- (void)setupNativeObject;

@end
