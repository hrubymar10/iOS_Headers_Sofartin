/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPrincipalItem : CoreDAVItem {
    CoreDAVItemWithNoChildren *_all;
    CoreDAVItemWithNoChildren *_authenticated;
    CoreDAVHrefItem *_href;
    CoreDAVItem *_property;
    CoreDAVItemWithNoChildren *_selfItem;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

@property(assign,retain) CoreDAVItemWithNoChildren * all;
@property(assign,retain) CoreDAVItemWithNoChildren * authenticated;
@property(assign,retain) CoreDAVHrefItem * href;
@property(assign,retain) CoreDAVItem * property;
@property(assign,retain) CoreDAVItemWithNoChildren * selfItem;
@property(assign,retain) CoreDAVItemWithNoChildren * unauthenticated;

+ (id)copyParseRules;

- (id)all;
- (id)authenticated;
- (void)dealloc;
- (id)description;
- (id)hashString;
- (id)href;
- (id)init;
- (id)initTypeIsAll;
- (id)initTypeIsAuthenticated;
- (id)initTypeIsHREFWithURL:(id)arg1;
- (id)initTypeIsProperty:(id)arg1;
- (id)initTypeIsSelf;
- (id)initTypeIsUnauthenticated;
- (id)property;
- (id)selfItem;
- (void)setAll:(id)arg1;
- (void)setAuthenticated:(id)arg1;
- (void)setHref:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setSelfItem:(id)arg1;
- (void)setUnauthenticated:(id)arg1;
- (id)unauthenticated;
- (void)write:(id)arg1;

@end