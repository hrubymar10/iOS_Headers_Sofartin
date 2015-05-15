/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoadingDataRequest : NSObject {
    AVAssetResourceLoadingDataRequestInternal *_dataRequest;
}

@property (nonatomic, readonly) long long currentOffset;
@property (nonatomic, readonly) long long requestedLength;
@property (nonatomic, readonly) long long requestedOffset;

- (id)_loadingRequest;
- (long long)currentOffset;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithLoadingRequest:(id)arg1 requestedOffset:(long long)arg2 requestedLength:(long long)arg3 canSupplyIncrementalDataImmediately:(bool)arg4;
- (long long)requestedLength;
- (long long)requestedOffset;
- (void)respondWithData:(id)arg1;

@end
