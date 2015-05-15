/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedObject : NSManagedObject

@property (nonatomic, readonly) bool isRegisteredWithUserInterfaceContext;
@property (nonatomic, readonly, retain) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly, copy) NSString *pl_shortDescription;
@property (nonatomic, readonly, copy) NSString *shortObjectIDURI;

- (bool)isRegisteredWithUserInterfaceContext;
- (id)photoLibrary;
- (id)pl_shortDescription;
- (id)shortObjectIDURI;
- (void)willSave;

@end
