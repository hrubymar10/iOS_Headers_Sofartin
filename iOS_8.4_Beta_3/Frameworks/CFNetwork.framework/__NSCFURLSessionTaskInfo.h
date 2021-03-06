/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionTaskInfo : NSObject <NSSecureCoding> {
    unsigned long long _AVAssetDownloadToken;
    NSURL *_URL;
    NSDictionary *__backgroundTaskTimingData;
    long long _basePriority;
    NSString *_bundleID;
    long long _countOfBytesExpectedToReceive;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    double _creationTime;
    NSURLRequest *_currentRequest;
    NSURL *_destinationURL;
    bool _disablesRetry;
    bool _discretionary;
    NSURL *_downloadFileURL;
    NSError *_error;
    bool _establishedConnection;
    bool _expectingResumeCallback;
    NSURL *_fileURL;
    bool _hasStarted;
    unsigned long long _identifier;
    unsigned long long _lowThroughputTimerRetryCount;
    NSDictionary *_options;
    NSURLRequest *_originalRequest;
    NSURLResponse *_response;
    unsigned long long _retryCount;
    NSString *_sessionID;
    bool _shouldCancelOnDisconnect;
    long long _state;
    unsigned long long _suspendCount;
    NSString *_taskDescription;
    unsigned long long _taskKind;
    NSString *_uniqueIdentifier;
}

@property unsigned long long AVAssetDownloadToken;
@property (copy) NSURL *URL;
@property (copy) NSDictionary *_backgroundTaskTimingData;
@property long long basePriority;
@property (retain) NSString *bundleID;
@property long long countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property double creationTime;
@property (copy) NSURLRequest *currentRequest;
@property (copy) NSURL *destinationURL;
@property bool disablesRetry;
@property (getter=isDiscretionary) bool discretionary;
@property (retain) NSURL *downloadFileURL;
@property (copy) NSError *error;
@property bool establishedConnection;
@property bool expectingResumeCallback;
@property (retain) NSURL *fileURL;
@property bool hasStarted;
@property unsigned long long identifier;
@property unsigned long long lowThroughputTimerRetryCount;
@property (retain) NSDictionary *options;
@property (copy) NSURLRequest *originalRequest;
@property (copy) NSURLResponse *response;
@property unsigned long long retryCount;
@property (retain) NSString *sessionID;
@property bool shouldCancelOnDisconnect;
@property long long state;
@property unsigned long long suspendCount;
@property (copy) NSString *taskDescription;
@property unsigned long long taskKind;
@property (retain) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (unsigned long long)AVAssetDownloadToken;
- (id)URL;
- (id)_backgroundTaskTimingData;
- (long long)basePriority;
- (id)bundleID;
- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesReceived;
- (long long)countOfBytesSent;
- (double)creationTime;
- (id)currentRequest;
- (void)dealloc;
- (id)destinationURL;
- (bool)disablesRetry;
- (id)downloadFileURL;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (bool)establishedConnection;
- (bool)expectingResumeCallback;
- (id)fileURL;
- (bool)hasStarted;
- (unsigned long long)identifier;
- (id)initWithAVAssetDownloadURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 taskIdentifier:(unsigned long long)arg4 bundleID:(id)arg5 sessionID:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithDownloadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithUploadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (bool)isDiscretionary;
- (unsigned long long)lowThroughputTimerRetryCount;
- (id)options;
- (id)originalRequest;
- (id)response;
- (unsigned long long)retryCount;
- (id)sessionID;
- (void)setAVAssetDownloadToken:(unsigned long long)arg1;
- (void)setBasePriority:(long long)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setCreationTime:(double)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setDestinationURL:(id)arg1;
- (void)setDisablesRetry:(bool)arg1;
- (void)setDiscretionary:(bool)arg1;
- (void)setDownloadFileURL:(id)arg1;
- (void)setError:(id)arg1;
- (void)setEstablishedConnection:(bool)arg1;
- (void)setExpectingResumeCallback:(bool)arg1;
- (void)setFileURL:(id)arg1;
- (void)setHasStarted:(bool)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setLowThroughputTimerRetryCount:(unsigned long long)arg1;
- (void)setOptions:(id)arg1;
- (void)setOriginalRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setSessionID:(id)arg1;
- (void)setShouldCancelOnDisconnect:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setSuspendCount:(unsigned long long)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)setTaskKind:(unsigned long long)arg1;
- (void)setURL:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)set_backgroundTaskTimingData:(id)arg1;
- (bool)shouldCancelOnDisconnect;
- (long long)state;
- (unsigned long long)suspendCount;
- (id)taskDescription;
- (unsigned long long)taskKind;
- (id)uniqueIdentifier;

@end
