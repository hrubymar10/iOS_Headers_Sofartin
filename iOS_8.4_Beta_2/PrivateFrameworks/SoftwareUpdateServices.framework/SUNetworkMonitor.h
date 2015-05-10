/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUNetworkMonitor : NSObject {
    int _currentNetworkType;
    NSHashTable *_observers;
    struct __SCNetworkReachability { } *_reachability;
    bool _roaming;
}

+ (bool)holdsWiFiAssertion;
+ (void)setHoldsWiFiAssertion:(bool)arg1;
+ (id)sharedInstance;

- (void)_carrierBundleChanged;
- (void)_initNetworkObservation;
- (bool)_isCurrentlyRoaming;
- (int)_networkTypeFromCurrentCellularData;
- (int)_networkTypeFromFlags:(unsigned int)arg1;
- (void)_operatorBundleChanged;
- (void)addObserver:(id)arg1;
- (int)currentNetworkType;
- (void)dealloc;
- (id)init;
- (bool)isCellularDataRoamingEnabled;
- (bool)isCellularRoaming;
- (bool)isNetworkTypeCellular:(int)arg1;
- (void)removeObserver:(id)arg1;
- (void)setCellularRoaming:(bool)arg1;
- (void)setCurrentNetworkType:(int)arg1;

@end
