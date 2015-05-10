/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBFileManagerDelegate : NSObject <NSFileManagerDelegate> {
    id _shouldCopyItemAtPathToPath;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) id shouldCopyItemAtPathToPath;
@property(assign,readonly) Class superclass;

- (bool)fileManager:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
- (void)setShouldCopyItemAtPathToPath:(id)arg1;
- (id)shouldCopyItemAtPathToPath;

@end
