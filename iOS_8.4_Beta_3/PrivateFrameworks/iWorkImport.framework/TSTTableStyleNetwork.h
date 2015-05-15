/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableStyleNetwork : TSPObject <NSFastEnumeration> {
    TSTCellStyle *mBodyCellStyle;
    TSWPParagraphStyle *mBodyTextStyle;
    TSTCellStyle *mFooterRowCellStyle;
    TSWPParagraphStyle *mFooterRowTextStyle;
    TSTCellStyle *mHeaderColumnCellStyle;
    TSWPParagraphStyle *mHeaderColumnTextStyle;
    TSTCellStyle *mHeaderRowCellStyle;
    TSWPParagraphStyle *mHeaderRowTextStyle;
    int mPresetIndex;
    TSWPShapeStyle *mTableNameShapeStyle;
    TSWPParagraphStyle *mTableNameStyle;
    TSTTableStyle *mTableStyle;
}

@property(assign,readonly) TSTCellStyle * bodyCellStyle;
@property(assign,readonly) TSWPParagraphStyle * bodyTextStyle;
@property(assign,readonly) TSTCellStyle * footerRowCellStyle;
@property(assign,readonly) TSWPParagraphStyle * footerRowTextStyle;
@property(assign,readonly) TSTCellStyle * headerColumnCellStyle;
@property(assign,readonly) TSWPParagraphStyle * headerColumnTextStyle;
@property(assign,readonly) TSTCellStyle * headerRowCellStyle;
@property(assign,readonly) TSWPParagraphStyle * headerRowTextStyle;
@property(assign,readwrite) unsigned long long presetID;
@property(assign,retain) TSWPShapeStyle * tableNameShapeStyle;
@property(assign,retain) TSWPParagraphStyle * tableNameStyle;
@property(assign,retain) TSTTableStyle * tableStyle;

+ (id)createStylesInStylesheet:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)curatedTableStylePropertySetForCrossDocumentPasteMasterComparison;
+ (id)curatedTextStylePropertySetForCrossDocumentPasteMasterComparison;
+ (id)defaultTableNameShapeStyleWithContext:(id)arg1;
+ (id)identifiersForPresetID:(unsigned long long)arg1;
+ (id)networkFromStylesheet:(id)arg1 presetID:(unsigned long long)arg2;
+ (id)networkFromTableModel:(id)arg1;
+ (id)networkFromTheme:(id)arg1 presetID:(unsigned long long)arg2;
+ (id)networkFromTheme:(id)arg1 presetIndex:(unsigned long long)arg2;
+ (id)networkWithContext:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)tableNameShapeStyleIDForPreset:(unsigned long long)arg1;
+ (id)tableNameStyleIDForPreset:(unsigned long long)arg1;

- (id)bodyCellStyle;
- (id)bodyTextStyle;
- (id)cellStyleForTableArea:(unsigned long long)arg1;
- (id)copy;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 context:(id)arg2;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)dictionaryWithPreset:(unsigned long long)arg1;
- (id)footerRowCellStyle;
- (id)footerRowTextStyle;
- (unsigned long long)hash;
- (id)headerColumnCellStyle;
- (id)headerColumnTextStyle;
- (id)headerRowCellStyle;
- (id)headerRowTextStyle;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithArchive:(const struct TableStyleNetworkArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct Reference {} *x6; struct Reference {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct Reference {} *x12; struct Reference {} *x13; struct Reference {} *x14; struct Reference {} *x15; unsigned int x16; }*)arg1 unarchiver:(id)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 fromArray:(id)arg2 presetID:(unsigned long long)arg3;
- (id)initWithContext:(id)arg1 fromDictionary:(id)arg2 withPreset:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (void)loadFromArchive:(const struct TableStyleNetworkArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct Reference {} *x6; struct Reference {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct Reference {} *x12; struct Reference {} *x13; struct Reference {} *x14; struct Reference {} *x15; unsigned int x16; }*)arg1 withUnarchiver:(id)arg2;
- (unsigned long long)presetID;
- (void)saveToArchive:(struct TableStyleNetworkArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct Reference {} *x6; struct Reference {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct Reference {} *x12; struct Reference {} *x13; struct Reference {} *x14; struct Reference {} *x15; unsigned int x16; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setBodyCellStyle:(id)arg1;
- (void)setBodyTextStyle:(id)arg1;
- (void)setCellStyle:(id)arg1 forTableArea:(unsigned long long)arg2;
- (void)setFooterRowCellStyle:(id)arg1;
- (void)setFooterRowTextStyle:(id)arg1;
- (void)setHeaderColumnCellStyle:(id)arg1;
- (void)setHeaderColumnTextStyle:(id)arg1;
- (void)setHeaderRowCellStyle:(id)arg1;
- (void)setHeaderRowTextStyle:(id)arg1;
- (void)setPresetID:(unsigned long long)arg1;
- (void)setStylesFromTableModel:(id)arg1;
- (void)setTableNameShapeStyle:(id)arg1;
- (void)setTableNameStyle:(id)arg1;
- (void)setTableStyle:(id)arg1;
- (void)setTextStyle:(id)arg1 forTableArea:(unsigned long long)arg2;
- (id)styleArray;
- (bool)stylesInStylesheet:(id)arg1;
- (id)tableNameShapeStyle;
- (id)tableNameStyle;
- (id)tableStyle;
- (id)textStyleForTableArea:(unsigned long long)arg1;
- (bool)valid;

@end
