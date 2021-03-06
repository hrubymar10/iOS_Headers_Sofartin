/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADLineEnd : OADProperties <NSCopying> {
    unsigned int mIsLengthOverridden;
    unsigned int mIsTypeOverridden;
    unsigned int mIsWidthOverridden;
    unsigned char mLength;
    unsigned char mType;
    unsigned char mWidth;
}

+ (id)defaultProperties;
+ (id)stringForLineEndLength:(int)arg1;
+ (id)stringForLineEndType:(int)arg1;
+ (id)stringForLineEndWidth:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (id)initWithType:(int)arg1 width:(int)arg2 length:(int)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isLengthOverridden;
- (bool)isTypeOverridden;
- (bool)isWidthOverridden;
- (int)length;
- (void)setLength:(int)arg1;
- (void)setType:(int)arg1;
- (void)setWidth:(int)arg1;
- (int)type;
- (int)width;

@end
