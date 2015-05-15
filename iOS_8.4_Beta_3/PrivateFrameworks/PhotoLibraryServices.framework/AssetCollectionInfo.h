/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface AssetCollectionInfo : NSObject <NSSecureCoding> {
    NSString *_GUID;
    bool _hasVideoAsset;
    NSNumber *_height;
    bool _isDeletable;
    bool _isMine;
    NSDictionary *_metaData;
    NSString *_personID;
    NSDate *_timestamp;
    NSNumber *_width;
}

@property(assign,retain) NSString * GUID;
@property(assign,readonly) bool hasVideoAsset;
@property(assign,retain) NSNumber * height;
@property(assign,readonly) bool isDeletable;
@property(assign,readonly) bool isMine;
@property(assign,retain) NSDictionary * metaData;
@property(assign,retain) NSString * personID;
@property(assign,retain) NSDate * timestamp;
@property(assign,retain) NSNumber * width;

+ (bool)supportsSecureCoding;

- (id)GUID;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasVideoAsset;
- (id)height;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDeletable;
- (bool)isMine;
- (id)metaData;
- (id)personID;
- (id)timestamp;
- (id)width;

@end
