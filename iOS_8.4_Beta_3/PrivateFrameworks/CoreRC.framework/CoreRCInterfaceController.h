/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreRCInterfaceController : NSObject <CoreRCInterfaceListenerDelegate> {
    <CoreRCInterfaceControllerDelegate> *_delegate;
    NSMutableArray *_interfaceListeners;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CoreRCInterfaceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CECFakeInterfaceListener *fakeInterfaceListener;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *interfaceListeners;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (bool)addBundlesFromPaths:(id)arg1 expectedClass:(Class)arg2;
- (bool)addInterfaceListenerClass:(Class)arg1;
- (void)dealloc;
- (id)delegate;
- (id)fakeInterfaceListener;
- (id)firstInterface;
- (id)init;
- (void)interfaceListener:(id)arg1 didAddInterface:(id)arg2;
- (void)interfaceListener:(id)arg1 didRemoveInterface:(id)arg2;
- (id)interfaceListeners;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)startOnQueue:(id)arg1;

@end
