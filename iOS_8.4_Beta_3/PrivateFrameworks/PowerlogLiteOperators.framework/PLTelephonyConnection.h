/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLTelephonyConnection : NSObject {
    PLAgent *_observerAgent;
    struct __CTServerConnection { } *connection;
    struct __CFMachPort { } *ctServerPort;
    struct __CFRunLoopSource { } *ctServerSource;
}

@property (nonatomic, readonly) struct __CTServerConnection { }*connection;
@property (retain) PLAgent *observerAgent;

+ (id)sharedTelephonyConnection;

- (void).cxx_destruct;
- (id)activeBand;
- (struct __CTServerConnection { }*)connection;
- (id)currentCallStatus;
- (void)deregisterForAllTelephonyNotifications;
- (void)enableDiagLogging;
- (id)getProperty:(id)arg1 forTrace:(id)arg2;
- (void)getRAT:(id*)arg1 preferredRAT:(id*)arg2 campedRAT:(id*)arg3;
- (id)getRemotePortNameWithLocalName:(id)arg1;
- (void)getSignalStrength:(long long*)arg1 asPercentage:(long long*)arg2 withBars:(long long*)arg3;
- (id)humanReadableCallStatus:(int)arg1;
- (id)humanReadableRATName:(struct __CFString { }*)arg1;
- (id)init;
- (void)invalidate;
- (id)observerAgent;
- (void)registerCallback:(int (*)arg1 forTelephonyNotification:(struct __CFString { }*)arg2;
- (bool)requestBasebandCoreDump:(id)arg1;
- (bool)requestBasebandStateDump:(id)arg1;
- (void)requestBasebandStateDurationReport;
- (void)setObserverAgent:(id)arg1;
- (void)teardownConnection;
- (id)wakeReason;

@end
