/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetImageGeneratorInternal : NSObject {
    NSString *apertureMode;
    bool appliesPreferredTrackTransform;
    AVAsset *asset;
    int cancelledRequestIDThreshold;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    struct OpaqueFigAssetImageGenerator { } *generator;
    NSObject<OS_dispatch_queue> *imageRequestQueue;
    struct CGSize { 
        double width; 
        double height; 
    } maximumSize;
    int nextRequestID;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } requestedTimeToleranceAfter;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } requestedTimeToleranceBefore;
    NSMutableArray *requests;
    NSObject<OS_dispatch_queue> *requestsQueue;
    AVVideoComposition *videoComposition;
    AVWeakReference *weakReference;
}

@end
