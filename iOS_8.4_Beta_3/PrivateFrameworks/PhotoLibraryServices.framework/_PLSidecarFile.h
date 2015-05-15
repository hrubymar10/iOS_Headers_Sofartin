/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface _PLSidecarFile : PLManagedObject

@property(assign,retain) PLManagedAsset * asset;
@property(assign,retain) NSDate * captureDate;
@property(assign,retain) NSNumber * compressedSize;
@property(assign,readwrite) int compressedSizeValue;
@property(assign,retain) NSString * filename;
@property(assign,retain) NSNumber * index;
@property(assign,readwrite) short indexValue;
@property(assign,retain) NSDate * modificationDate;
@property(assign,retain) NSString * originalFilename;
@property(assign,retain) NSString * uniformTypeIdentifier;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (int)compressedSizeValue;
- (short)indexValue;
- (int)primitiveCompressedSizeValue;
- (short)primitiveIndexValue;
- (void)setCompressedSizeValue:(int)arg1;
- (void)setIndexValue:(short)arg1;
- (void)setPrimitiveCompressedSizeValue:(int)arg1;
- (void)setPrimitiveIndexValue:(short)arg1;

@end