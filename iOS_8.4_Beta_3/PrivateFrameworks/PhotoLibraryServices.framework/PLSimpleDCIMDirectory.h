/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSimpleDCIMDirectory : NSObject {
    NSMutableIndexSet *_availableFileNameNumbers;
    NSURL *_baseURL;
    NSURL *_currentSubDirectory;
    unsigned long long _currentSubDirectoryNumber;
    unsigned long long _directoryLimit;
    NSFileManager *_fileManager;
    bool _hasLoadedUserInfo;
    NSObject<OS_dispatch_queue> *_isolation;
    bool _representsCameraRoll;
    NSString *_subDirSuffix;
    NSString *_userInfoPath;
}

@property (nonatomic, readonly, retain) NSURL *currentSubDirectory;
@property (readonly, retain) NSURL *directoryURL;
@property bool representsCameraRoll;

+ (id)cameraRollPlistName;
+ (id)cloudPlistName;
+ (id)migrateOldPlistToNewPlist:(id)arg1;

- (bool)_ensureDirectoryExists:(id)arg1;
- (void)_loadUserInfoLastDirectoryNumber:(id*)arg1 lastFileNumber:(id*)arg2;
- (void)_saveUserInfo;
- (id)availableFileNameNumbersInDirNumber:(unsigned long long)arg1;
- (id)currentSubDirectory;
- (void)dealloc;
- (id)directoryURL;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })fileNameNumberRangeForDirNumber:(unsigned long long)arg1;
- (id)init;
- (id)initWithDirectoryURL:(id)arg1 subDirectorySuffix:(id)arg2 perDirectoryLimit:(unsigned long long)arg3 userInfoPath:(id)arg4;
- (id)nextAvailableFileURLWithExtension:(id)arg1;
- (bool)representsCameraRoll;
- (void)reset;
- (void)setRepresentsCameraRoll:(bool)arg1;
- (id)subDirURLForNumber:(unsigned long long)arg1 create:(bool)arg2 didCreate:(bool*)arg3;

@end
