/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUTelephonyCallModel : TUCallModel {
    NSDictionary *_callManagementState;
    NSObject<OS_dispatch_semaphore> *_callManagementStateSemaphore;
}

@property(assign,retain) NSDictionary * callManagementState;
@property(assign,retain) NSObject<OS_dispatch_semaphore> * callManagementStateSemaphore;
@property(getter=isWiFiCallingCurrentlyAvailable,assign,readonly) bool wiFiCallingCurrentlyAvailable;

+ (id)sharedInstance;

- (bool)_booleanValueForKey:(struct __CFString { }*)arg1;
- (void)_invalidateCachedState;
- (void)_invalidateNetworkCanTakeCallsPrivateCache;
- (bool)_isAmbiguousCallList;
- (bool)_isAmbiguousMultiPartyCall;
- (bool)_networkCanTakeCallsPrivate;
- (bool)_valueExistsForKey:(struct __CFString { }*)arg1;
- (int)ambiguityState;
- (id)callManagementState;
- (id)callManagementStateSemaphore;
- (void)dealloc;
- (id)init;
- (bool)isAddCallAllowed;
- (bool)isEndAndAnswerAllowed;
- (bool)isHardPauseAvailable;
- (bool)isHoldAllowed;
- (bool)isHoldAndAnswerAllowed;
- (bool)isMergeable;
- (bool)isSendToVoicemailAllowed;
- (bool)isSwappable;
- (bool)isTakingCallsPrivateAllowed;
- (bool)isWiFiCallingCurrentlyAvailable;
- (void)setCallManagementState:(id)arg1;
- (void)setCallManagementStateSemaphore:(id)arg1;

@end