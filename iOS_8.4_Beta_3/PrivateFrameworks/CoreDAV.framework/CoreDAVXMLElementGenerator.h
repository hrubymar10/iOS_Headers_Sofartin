/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVXMLElementGenerator : NSObject <NSXMLParserDelegate> {
    NSURL *_baseURL;
    NSMutableData *_cDATA;
    NSDictionary *_cachedElementParseRules;
    NSMutableData *_characters;
    bool _checkedElementValidityIfRootElement;
    CoreDAVXMLElementGenerator *_currentlyParsingSubItem;
    CoreDAVItem *_element;
    bool _isUnrecognized;
    CoreDAVItem *_parentElement;
    SEL _parentElementSetter;
    CoreDAVXMLElementGenerator *_parentGenerator;
    int _parsingState;
}

@property(assign,retain) NSURL * baseURL;
@property(assign,retain) NSMutableData * cDATA;
@property(assign,retain) NSDictionary * cachedElementParseRules;
@property(assign,retain) NSMutableData * characters;
@property(assign,readwrite) bool checkedElementValidityIfRootElement;
@property(assign,retain) CoreDAVXMLElementGenerator * currentlyParsingSubItem;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) CoreDAVItem * element;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool isUnrecognized;
@property(assign,readwrite) SEL parentElementSetter;
@property(assign,readwrite) CoreDAVXMLElementGenerator * parentGenerator;
@property(assign,readwrite) int parsingState;
@property(assign,readonly) Class superclass;

- (id)baseURL;
- (id)cDATA;
- (id)cachedElementParseRules;
- (id)characters;
- (bool)checkedElementValidityIfRootElement;
- (id)currentlyParsingSubItem;
- (void)dealloc;
- (id)element;
- (id)initWithParser:(id)arg1 baseURL:(id)arg2 rootElementNameSpace:(id)arg3 elementName:(id)arg4 parseClass:(Class)arg5;
- (id)initWithParser:(id)arg1 parentGenerator:(id)arg2 parentElementSetter:(SEL)arg3 element:(id)arg4;
- (bool)isExpectedNameSpace:(id)arg1 andElementName:(id)arg2;
- (bool)isUnrecognized;
- (void)noteChildCascadingFailure;
- (void)notifyElement:(id)arg1 ofAttributesFound:(id)arg2;
- (SEL)parentElementSetter;
- (id)parentGenerator;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (int)parsingState;
- (void)resumeParsingWithParser:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setCDATA:(id)arg1;
- (void)setCachedElementParseRules:(id)arg1;
- (void)setCharacters:(id)arg1;
- (void)setCheckedElementValidityIfRootElement:(bool)arg1;
- (void)setCurrentlyParsingSubItem:(id)arg1;
- (void)setElement:(id)arg1;
- (void)setIsUnrecognized:(bool)arg1;
- (void)setParentElementSetter:(SEL)arg1;
- (void)setParentGenerator:(id)arg1;
- (void)setParsingState:(int)arg1;
- (bool)tracksRootElement;

@end
