/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKDiscoveryBonjourResolveContainer : NSObject {
    GKDiscoveryBonjour *_context;
    id _resolveCompletionHandler;
    NSMutableArray *_serviceRefList;
}

@property (nonatomic) GKDiscoveryBonjour *context;
@property (nonatomic, copy) id resolveCompletionHandler;
@property (nonatomic, retain) NSMutableArray *serviceRefList;

- (id)context;
- (void)dealloc;
- (id)init;
- (id)resolveCompletionHandler;
- (id)serviceRefList;
- (void)setContext:(id)arg1;
- (void)setResolveCompletionHandler:(id)arg1;
- (void)setServiceRefList:(id)arg1;

@end
