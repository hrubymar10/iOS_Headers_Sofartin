/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVXMLData : NSObject {
    struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; } *_doc;
    bool _docHasEnded;
    struct __CFArray { } *_elementStack;
    struct __CFDictionary { } *_seenURIsToDepth;
    struct __CFDictionary { } *_seenURIsToPrefixes;
    bool _shouldAddFormattingSpaces;
    struct _xmlTextWriter { } *_writer;
}

@property(assign,readonly) NSData * data;
@property(assign,readwrite) bool shouldAddFormattingSpaces;

+ (bool)string:(id)arg1 isEqualToXmlCharString:(const char *)arg2;

- (const char *)_prefixForNameSpace:(const char *)arg1;
- (void)_startElement:(id)arg1 inNamespace:(id)arg2;
- (void)_startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3 attributes:(char *)arg4;
- (void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContent:(id)arg3 withAttributeNamesAndValues:(id)arg4;
- (void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContentAsCDATA:(id)arg3 withAttributeNamesAndValues:(id)arg4;
- (id)data;
- (void)dealloc;
- (void)endElement:(id)arg1 inNamespace:(id)arg2;
- (id)init;
- (void)setShouldAddFormattingSpaces:(bool)arg1;
- (bool)shouldAddFormattingSpaces;
- (void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3;
- (void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributes:(id)arg3;

@end
