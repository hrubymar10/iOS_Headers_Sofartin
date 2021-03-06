/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBFileManagerDelegate : NSObject <NSFileManagerDelegate> {
    id _shouldCopyItemAtPathToPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id shouldCopyItemAtPathToPath;
@property (readonly) Class superclass;

- (bool)fileManager:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
- (void)setShouldCopyItemAtPathToPath:(id)arg1;
- (id)shouldCopyItemAtPathToPath;

@end
