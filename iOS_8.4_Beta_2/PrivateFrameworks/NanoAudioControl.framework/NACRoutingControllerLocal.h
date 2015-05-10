/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACRoutingControllerLocal : NSObject <MPAVRoutingControllerDelegate, NACRoutingController> {
    NSString *_audioCategory;
    <NACRoutingControllerDelegate> *_delegate;
    MPAVRoutingController *_routingController;
}

@property(assign,readonly) NSArray * availableAudioRoutes;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <NACRoutingControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NACAudioRoute * pickedRoute;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)availableAudioRoutes;
- (void)beginObservingRoutes;
- (id)delegate;
- (void)endObservingRoutes;
- (id)initWithAudioCategory:(id)arg1;
- (void)pickAudioRoute:(id)arg1;
- (id)pickedRoute;
- (void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;

@end