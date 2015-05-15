/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICollectionViewItemKey : NSObject <NSCopying> {
    NSString *_identifier;
    NSIndexPath *_indexPath;
    bool _isClone;
    unsigned long long _type;
}

@property(assign,retain) NSString * identifier;
@property(assign,retain) NSIndexPath * indexPath;
@property(assign,readonly) bool isClone;
@property(assign,readonly) unsigned long long type;

+ (id)collectionItemKeyForCellWithIndexPath:(id)arg1;
+ (id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForLayoutAttributes:(id)arg1;
+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2;

- (id)copyAsClone:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)indexPath;
- (id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3 clone:(bool)arg4;
- (bool)isClone;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end