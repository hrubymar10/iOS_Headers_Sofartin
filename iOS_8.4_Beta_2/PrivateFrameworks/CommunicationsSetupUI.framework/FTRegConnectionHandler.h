/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface FTRegConnectionHandler : NSObject {
    unsigned int _caps;
    struct { 
        unsigned int listeningForNotifications : 1; 
    } _handlerFlags;
    NSString *_listenerID;
    NSString *_logName;
    NSString *_name;
    long long _serviceType;
}

@property(setter=_setListenerID:,assign,copy) NSString * _listenerID;
@property(assign,retain) NSString * _logName;
@property(assign,retain) NSString * _serviceName;
@property(assign,readwrite) unsigned int caps;
@property(assign,copy) NSString * name;
@property(assign,readwrite) long long serviceType;

- (void)_disconnectFromDaemon;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (bool)_isServiceSupported;
- (id)_listenerID;
- (id)_logName;
- (id)_serviceName;
- (void)_setListenerID:(id)arg1;
- (void)_startListeningForNotifications;
- (void)_stopListeningForNotifications;
- (unsigned int)caps;
- (bool)connectToDaemon;
- (bool)connectToDaemon:(bool)arg1;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1 name:(id)arg2;
- (id)initWithServiceType:(long long)arg1 name:(id)arg2 capabilities:(unsigned int)arg3;
- (bool)isConnectedToDaemon;
- (id)name;
- (long long)serviceType;
- (void)setCaps:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setServiceType:(long long)arg1;
- (void)set_logName:(id)arg1;

@end
