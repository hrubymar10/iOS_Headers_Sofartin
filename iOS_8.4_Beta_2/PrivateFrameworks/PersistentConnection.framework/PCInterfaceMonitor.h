/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCInterfaceMonitor : NSObject <PCInterfaceMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {
    NSMapTable *_delegateMap;
    <PCInterfaceUsabilityMonitorProtocol> *_internal;
}

@property(assign,readonly) struct __CFString { }* currentRAT;
@property(assign,copy) NSString * debugDescription;
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

+ (bool)isBadLinkQuality:(int)arg1;
+ (bool)isPoorLinkQuality:(int)arg1;
+ (id)sharedInstanceForIdentifier:(long long)arg1;
+ (id)stringForLinkQuality:(int)arg1;

- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (struct __CFString { }*)currentRAT;
- (void)dealloc;
- (id)initWithInterfaceIdentifier:(long long)arg1;
- (long long)interfaceIdentifier;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceRadioHotnessChanged:(id)arg1;
- (void)interfaceReachabilityChanged:(id)arg1;
- (bool)isBadLinkQuality;
- (bool)isInterfaceHistoricallyUsable;
- (bool)isInterfaceUsable;
- (bool)isInternetReachable;
- (bool)isLTEWithCDRX;
- (bool)isPoorLinkQuality;
- (bool)isRadioHot;
- (int)linkQuality;
- (id)linkQualityString;
- (void)removeDelegate:(id)arg1;
- (struct __CFString { }*)wwanInterfaceName;

@end
