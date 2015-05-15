/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSServiceContainer : NSObject {
    NSMutableSet *_listeners;
    IDSServiceMonitor *_monitor;
}

@property (nonatomic, readonly, retain) NSMutableSet *listeners;
@property (nonatomic, retain) IDSServiceMonitor *monitor;

- (bool)addListenerID:(id)arg1;
- (void)dealloc;
- (bool)hasListenerID:(id)arg1;
- (id)initWithService:(id)arg1;
- (id)listeners;
- (id)monitor;
- (bool)removeListenerID:(id)arg1;
- (void)setMonitor:(id)arg1;

@end
