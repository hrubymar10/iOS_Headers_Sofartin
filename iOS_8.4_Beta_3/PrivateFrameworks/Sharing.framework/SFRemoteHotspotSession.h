/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFRemoteHotspotSession : NSObject <SFCompanionXPCManagerObserver, SFRemoteHotspotClient> {
    bool _browsing;
    <SFRemoteHotspotProtocol> *_connectionProxy;
    <SFRemoteHotspotSessionDelegate> *_delegate;
}

@property(assign,readwrite) bool browsing;
@property(assign,retain) <SFRemoteHotspotProtocol> * connectionProxy;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SFRemoteHotspotSessionDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (bool)browsing;
- (id)connectionProxy;
- (id)delegate;
- (void)enableHotspotForDevice:(id)arg1 withCompletionHandler:(id)arg2;
- (void)enableRemoteHotspotForDevice:(id)arg1 withCompletionHandler:(id)arg2;
- (id)init;
- (void)setBrowsing:(bool)arg1;
- (void)setConnectionProxy:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startBrowsing;
- (void)stopBrowsing;
- (void)updatedFoundDeviceList:(id)arg1;
- (void)xpcManagerConnectionInterrupted;

@end
