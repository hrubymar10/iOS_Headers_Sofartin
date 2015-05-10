/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate> {
    UIPDFAnnotation *_annotation;
    NSMutableString *_characters;
    bool _parseError;
}

@property(assign,retain) UIPDFAnnotation * annotation;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool parseError;
@property(assign,readonly) Class superclass;

- (id)annotation;
- (void)dealloc;
- (id)init;
- (bool)parseError;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidStartDocument:(id)arg1;
- (void)setAnnotation:(id)arg1;

@end
