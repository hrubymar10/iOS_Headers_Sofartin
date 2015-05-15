/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface ISUDownload : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownload *_download;
}

@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) long long bytesDownloaded;
@property (nonatomic, readonly) long long bytesTotal;
@property (getter=isContentRestricted, nonatomic, readonly) bool contentRestricted;
@property (nonatomic, readonly) double estimatedSecondsRemaining;
@property (nonatomic, retain) SSDownload *managedDownload;
@property (getter=isPausable, nonatomic, readonly) bool pausable;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) NSString *phaseIdentifier;
@property (getter=isPurchase, nonatomic, readonly) bool purchase;
@property (nonatomic, readonly) NSString *statusDescription;
@property (nonatomic, readonly) NSNumber *storeItemIdentifier;
@property (nonatomic, readonly) NSNumber *storePreorderIdentifier;
@property (nonatomic, readonly) NSURL *thumbnailImageURL;
@property (nonatomic, readonly) NSString *title;

+ (id)downloadExternalProperties;
+ (id)downloadProperties;
+ (void)initialize;

- (id)artistName;
- (long long)bytesDownloaded;
- (long long)bytesTotal;
- (id)copyLocalizedStatusString;
- (void)dealloc;
- (double)estimatedSecondsRemaining;
- (id)initWithManagedDownload:(id)arg1;
- (bool)isContentRestricted;
- (bool)isPausable;
- (bool)isPurchase;
- (id)managedDownload;
- (double)percentComplete;
- (id)phaseIdentifier;
- (void)resetPreorderState;
- (void)setManagedDownload:(id)arg1;
- (id)statusDescription;
- (id)storeItemIdentifier;
- (id)storePreorderIdentifier;
- (id)thumbnailImageURL;
- (id)title;

@end
