/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BiometricKitXPCClient : NSObject {
    NSXPCConnection *_connection;
    bool _connectionInitialized;
    <BiometricKitDelegateXpcProtocol> *_delegate;
    id _interruptionHandler;
}

@property (nonatomic) <BiometricKitDelegateXpcProtocol> *delegate;
@property (nonatomic, copy) id interruptionHandler;

- (void)cancel;
- (void)connect;
- (void)dealloc;
- (id)delegate;
- (int)detectFingerWithOptions:(id)arg1;
- (int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(bool*)arg3 withDetails:(id*)arg4;
- (int)enroll:(int)arg1 withAuthToken:(id)arg2;
- (int)enrollContinue;
- (void)enrollResult:(id)arg1;
- (long long)getBioLockoutState;
- (id)getCalibrationDataInfo;
- (int)getCountersignedStoreToken:(id*)arg1;
- (id)getIdentityFromUUID:(id)arg1;
- (id)getLogs:(bool)arg1;
- (long long)getMaxIdentityCount:(int)arg1;
- (id)getNodeTopologyForIdentity:(id)arg1;
- (id)getProtectedConfiguration;
- (long long)getProvisioningState;
- (long long)getSensorCalibrationStatus;
- (id)getSerialisedTemplateForIdentity:(id)arg1;
- (void)homeButtonPressed;
- (id)identities:(id)arg1;
- (id)init;
- (void)initializeConnection;
- (id)interruptionHandler;
- (int)match:(id)arg1 withOptions:(id)arg2;
- (int)matchIdentities:(id)arg1;
- (void)matchResult:(id)arg1 withDictionary:(id)arg2;
- (void)notifyAppIsBackground:(bool)arg1;
- (void)notifyAppIsInactive:(bool)arg1;
- (id)pullAlignmentData;
- (id)pullCalibrationData;
- (id)pullCaptureBuffer;
- (id)pullDebugImageData:(bool)arg1 rotated:(bool)arg2 imageWidth:(unsigned int*)arg3 imageHeight:(unsigned int*)arg4;
- (id)pullMatchPolicyInfoData;
- (id)pullMatchTopologyData;
- (int)registerDSID:(unsigned long long)arg1 withAuthToken:(id)arg2;
- (void)registerDelegate:(bool)arg1;
- (int)registerStoreToken:(id)arg1;
- (int)removeIdentity:(id)arg1;
- (int)resetAppleConnectCounter;
- (int)resetEngine;
- (void)setDebugImages:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterruptionHandler:(id)arg1;
- (int)setProtectedConfiguration:(id)arg1 withAuthToken:(id)arg2;
- (int)setUserDSID:(unsigned long long)arg1 withAuthToken:(id)arg2;
- (void)statusMessage:(unsigned int)arg1;
- (void)taskResumeStatus:(int)arg1;
- (void)templateUpdate:(id)arg1 withDictionary:(id)arg2;
- (void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2;
- (int)updateIdentity:(id)arg1;

@end
