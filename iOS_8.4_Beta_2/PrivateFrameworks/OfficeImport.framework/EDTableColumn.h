/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTableColumn : NSObject {
    unsigned long long mDataAreaDxfIndex;
    unsigned long long mHeaderRowDxfIndex;
    EDString *mName;
    EDResources *mResources;
    unsigned long long mTotalsRowDxfIndex;
    EDString *mTotalsRowLabel;
    EDString *mUniqueName;
}

+ (id)tableColumnWithResources:(id)arg1;

- (id)dataAreaDxf;
- (unsigned long long)dataAreaDxfIndex;
- (void)dealloc;
- (id)headerRowDxf;
- (unsigned long long)headerRowDxfIndex;
- (id)initWithResources:(id)arg1;
- (id)name;
- (void)setDataAreaDxf:(id)arg1;
- (void)setDataAreaDxfIndex:(unsigned long long)arg1;
- (void)setHeaderRowDxf:(id)arg1;
- (void)setHeaderRowDxfIndex:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setTotalsRowDxf:(id)arg1;
- (void)setTotalsRowDxfIndex:(unsigned long long)arg1;
- (void)setTotalsRowLabel:(id)arg1;
- (void)setUniqueName:(id)arg1;
- (id)totalsRowDxf;
- (unsigned long long)totalsRowDxfIndex;
- (id)totalsRowLabel;
- (id)uniqueName;

@end