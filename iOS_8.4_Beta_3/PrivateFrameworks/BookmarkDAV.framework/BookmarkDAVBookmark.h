/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVBookmark : NSObject <CoreDAVLeafDataPayload, NSXMLParserDelegate> {
    NSMutableString *_appleAttributeString;
    NSDictionary *_appleAttributes;
    NSURL *_bookmarkURL;
    CoreDAVErrorItem *_bulkUploadErrorItem;
    int _ignoreLevel;
    NSString *_name;
    int _parseState;
    NSURL *_serverID;
    NSString *_syncKey;
}

@property(assign,retain) NSDictionary * appleAttributes;
@property(assign,retain) NSURL * bookmarkURL;
@property(assign,retain) CoreDAVErrorItem * bulkUploadErrorItem;
@property(assign,readonly) NSArray * childrenOrder;
@property(assign,readonly) NSData * dataPayload;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSString * name;
@property(assign,retain) NSURL * serverID;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSString * syncKey;

- (id)appleAttributes;
- (id)bookmarkURL;
- (id)bulkUploadErrorItem;
- (id)dataPayload;
- (void)dealloc;
- (id)initWithBookmarkURL:(id)arg1 serverID:(id)arg2 name:(id)arg3 syncKey:(id)arg4 appleAttributes:(id)arg5;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
- (id)name;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)serverID;
- (void)setBulkUploadErrorItem:(id)arg1;
- (void)setPropertiesFromXBEL:(id)arg1;
- (void)setServerID:(id)arg1;
- (id)syncKey;

@end
