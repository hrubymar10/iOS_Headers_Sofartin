/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudFeedCommentsEntry : PLCloudFeedEntry

@property(assign,retain) NSString * entryCloudAssetGUID;
@property(assign,retain) NSOrderedSet * entryComments;
@property(assign,retain) NSOrderedSet * entryLikeComments;
@property(assign,readonly) NSMutableOrderedSet * mutableEntryComments;
@property(assign,readonly) NSMutableOrderedSet * mutableEntryLikeComments;

+ (id)entityName;

- (id)mutableEntryComments;
- (id)mutableEntryLikeComments;
- (bool)shouldBeRemovedFromPhotoLibrary:(id)arg1;

@end
