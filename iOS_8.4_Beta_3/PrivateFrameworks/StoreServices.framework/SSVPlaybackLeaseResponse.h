/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackLeaseResponse : SSVPlaybackResponse

@property (nonatomic, readonly) double leaseDuration;
@property (nonatomic, readonly, copy) NSData *leaseInfoData;
@property (getter=isOfflineSlotAvailable, nonatomic, readonly) bool offlineSlotAvailable;
@property (nonatomic, readonly, copy) NSData *subscriptionKeyBagData;

- (bool)isOfflineSlotAvailable;
- (id)itemForItemIdentifier:(id)arg1;
- (double)leaseDuration;
- (id)leaseInfoData;
- (id)subscriptionKeyBagData;

@end
