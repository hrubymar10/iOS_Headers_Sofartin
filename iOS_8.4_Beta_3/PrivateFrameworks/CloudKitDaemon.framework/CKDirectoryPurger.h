/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDirectoryPurger : NSObject {
    NSArray *_paths;
    id _shouldRemoveFileBlock;
    id _shouldSkipFileBlock;
}

@property (nonatomic, retain) NSArray *paths;
@property (nonatomic, copy) id shouldRemoveFileBlock;
@property (nonatomic, copy) id shouldSkipFileBlock;

+ (void)purgeDirectoryAtPath:(id)arg1;

- (void).cxx_destruct;
- (id)initWithPaths:(id)arg1;
- (id)paths;
- (void)purge;
- (void)setPaths:(id)arg1;
- (void)setShouldRemoveFileBlock:(id)arg1;
- (void)setShouldSkipFileBlock:(id)arg1;
- (id)shouldRemoveFileBlock;
- (id)shouldSkipFileBlock;

@end
