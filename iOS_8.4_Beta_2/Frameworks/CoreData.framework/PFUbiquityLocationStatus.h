/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityLocationStatus : NSObject {
    NSError *_error;
    unsigned long long _hash;
    bool _isDeleted;
    bool _isDownloaded;
    bool _isDownloading;
    bool _isExported;
    bool _isFailed;
    bool _isImported;
    bool _isLive;
    bool _isScheduled;
    bool _isUploaded;
    bool _isUploading;
    PFUbiquityLocation *_location;
    long long _numBytes;
    long long _numNotifications;
}

@property(assign,readonly) NSError * error;
@property(assign,readonly) bool isDeleted;
@property(assign,readonly) bool isDownloaded;
@property(assign,readwrite) bool isDownloading;
@property(assign,readonly) bool isExported;
@property(assign,readonly) bool isFailed;
@property(assign,readonly) bool isImported;
@property(assign,readonly) bool isLive;
@property(assign,readonly) bool isScheduled;
@property(assign,readonly) bool isUploaded;
@property(assign,readonly) bool isUploading;
@property(assign,readonly) PFUbiquityLocation * location;
@property(assign,readonly) long long numBytes;
@property(assign,readonly) long long numNotifications;

- (void)checkFileURLState;
- (void)dealloc;
- (id)description;
- (void)encounteredError:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)init;
- (id)initWithLocation:(id)arg1;
- (bool)isDeleted;
- (bool)isDownloaded;
- (bool)isDownloading;
- (bool)isExported;
- (bool)isFailed;
- (bool)isImported;
- (bool)isLive;
- (bool)isScheduled;
- (bool)isUploaded;
- (bool)isUploading;
- (id)location;
- (void)logImportWasCancelled;
- (void)logWasExported;
- (void)logWasImported;
- (void)logWasScheduled;
- (long long)numBytes;
- (long long)numNotifications;
- (void)recoveredFromError;
- (void)setIsDownloading:(bool)arg1;
- (void)statusDidChange;

@end