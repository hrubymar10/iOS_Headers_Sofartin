/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemoteRadioController : NSObject <MPServiceRadioController, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    RadioAvailabilityController *_availabilityController;
    NSMutableSet *_connections;
    bool _hasRefreshedStations;
    NSXPCListener *_listener;
    RadioRecentStationsController *_recentStationsController;
}

@property(assign,retain) RadioAvailabilityController * availabilityController;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) RadioRecentStationsController * recentStationsController;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (bool)_isRadioAvailable;
- (void)_radioAvailabilityControllerRadioAvailableDidChangeNotification:(id)arg1;
- (void)_recentStationsControllerDidChangeStationsNotification:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (id)availabilityController;
- (void)dealloc;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)recentStationsController;
- (void)serviceRadioControllerGetRadioAvailabilityWithCompletionHandler:(id)arg1;
- (void)serviceRadioControllerGetRecentStationGroupsWithCompletionHandler:(id)arg1;
- (void)setAvailabilityController:(id)arg1;
- (void)setRecentStationsController:(id)arg1;
- (void)start;

@end