/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADUnderline : NSObject {
    OADFill *mFill;
    unsigned int mIsUsingTextFill;
    unsigned int mIsUsingTextStroke;
    OADStroke *mStroke;
    unsigned char mType;
}

- (void)dealloc;
- (id)fill;
- (unsigned long long)hash;
- (id)initWithStroke:(id)arg1 fill:(id)arg2 type:(int)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isUsingTextFill;
- (bool)isUsingTextStroke;
- (void)setFill:(id)arg1;
- (void)setIsUsingTextFill:(bool)arg1;
- (void)setIsUsingTextStroke:(bool)arg1;
- (void)setStroke:(id)arg1;
- (void)setType:(int)arg1;
- (id)stroke;
- (int)type;

@end