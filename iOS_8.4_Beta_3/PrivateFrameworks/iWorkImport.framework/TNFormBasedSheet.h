/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNFormBasedSheet : TNSheet {
    NSString *mImportedTargetName;
    struct __CFUUID { } *mTableID;
    TSTTableInfo *mTableInfo;
}

@property struct __CFUUID { }*tableID;
@property (readonly) TSTTableInfo *tableInfo;

- (void)clearTableInfoCache;
- (double)contentScale;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 importedTargetName:(id)arg2;
- (bool)isForm;
- (void)resolveImportedTargetNameInDocumentRoot:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setTableID:(struct __CFUUID { }*)arg1;
- (struct __CFUUID { }*)tableID;
- (id)tableInfo;

@end
