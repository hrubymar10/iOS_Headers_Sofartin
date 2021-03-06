/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext <SSXPCCoding>

@property(assign,copy) NSString * clientIdentifierHeader;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(getter=isForced,assign,readwrite) bool forced;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSArray * softwareTypes;
@property(assign,readonly) Class superclass;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setClientIdentifierHeader:(id)arg1;
- (void)setForced:(bool)arg1;
- (void)setSoftwareTypes:(id)arg1;

@end
