/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleSemanticTag : NSObject <NSCopying> {
    unsigned long long mIndex;
    int mType;
}

@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) bool isReferenceLine;
@property (nonatomic, readonly) bool isSeries;
@property (nonatomic, readonly) int type;

+ (id)styleSemanticTagWithType:(int)arg1 index:(unsigned long long)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)initWithType:(int)arg1 index:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isReferenceLine;
- (bool)isSeries;
- (Class)styleClass;
- (int)type;

@end
