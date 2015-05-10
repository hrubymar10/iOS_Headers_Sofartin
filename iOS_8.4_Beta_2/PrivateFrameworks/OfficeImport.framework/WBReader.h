/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBReader : OCBReader {
    struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark *> { struct WrdBookmark {} **x_3_1_1; struct WrdBookmark {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mAnnotationBookmarkTable;
    NSMutableArray *mAnnotationOwners;
    id mAnnotationRangeStart;
    struct WrdAnnotationTable { int (**x1)(); struct ChVector<WrdAnnotation *> { struct WrdAnnotation {} **x_2_1_1; struct WrdAnnotation {} **x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; } x2; } *mAnnotationTable;
    NSMutableDictionary *mBookmarkIndexToAnnotationRangeStartMap;
    struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark *> { struct WrdBookmark {} **x_3_1_1; struct WrdBookmark {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mBookmarkTable;
    struct WrdNoteTable { int (**x1)(); int x2; struct ChVector<WrdNote *> { struct WrdNote {} **x_3_1_1; struct WrdNote {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mEndnoteTable;
    struct WrdEshObjectFactory { int (**x1)(); bool x2; } *mEshObjectFactory;
    struct WrdFieldPositionTable {} *mFieldPositionTables;
    struct WrdFileShapeAddressTable { int (**x1)(); int x2; struct ChVector<WrdFileShapeAddress *> { struct WrdFileShapeAddress {} **x_3_1_1; struct WrdFileShapeAddress {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mFileShapeAddressHeaderTable;
    struct WrdFileShapeAddressTable { int (**x1)(); int x2; struct ChVector<WrdFileShapeAddress *> { struct WrdFileShapeAddress {} **x_3_1_1; struct WrdFileShapeAddress {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mFileShapeAddressTable;
    struct WrdNoteTable { int (**x1)(); int x2; struct ChVector<WrdNote *> { struct WrdNote {} **x_3_1_1; struct WrdNote {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mFootnoteTable;
    struct WrdStoryTable { int (**x1)(); int x2; struct ChVector<WrdStory *> { struct WrdStory {} **x_3_1_1; struct WrdStory {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mHeaderStoryTable;
    OITSUNoCopyDictionary *mIndexToFonts;
    OITSUNoCopyDictionary *mIndexToStyles;
    struct WrdParagraphProperties { int (**x1)(); int (**x2)(); struct WrdParagraphPropertiesOverridden { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 1; unsigned int x_3_1_33 : 1; unsigned int x_3_1_34 : 1; unsigned int x_3_1_35 : 1; unsigned int x_3_1_36 : 1; unsigned int x_3_1_37 : 1; unsigned int x_3_1_38 : 1; unsigned int x_3_1_39 : 1; unsigned int x_3_1_40 : 1; unsigned int x_3_1_41 : 1; unsigned int x_3_1_42 : 1; unsigned int x_3_1_43 : 1; unsigned int x_3_1_44 : 1; unsigned int x_3_1_45 : 1; unsigned int x_3_1_46 : 1; unsigned int x_3_1_47 : 1; unsigned int x_3_1_48 : 1; unsigned int x_3_1_49 : 1; unsigned int x_3_1_50 : 1; unsigned int x_3_1_51 : 1; unsigned int x_3_1_52 : 1; unsigned int x_3_1_53 : 1; unsigned int x_3_1_54 : 1; unsigned int x_3_1_55 : 1; unsigned int x_3_1_56 : 1; unsigned int x_3_1_57 : 1; unsigned int x_3_1_58 : 1; unsigned int x_3_1_59 : 1; unsigned int x_3_1_60 : 1; unsigned int x_3_1_61 : 1; unsigned int x_3_1_62 : 1; unsigned int x_3_1_63 : 1; unsigned int x_3_1_64 : 1; unsigned int x_3_1_65 : 1; unsigned int x_3_1_66 : 1; unsigned int x_3_1_67 : 1; unsigned int x_3_1_68 : 1; unsigned int x_3_1_69 : 1; unsigned int x_3_1_70 : 1; unsigned int x_3_1_71 : 1; unsigned int x_3_1_72 : 1; unsigned int x_3_1_73 : 1; unsigned int x_3_1_74 : 1; unsigned int x_3_1_75 : 1; unsigned int x_3_1_76 : 1; unsigned int x_3_1_77 : 1; } x3; struct WrdShading {} *x4; struct WrdLineSpaceDescriptor {} *x5; struct WrdDropCap {} *x6; struct WrdBorder {} *x7; struct WrdBorder {} *x8; struct WrdBorder {} *x9; struct WrdBorder {} *x10; struct WrdBorder {} *x11; struct WrdBorder {} *x12; struct WrdAutoNumberListDescriptor {} *x13; struct WrdDateTime {} *x14; struct WrdNumberRevisionMarkData {} *x15; struct WrdTabDescriptor {} *x16; short x17; short x18; unsigned short x19; unsigned short x20; int x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; struct ChVector<WrdTabDescriptor *> { struct WrdTabDescriptor {} **x_29_1_1; struct WrdTabDescriptor {} **x_29_1_2; unsigned int x_29_1_3; unsigned int x_29_1_4; unsigned int x_29_1_5; } x29; short *x30; short *x31; short *x32; int x33; int x34; int x35; int x36; int x37; int x38; int x39; int x40; int x41; int x42; int x43; int x44; unsigned int x45; unsigned int x46; short x47; short x48; short x49; short x50; short x51; unsigned short x52; unsigned short x53; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned char x84; unsigned char x85; unsigned char x86; } *mLastRowParagraphProperties;
    WBOfficeArtReaderState *mOfficeArtState;
    bool mReportProgress;
    struct WrdStoryTable { int (**x1)(); int x2; struct ChVector<WrdStory *> { struct WrdStory {} **x_3_1_1; struct WrdStory {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mStoryTable;
    struct WrdCPTableHeaders { int (**x1)(); struct ChVector<int> { int *x_2_1_1; int *x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; } x2; } *mTableHeaders;
    WDDocument *mTargetDocument;
    struct vector<WBTextBoxReaderInfo, std::__1::allocator<WBTextBoxReaderInfo> > { struct WBTextBoxReaderInfo {} *x1; struct WBTextBoxReaderInfo {} *x2; struct __compressed_pair<WBTextBoxReaderInfo *, std::__1::allocator<WBTextBoxReaderInfo> > { struct WBTextBoxReaderInfo {} *x_3_1_1; } x3; } *mTextBoxes;
}

@property(assign,readwrite) WDDocument * targetDocument;

- (void)addFont:(id)arg1 index:(int)arg2;
- (void)addStyle:(id)arg1 index:(int)arg2;
- (struct OCCBinaryStreamer { int (**x1)(); struct OCCCryptoKey {} *x2; char *x3; }*)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey { }*)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark *> { struct WrdBookmark {} **x_3_1_1; struct WrdBookmark {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)annotationBookmarkTable;
- (id)annotationOwner:(int)arg1;
- (id)annotationRangeStart;
- (id)annotationRangeStartForBookmarkIndex:(unsigned long long)arg1;
- (struct WrdAnnotationTable { int (**x1)(); struct ChVector<WrdAnnotation *> { struct WrdAnnotation {} **x_2_1_1; struct WrdAnnotation {} **x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; } x2; }*)annotationTable;
- (struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark *> { struct WrdBookmark {} **x_3_1_1; struct WrdBookmark {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)bookmarkTable;
- (void)cacheTextBox:(id)arg1 withChainIndex:(unsigned short)arg2;
- (void)dealloc;
- (id)drawableForShapeId:(unsigned int)arg1;
- (struct OCCEncryptionInfoReader { int (**x1)(); }*)encryptionInfoReader;
- (struct WrdNoteTable { int (**x1)(); int x2; struct ChVector<WrdNote *> { struct WrdNote {} **x_3_1_1; struct WrdNote {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)endnoteTable;
- (struct WrdEshObjectFactory { int (**x1)(); bool x2; }*)eshObjectFactory;
- (struct WrdFieldPositionTable { int (**x1)(); int x2; struct ChVector<WrdFieldPosition *> { struct WrdFieldPosition {} **x_3_1_1; struct WrdFieldPosition {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)fieldPositionTableForTextType:(int)arg1;
- (struct WrdFileShapeAddressTable { int (**x1)(); int x2; struct ChVector<WrdFileShapeAddress *> { struct WrdFileShapeAddress {} **x_3_1_1; struct WrdFileShapeAddress {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)fileShapeAddressHeaderTable;
- (struct WrdFileShapeAddressTable { int (**x1)(); int x2; struct ChVector<WrdFileShapeAddress *> { struct WrdFileShapeAddress {} **x_3_1_1; struct WrdFileShapeAddress {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)fileShapeAddressTable;
- (id)fontAtIndex:(int)arg1;
- (struct WrdNoteTable { int (**x1)(); int x2; struct ChVector<WrdNote *> { struct WrdNote {} **x_3_1_1; struct WrdNote {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)footnoteTable;
- (struct WrdStoryTable { int (**x1)(); int x2; struct ChVector<WrdStory *> { struct WrdStory {} **x_3_1_1; struct WrdStory {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)headerStoryTable;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;
- (void)initialize;
- (struct WrdParagraphProperties { int (**x1)(); int (**x2)(); struct WrdParagraphPropertiesOverridden { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 1; unsigned int x_3_1_33 : 1; unsigned int x_3_1_34 : 1; unsigned int x_3_1_35 : 1; unsigned int x_3_1_36 : 1; unsigned int x_3_1_37 : 1; unsigned int x_3_1_38 : 1; unsigned int x_3_1_39 : 1; unsigned int x_3_1_40 : 1; unsigned int x_3_1_41 : 1; unsigned int x_3_1_42 : 1; unsigned int x_3_1_43 : 1; unsigned int x_3_1_44 : 1; unsigned int x_3_1_45 : 1; unsigned int x_3_1_46 : 1; unsigned int x_3_1_47 : 1; unsigned int x_3_1_48 : 1; unsigned int x_3_1_49 : 1; unsigned int x_3_1_50 : 1; unsigned int x_3_1_51 : 1; unsigned int x_3_1_52 : 1; unsigned int x_3_1_53 : 1; unsigned int x_3_1_54 : 1; unsigned int x_3_1_55 : 1; unsigned int x_3_1_56 : 1; unsigned int x_3_1_57 : 1; unsigned int x_3_1_58 : 1; unsigned int x_3_1_59 : 1; unsigned int x_3_1_60 : 1; unsigned int x_3_1_61 : 1; unsigned int x_3_1_62 : 1; unsigned int x_3_1_63 : 1; unsigned int x_3_1_64 : 1; unsigned int x_3_1_65 : 1; unsigned int x_3_1_66 : 1; unsigned int x_3_1_67 : 1; unsigned int x_3_1_68 : 1; unsigned int x_3_1_69 : 1; unsigned int x_3_1_70 : 1; unsigned int x_3_1_71 : 1; unsigned int x_3_1_72 : 1; unsigned int x_3_1_73 : 1; unsigned int x_3_1_74 : 1; unsigned int x_3_1_75 : 1; unsigned int x_3_1_76 : 1; unsigned int x_3_1_77 : 1; } x3; struct WrdShading {} *x4; struct WrdLineSpaceDescriptor {} *x5; struct WrdDropCap {} *x6; struct WrdBorder {} *x7; struct WrdBorder {} *x8; struct WrdBorder {} *x9; struct WrdBorder {} *x10; struct WrdBorder {} *x11; struct WrdBorder {} *x12; struct WrdAutoNumberListDescriptor {} *x13; struct WrdDateTime {} *x14; struct WrdNumberRevisionMarkData {} *x15; struct WrdTabDescriptor {} *x16; short x17; short x18; unsigned short x19; unsigned short x20; int x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; struct ChVector<WrdTabDescriptor *> { struct WrdTabDescriptor {} **x_29_1_1; struct WrdTabDescriptor {} **x_29_1_2; unsigned int x_29_1_3; unsigned int x_29_1_4; unsigned int x_29_1_5; } x29; short *x30; short *x31; short *x32; int x33; int x34; int x35; int x36; int x37; int x38; int x39; int x40; int x41; int x42; int x43; int x44; unsigned int x45; unsigned int x46; short x47; short x48; short x49; short x50; short x51; unsigned short x52; unsigned short x53; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned char x84; unsigned char x85; unsigned char x86; }*)lastRowParagraphProperties;
- (id)officeArtState;
- (id)read;
- (id)readCharactersForTextRun:(struct WrdTextRun { int (**x1)(); int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)readCharactersFrom:(unsigned int)arg1 to:(unsigned int)arg2 textType:(int)arg3;
- (bool)reportProgress;
- (void)setAnnotationRangeStart:(id)arg1;
- (void)setAnnotationRangeStart:(id)arg1 forBookmarkIndex:(unsigned long long)arg2;
- (void)setLastRowParagraphProperties:(struct WrdParagraphProperties { int (**x1)(); int (**x2)(); struct WrdParagraphPropertiesOverridden { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 1; unsigned int x_3_1_33 : 1; unsigned int x_3_1_34 : 1; unsigned int x_3_1_35 : 1; unsigned int x_3_1_36 : 1; unsigned int x_3_1_37 : 1; unsigned int x_3_1_38 : 1; unsigned int x_3_1_39 : 1; unsigned int x_3_1_40 : 1; unsigned int x_3_1_41 : 1; unsigned int x_3_1_42 : 1; unsigned int x_3_1_43 : 1; unsigned int x_3_1_44 : 1; unsigned int x_3_1_45 : 1; unsigned int x_3_1_46 : 1; unsigned int x_3_1_47 : 1; unsigned int x_3_1_48 : 1; unsigned int x_3_1_49 : 1; unsigned int x_3_1_50 : 1; unsigned int x_3_1_51 : 1; unsigned int x_3_1_52 : 1; unsigned int x_3_1_53 : 1; unsigned int x_3_1_54 : 1; unsigned int x_3_1_55 : 1; unsigned int x_3_1_56 : 1; unsigned int x_3_1_57 : 1; unsigned int x_3_1_58 : 1; unsigned int x_3_1_59 : 1; unsigned int x_3_1_60 : 1; unsigned int x_3_1_61 : 1; unsigned int x_3_1_62 : 1; unsigned int x_3_1_63 : 1; unsigned int x_3_1_64 : 1; unsigned int x_3_1_65 : 1; unsigned int x_3_1_66 : 1; unsigned int x_3_1_67 : 1; unsigned int x_3_1_68 : 1; unsigned int x_3_1_69 : 1; unsigned int x_3_1_70 : 1; unsigned int x_3_1_71 : 1; unsigned int x_3_1_72 : 1; unsigned int x_3_1_73 : 1; unsigned int x_3_1_74 : 1; unsigned int x_3_1_75 : 1; unsigned int x_3_1_76 : 1; unsigned int x_3_1_77 : 1; } x3; struct WrdShading {} *x4; struct WrdLineSpaceDescriptor {} *x5; struct WrdDropCap {} *x6; struct WrdBorder {} *x7; struct WrdBorder {} *x8; struct WrdBorder {} *x9; struct WrdBorder {} *x10; struct WrdBorder {} *x11; struct WrdBorder {} *x12; struct WrdAutoNumberListDescriptor {} *x13; struct WrdDateTime {} *x14; struct WrdNumberRevisionMarkData {} *x15; struct WrdTabDescriptor {} *x16; short x17; short x18; unsigned short x19; unsigned short x20; int x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; struct ChVector<WrdTabDescriptor *> { struct WrdTabDescriptor {} **x_29_1_1; struct WrdTabDescriptor {} **x_29_1_2; unsigned int x_29_1_3; unsigned int x_29_1_4; unsigned int x_29_1_5; } x29; short *x30; short *x31; short *x32; int x33; int x34; int x35; int x36; int x37; int x38; int x39; int x40; int x41; int x42; int x43; int x44; unsigned int x45; unsigned int x46; short x47; short x48; short x49; short x50; short x51; unsigned short x52; unsigned short x53; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned char x84; unsigned char x85; unsigned char x86; }*)arg1;
- (void)setOfficeArtState:(id)arg1;
- (void)setReportProgress:(bool)arg1;
- (void)setTargetDocument:(id)arg1;
- (bool)start;
- (struct WrdStoryTable { int (**x1)(); int x2; struct ChVector<WrdStory *> { struct WrdStory {} **x_3_1_1; struct WrdStory {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)storyTable;
- (id)styleAtIndex:(int)arg1;
- (struct WrdCPTableHeaders { int (**x1)(); struct ChVector<int> { int *x_2_1_1; int *x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; } x2; }*)tableHeaders;
- (id)targetDocument;
- (unsigned long long)textBoxCount;
- (struct WBTextBoxReaderInfo { id x1; unsigned short x2; })textBoxInfoAtIndex:(unsigned long long)arg1;
- (struct WrdBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct WrdParser {} *x5; struct WrdEshReader { int (**x_6_1_1)(); struct SsrwOOStream {} *x_6_1_2; struct EshParserVisitor {} *x_6_1_3; struct EshObjectFactory {} *x_6_1_4; unsigned int x_6_1_5; unsigned int x_6_1_6; struct ChStack<EshHeader> { struct EshHeader {} *x_7_2_1; struct EshHeader {} *x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; } x_6_1_7; unsigned int x_6_1_8; struct EshHeader { int x_9_2_1; unsigned int x_9_2_2; short x_9_2_3; unsigned short x_9_2_4; unsigned char x_9_2_5; } x_6_1_9; bool x_6_1_10; } x6; struct WrdRdrText {} *x7; struct WrdBinTable {} *x8; struct WrdPAPXFKP {} *x9; unsigned int x10; struct WrdBinTable {} *x11; struct WrdCHPXFKP {} *x12; unsigned int x13; int x14; struct WrdSectionDescriptorTable {} *x15; struct WrdStyleSheet {} *x16; struct WrdEmbeddedTTFRecordTable {} *x17; struct WrdDocumentFileRecord {} *x18; struct ChMap<unsigned int, unsigned int, CsLess<unsigned int> > { struct map<unsigned int, unsigned int, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > { struct __tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > > { struct __tree_node<std::__1::__value_type<unsigned int, unsigned int>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, CsLess<unsigned int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_19_1_1; } x19[8]; struct ChMap<unsigned int, unsigned int, CsLess<unsigned int> > { struct map<unsigned int, unsigned int, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > { struct __tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > > { struct __tree_node<std::__1::__value_type<unsigned int, unsigned int>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, CsLess<unsigned int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_20_1_1; } x20[8]; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; int x25; struct WrdText { int (**x_26_1_1)(); struct OcText { int (**x_2_2_1)(); int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; char *x_2_2_6; char *x_2_2_7; bool x_2_2_8; } x_26_1_2; int x_26_1_3; } x26; struct WrdEmbeddedTrueTypeFont {} *x27; }*)wrdReader;

@end
