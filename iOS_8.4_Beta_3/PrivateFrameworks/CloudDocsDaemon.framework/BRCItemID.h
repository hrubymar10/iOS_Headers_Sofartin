/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCItemID : NSObject <NSCopying, NSSecureCoding, PQLValuable> {
    unsigned char _kind;
    unsigned char _uuid;
}

@property (nonatomic, readonly) const char *UTF8String;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDocuments;
@property (nonatomic, readonly) bool isRoot;
@property (nonatomic, readonly) NSString *itemIDString;
@property (nonatomic, readonly) NSString *shortItemIDString;
@property (readonly) Class superclass;

+ (id)documentsItemID;
+ (void)initialize;
+ (id)newFromSqliteValue:(struct Mem { }*)arg1;
+ (id)newItemIDFromEnclosureUUID:(id)arg1;
+ (id)parseMangledItemID:(id)arg1 mangledContainerID:(id*)arg2 etag:(id*)arg3;
+ (id)rootItemID;
+ (bool)supportsSecureCoding;

- (const char *)UTF8String;
- (id)contentsRecordIDInZoneID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)derivedAliasItemIDWithOwnerName:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemID:(id)arg1;
- (id)initWithKind:(unsigned char)arg1 bytes:(const void*)arg2 length:(unsigned long long)arg3;
- (id)initWithString:(id)arg1;
- (bool)isDocuments;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItemID:(id)arg1;
- (bool)isRoot;
- (id)itemIDString;
- (id)itemUUIDString;
- (id)shortItemIDString;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (id)validatingDirectoryReferenceInZoneID:(id)arg1;

@end
