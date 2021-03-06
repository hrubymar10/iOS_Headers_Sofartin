/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDStyle : NSObject <EDImmutableObject, NSCopying> {
    unsigned long long mAlignmentInfoIndex;
    bool mAlignmentInfoOverridden;
    unsigned long long mBordersIndex;
    bool mBordersOverridden;
    unsigned long long mContentFormatId;
    bool mContentFormatOverridden;
    bool mDoNotModify;
    unsigned long long mFillIndex;
    bool mFillOverridden;
    unsigned long long mFontIndex;
    bool mFontOverridden;
    unsigned long long mIndex;
    unsigned long long mParentIndex;
    EDProtection *mProtection;
    bool mProtectionOverridden;
    EDResources *mResources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)styleWithResources:(id)arg1;

- (id)alignmentInfo;
- (unsigned long long)alignmentInfoIndex;
- (id)borders;
- (unsigned long long)bordersIndex;
- (id)contentFormat;
- (unsigned long long)contentFormatId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)fill;
- (unsigned long long)fillIndex;
- (id)font;
- (unsigned long long)fontIndex;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)initWithResources:(id)arg1;
- (bool)isAlignmentInfoOverridden;
- (bool)isBordersOverridden;
- (bool)isContentFormatOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStyle:(id)arg1;
- (bool)isEquivalentToStyle:(id)arg1;
- (bool)isFillOverridden;
- (bool)isFontOverridden;
- (bool)isProtectionOverridden;
- (id)parent;
- (unsigned long long)parentIndex;
- (id)protection;
- (void)setAlignmentInfo:(id)arg1;
- (void)setAlignmentInfoIndex:(unsigned long long)arg1;
- (void)setAlignmentInfoOverridden:(bool)arg1;
- (void)setBorders:(id)arg1;
- (void)setBordersIndex:(unsigned long long)arg1;
- (void)setBordersOverridden:(bool)arg1;
- (void)setContentFormat:(id)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setContentFormatOverridden:(bool)arg1;
- (void)setDoNotModify:(bool)arg1;
- (void)setFill:(id)arg1;
- (void)setFillIndex:(unsigned long long)arg1;
- (void)setFillOverridden:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;
- (void)setFontOverridden:(bool)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setParent:(id)arg1;
- (void)setParentIndex:(unsigned long long)arg1;
- (void)setProtection:(id)arg1;
- (void)setProtectionOverridden:(bool)arg1;

@end
