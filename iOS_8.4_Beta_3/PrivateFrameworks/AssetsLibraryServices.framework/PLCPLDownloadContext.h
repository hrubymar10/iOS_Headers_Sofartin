/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLCPLDownloadContext : NSObject {
    bool _completed;
    NSError *_error;
    double _progress;
    NSString *_resourceTypeDescription;
    NSString *_taskIdentifier;
    double _updateLastQueuedTime;
}

@property(assign,readwrite) bool completed;
@property(assign,retain) NSError * error;
@property(assign,readwrite) double progress;
@property(assign,retain) NSString * resourceTypeDescription;
@property(assign,retain) NSString * taskIdentifier;
@property(assign,readwrite) double updateLastQueuedTime;

- (bool)completed;
- (void)dealloc;
- (id)description;
- (id)error;
- (double)progress;
- (id)resourceTypeDescription;
- (void)setCompleted:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setResourceTypeDescription:(id)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (void)setUpdateLastQueuedTime:(double)arg1;
- (id)taskIdentifier;
- (double)updateLastQueuedTime;

@end
