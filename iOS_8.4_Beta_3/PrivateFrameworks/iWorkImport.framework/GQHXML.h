/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHXML : NSObject {
    bool isProgressive;
    struct __CFString { } *mCss;
    struct __CFString { } *mCssFilename;
    struct __CFString { } *mFilename;
    struct __CFString { } *mLastCss;
    <GQHXMLOutput> *mOutput;
    bool mUseExternalCss;
}

@property (readonly) bool isProgressive;

- (void)addCharRef:(const char *)arg1;
- (void)addContent:(struct __CFString { }*)arg1;
- (void)addMetaTagWithTextFormat:(struct __CFString { }*)arg1;
- (void)addStyleClass:(struct __CFString { }*)arg1;
- (void)addStyleClassLast:(struct __CFString { }*)arg1;
- (void)addViewportMetaTagForDocumentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)addViewportMetaTagForDocumentSize:(struct CGSize { double x1; double x2; })arg1 maximumScale:(float)arg2;
- (void)addXmlCharContent:(const char *)arg1;
- (struct __CFData { }*)createProgressiveHtml;
- (struct __CFData { }*)createProgressiveeCSSwithStyleTags:(unsigned char)arg1;
- (struct __CFString { }*)cssFilename;
- (void)dealloc;
- (void)endElement;
- (void)endElementWithExpectedName:(const char *)arg1;
- (id)initEmptyWithFilename:(struct __CFString { }*)arg1 useExternalCss:(bool)arg2;
- (id)initWithFilename:(struct __CFString { }*)arg1 documentSize:(struct CGSize { double x1; double x2; }*)arg2 outputBundle:(id)arg3 useExternalCss:(bool)arg4;
- (bool)isProgressive;
- (void)setAttribute:(const char *)arg1 cfStringValue:(struct __CFString { }*)arg2;
- (void)setAttribute:(const char *)arg1 floatValue:(float)arg2;
- (void)setAttribute:(const char *)arg1 intValue:(int)arg2;
- (void)setAttribute:(const char *)arg1 value:(const char *)arg2;
- (void)startElement:(const char *)arg1;
- (bool)writeToOutputBundle:(id)arg1 isThumbnail:(bool)arg2;

@end
