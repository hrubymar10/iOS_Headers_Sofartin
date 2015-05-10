/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKSavedGameDocument : NSObject <NSFilePresenter> {
    NSString *_deviceName;
    NSURL *_fileURL;
    NSFileVersion *_fileVersion;
    bool _hasConflict;
    bool _isConflictVersion;
    NSDate *_modificationDate;
    NSString *_name;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSString * deviceName;
@property(assign,retain) NSURL * fileURL;
@property(assign,retain) NSFileVersion * fileVersion;
@property(assign,readwrite) bool hasConflict;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool isConflictVersion;
@property(assign,retain) NSDate * modificationDate;
@property(assign,retain) NSString * name;
@property(assign,retain) NSOperationQueue * presentedItemOperationQueue;
@property(assign,copy) NSURL * presentedItemURL;
@property(assign,copy) NSURL * primaryPresentedItemURL;
@property(assign,readonly) Class superclass;

+ (id)currentDeviceName;

- (void)dealloc;
- (void)deleteAllVersionsIncludingCurrent:(bool)arg1 withCompletionHandler:(id)arg2;
- (void)deleteConflictVersion:(id)arg1 completionHandler:(id)arg2;
- (id)description;
- (id)deviceName;
- (id)fileURL;
- (id)fileVersion;
- (bool)hasConflict;
- (id)initWithFileURL:(id)arg1;
- (bool)isConflictVersion;
- (void)loadDataWithCompletionHandler:(id)arg1;
- (void)loadMetadataWithCompletionHandler:(id)arg1;
- (void)loadWrapperDataWithFilename:(id)arg1 completionHandler:(id)arg2;
- (id)metadata;
- (id)modificationDate;
- (id)name;
- (void)presentedItemDidChange;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)saveData:(id)arg1 completionHandler:(id)arg2;
- (void)setDeviceName:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFileVersion:(id)arg1;
- (void)setHasConflict:(bool)arg1;
- (void)setIsConflictVersion:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)updateConflictStateWithCompletionHandler:(id)arg1;
- (void)updateMetadata;

@end