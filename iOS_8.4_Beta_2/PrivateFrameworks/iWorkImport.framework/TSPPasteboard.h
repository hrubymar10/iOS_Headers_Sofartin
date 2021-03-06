/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboard : NSObject <TSPDecoder> {
    id _pasteboard;
}

@property(assign,readonly) NSArray * URLs;
@property(assign,readonly) long long changeCount;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isSmartCopy;
@property(assign,readonly) NSString * name;
@property(assign,readonly) long long numberOfItems;
@property(assign,readonly) NSArray * richTextStrings;
@property(assign,copy) NSString * string;
@property(assign,readonly) NSArray * strings;
@property(assign,readonly) Class superclass;

+ (id)activePasteboardForName:(id)arg1;
+ (id)activePasteboards;
+ (id)activePasteboardsQueue;
+ (id)generalPasteboard;
+ (Class)pasteboardClass;
+ (id)pasteboardWithName:(id)arg1 create:(bool)arg2;
+ (id)pasteboardWithPasteboard:(id)arg1;
+ (id)pasteboardWithUniqueName;
+ (id)stylePasteboard;

- (void).cxx_destruct;
- (id)URLs;
- (void)addData:(id)arg1 forPasteboardType:(id)arg2;
- (void)addItems:(id)arg1;
- (void)addItems:(id)arg1 isSmartCopy:(bool)arg2;
- (long long)changeCount;
- (long long)clearContents;
- (bool)containsAnyPasteboardTypeInArray:(id)arg1;
- (bool)containsImportableRichTextTypes;
- (bool)containsImportableTextTypes;
- (bool)containsNativePasteboardTypes;
- (bool)containsPasteboardTypes:(id)arg1;
- (id)dataForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)description;
- (bool)fromExcelDataSource;
- (bool)fromIWorkSageDataSource;
- (id)importableImageTypes;
- (id)importablePlainTextTypes;
- (id)importableRichTextTypes;
- (id)initWithGeneralPasteboard;
- (id)initWithNativePasteboard:(id)arg1;
- (id)initWithPasteboardName:(id)arg1 create:(bool)arg2;
- (id)initWithUniquePasteboardName;
- (oneway void)invalidate;
- (bool)isSmartCopy;
- (id)name;
- (id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2;
- (id)newReadChannelForMetadata;
- (id)newReadChannelForRootObjectComponent;
- (long long)numberOfItems;
- (id)pasteboardTypes;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)performAsynchronousWriteUsingBlock:(id)arg1;
- (id)richTextStrings;
- (void)setString:(id)arg1;
- (id)string;
- (id)strings;
- (id)valueForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

@end
