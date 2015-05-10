/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLItemChange : CPLRecordChange <NSCopying, NSSecureCoding> {
    NSArray *_containerRelations;
}

@property(assign,copy) NSArray * containerRelations;

+ (bool)cplShouldIgnorePropertyForCoding:(id)arg1;

- (void).cxx_destruct;
- (id)containerRelationChangesComparedToRelationEnumerator:(id)arg1 error:(id*)arg2;
- (id)containerRelations;
- (id)init;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (void)setContainerRelations:(id)arg1;

@end
