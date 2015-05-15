/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser> {
    NSURL *_baseURL;
    NSSet *_parseHints;
    CoreDAVXMLElementGenerator *_rootElementGenerator;
    CoreDAVXMLElementGenerator *_rootErrorGenerator;
}

@property(assign,retain) NSURL * baseURL;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSSet * parseHints;
@property(assign,readonly) NSError * parserError;
@property(assign,readonly) CoreDAVItem * rootElement;
@property(assign,retain) CoreDAVXMLElementGenerator * rootElementGenerator;
@property(assign,readonly) CoreDAVErrorItem * rootError;
@property(assign,retain) CoreDAVXMLElementGenerator * rootErrorGenerator;
@property(assign,readonly) Class superclass;

+ (bool)canHandleContentType:(id)arg1;

- (id)baseURL;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithRootElementNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 baseURL:(id)arg4;
- (id)parseHints;
- (bool)processData:(id)arg1 forTask:(id)arg2;
- (id)rootElement;
- (id)rootElementGenerator;
- (id)rootError;
- (id)rootErrorGenerator;
- (void)setBaseURL:(id)arg1;
- (void)setParseHints:(id)arg1;
- (void)setRootElementGenerator:(id)arg1;
- (void)setRootErrorGenerator:(id)arg1;

@end