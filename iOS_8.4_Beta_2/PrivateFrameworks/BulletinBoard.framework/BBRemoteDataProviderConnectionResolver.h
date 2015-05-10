/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBRemoteDataProviderConnectionResolver : NSObject <BBDataProviderConnectionCheckinServer, BBDataProviderStore, BBRemoteDataProviderStoreDelegate, NSXPCListenerDelegate> {
    NSMutableDictionary *_dataProviderConnectionsBySectionID;
    NSMutableDictionary *_dataProviderConnectionsByService;
    NSMutableDictionary *_dataProviderConnectionsByUniversalSectionID;
    <BBDataProviderStoreDelegate> *_delegate;
    NSXPCListener *_listener;
    int _listeningToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_registerQueue;
    NSMutableDictionary *_xpcConnectionsByService;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)resolverWithDelegate:(id)arg1;

- (void)_registerForPublicationNotification;
- (id)dataProviderForSectionID:(id)arg1;
- (id)dataProviderForUniversalSectionID:(id)arg1;
- (void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 completion:(id)arg3;
- (void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2;
- (void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)loadAllDataProviders;
- (void)performBlockOnDataProviders:(id)arg1;
- (void)registerServiceName:(id)arg1 appBundleID:(id)arg2 completion:(id)arg3;
- (void)remoteDataProviderNeedsToWakeClient:(id)arg1;
- (void)removeDataProvider:(id)arg1;
- (void)wakeService:(id)arg1 bundleID:(id)arg2;

@end