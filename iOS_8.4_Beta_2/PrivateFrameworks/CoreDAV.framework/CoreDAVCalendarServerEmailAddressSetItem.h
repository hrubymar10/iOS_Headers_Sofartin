/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem {
    NSMutableSet *_emailAddresses;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

@property(assign,retain) NSMutableSet * emailAddresses;
@property(assign,retain) CoreDAVItemWithNoChildren * unauthenticated;

+ (id)copyParseRules;

- (void)addEmailAddress:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)emailAddresses;
- (id)init;
- (void)setEmailAddresses:(id)arg1;
- (void)setUnauthenticated:(id)arg1;
- (id)unauthenticated;

@end
