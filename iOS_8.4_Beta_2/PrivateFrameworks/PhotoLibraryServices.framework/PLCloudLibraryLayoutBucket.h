/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudLibraryLayoutBucket : NSObject {
    unsigned short _category;
    PLCloudResourceRange *_mediumsRange;
    PLCloudResourceRange *_originalsRange;
    PLPhotoLibrary *_photoLibrary;
    PLCloudResourceRange *_thumbnailsRange;
    unsigned long long budgetShare;
    id predicate;
}

@property(assign,readwrite) unsigned long long budgetShare;
@property(assign,readonly) unsigned short category;
@property(assign,readonly) NSString * name;
@property(assign,copy) id predicate;
@property(assign,readonly) unsigned long long totalAssetsCount;

- (unsigned long long)budgetShare;
- (unsigned short)category;
- (id)cloudResourceFromAsset:(id)arg1 forQualityClass:(unsigned short)arg2;
- (void)dealloc;
- (unsigned long long)excludeAsset:(id)arg1;
- (unsigned long long)includeAsset:(id)arg1;
- (id)initWithIdentifier:(unsigned short)arg1 photoLibrary:(id)arg2;
- (id)name;
- (id)predicate;
- (void)setBudgetShare:(unsigned long long)arg1;
- (void)setPredicate:(id)arg1;
- (unsigned long long)totalAssetsCount;
- (unsigned long long)totalSizeForQualityClass:(unsigned short)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
