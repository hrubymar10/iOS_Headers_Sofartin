/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetExportSessionInternal : NSObject {
    NSString *actualOutputFileType;
    AVAsset *asset;
    AVAudioMix *audioMix;
    NSString *audioTimePitchAlgorithm;
    bool canUseFastFrameRateConversion;
    NSObject<OS_dispatch_semaphore> *canUseFastFrameRateConversionSemaphore;
    NSArray *compatibleFileTypes;
    long long compatibleFileTypesDispatchOncePredicate;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    NSURL *directoryForTemporaryFiles;
    NSError *error;
    void *figVideoCompositor;
    AVAssetTrack *firstVideoTrack;
    id handler;
    long long maxFileSize;
    NSArray *metadata;
    AVMetadataItemFilter *metadataItemFilter;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } minVideoFrameDuration;
    bool optimizeForNetworkUse;
    bool outputFileCreatedByRemaker;
    NSString *outputFileType;
    NSURL *outputURL;
    NSString *preset;
    NSString *preset16x9;
    float progress;
    NSObject<OS_dispatch_queue> *readWriteQueue;
    struct OpaqueFigRemaker { } *remaker;
    NSObject<OS_dispatch_queue> *remakerNotificationSerializationQueue;
    long long status;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    } timeRange;
    bool useMultiPass;
    AVVideoComposition *videoComposition;
    NSString *videoFrameRateConversionAlgorithm;
    bool waitingForFastFrameRateResponse;
    AVWeakReference *weakReference;
}

@end
