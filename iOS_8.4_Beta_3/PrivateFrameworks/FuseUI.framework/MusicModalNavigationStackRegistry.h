/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicModalNavigationStackRegistry : NSObject <MusicClientContextConsuming, SKUINavigationControllerDelegate, SKUINavigationDocumentDelegate, UINavigationControllerDelegate> {
    MusicClientContext *_clientContext;
    NSMapTable *_navigationControllerToItemMap;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedModalNavigationStackRegistry;

- (void).cxx_destruct;
- (id)_appContext;
- (id)clientContext;
- (void)dealloc;
- (id)init;
- (id)jsNavigationDocumentForNavigationController:(id)arg1 inContext:(id)arg2;
- (id)jsNavigationDocumentForNavigationDocumentController:(id)arg1 inContext:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationDocumentController:(id)arg1 requestsAccessToAppContextUsingBlock:(id)arg2;
- (void)registerModalNavigationStackForNavigationController:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)unregisterModalNavigationStackForNavigationController:(id)arg1;

@end
