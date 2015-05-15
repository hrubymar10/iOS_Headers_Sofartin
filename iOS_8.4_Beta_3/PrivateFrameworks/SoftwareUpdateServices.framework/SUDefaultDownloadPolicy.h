/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUDefaultDownloadPolicy : NSObject <SUDownloadPolicy> {
    SUCarrierDownloadPolicyProperties *_carrierPolicy;
    bool _cellularCapable;
    SUDescriptor *_descriptor;
    SUNetworkMonitor *_networkMonitor;
}

@property(assign,retain) SUCarrierDownloadPolicyProperties * carrierPolicy;
@property(getter=isCellularCapable,assign,readwrite) bool cellularCapable;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) SUDescriptor * descriptor;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) SUNetworkMonitor * networkMonitor;
@property(assign,readonly) Class superclass;

- (bool)_isCellularCapable;
- (bool)_isDownloadableForNetworkType:(int)arg1 error:(long long*)arg2 cellularFeesApply:(bool*)arg3 powerRequired:(bool*)arg4;
- (id)_stringForBool:(bool)arg1;
- (id)carrierPolicy;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (bool)hasEnoughDiskSpace;
- (id)initWithDescriptor:(id)arg1;
- (bool)isCellularCapable;
- (bool)isDownloadAllowableForCellular;
- (bool)isDownloadAllowableForCellular2G;
- (bool)isDownloadAllowableForCellularRoaming;
- (bool)isDownloadAllowableForWiFi;
- (bool)isDownloadFreeForCellular;
- (bool)isDownloadable;
- (bool)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(bool*)arg2;
- (bool)isDownloadableForCurrentNetworkConditions:(long long*)arg1 cellularFeesApply:(bool*)arg2 powerRequired:(bool*)arg3;
- (bool)isPowerRequired;
- (bool)isSamePolicy:(id)arg1;
- (id)networkMonitor;
- (void)setCarrierPolicy:(id)arg1;
- (void)setCellularCapable:(bool)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setNetworkMonitor:(id)arg1;

@end
