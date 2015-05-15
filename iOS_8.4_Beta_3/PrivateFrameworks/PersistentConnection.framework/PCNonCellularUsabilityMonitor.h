/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCNonCellularUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorDelegate, PCInterfaceUsabilityMonitorProtocol> {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    CUTWeakReference *_delegateReference;
    NSString *_demoOverrideInterface;
    NSMutableArray *_interfaceMonitors;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_monitorDelegateQueue;
    int _previousLinkQuality;
    unsigned long long _thresholdOffTransitionCount;
    bool _trackUsability;
    double _trackedTimeInterval;
}

@property(assign,readonly) struct __CFString { }* currentRAT;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <PCInterfaceUsabilityMonitorDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) long long interfaceIdentifier;
@property(assign,readonly) bool isBadLinkQuality;
@property(assign,readonly) bool isInterfaceHistoricallyUsable;
@property(assign,readonly) bool isInterfaceUsable;
@property(assign,readonly) bool isInternetReachable;
@property(assign,readonly) bool isLTEWithCDRX;
@property(assign,readonly) bool isPoorLinkQuality;
@property(assign,readonly) bool isRadioHot;
@property(assign,readonly) int linkQuality;
@property(assign,retain) NSString * linkQualityString;
@property(assign,readonly) Class superclass;
@property(assign,readonly) struct __CFString { }* wwanInterfaceName;

- (void)_addMonitorWithInterfaceName:(id)arg1;
- (void)_callDelegateOnIvarQueueWithBlock:(id)arg1;
- (void)_forwardConfigurationOnIvarQueue;
- (int)_linkQualityOnIvarQueue;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegateQueue:(id)arg1;
- (long long)interfaceIdentifier;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (bool)isBadLinkQuality;
- (bool)isInterfaceHistoricallyUsable;
- (bool)isInterfaceUsable;
- (bool)isInternetReachable;
- (bool)isPoorLinkQuality;
- (bool)isRadioHot;
- (int)linkQuality;
- (id)linkQualityString;
- (void)setDelegate:(id)arg1;
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;
- (void)setTrackUsability:(bool)arg1;
- (void)setTrackedTimeInterval:(double)arg1;

@end