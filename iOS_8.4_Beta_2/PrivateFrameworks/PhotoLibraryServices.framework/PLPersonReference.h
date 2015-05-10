/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersonReference : PLManagedObject

@property(assign,retain) PLAdditionalAssetAttributes * assetAttributes;
@property(assign,retain) PLPerson * person;
@property(assign,retain) NSData * personData;
@property(assign,retain) NSString * personUUID;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 personUUID:(id)arg2 personData:(id)arg3;

- (void)willSave;

@end