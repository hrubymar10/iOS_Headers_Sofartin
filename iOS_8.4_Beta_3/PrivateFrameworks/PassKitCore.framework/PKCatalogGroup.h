/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCatalogGroup : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_groupID;
    NSMutableArray *_uniqueIDs;
}

@property (nonatomic, retain) NSNumber *groupID;
@property (nonatomic, retain) NSMutableArray *uniqueIDs;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToGroup:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setUniqueIDs:(id)arg1;
- (id)uniqueIDs;

@end
