/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVACLItem : CoreDAVItem {
    NSMutableSet *_accessControlEntities;
}

@property (nonatomic, retain) NSMutableSet *accessControlEntities;

+ (id)copyParseRules;

- (id)accessControlEntities;
- (void)addACE:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)liveACEs;
- (id)notGrantedSubsetOfACEs:(id)arg1;
- (void)setAccessControlEntities:(id)arg1;

@end
