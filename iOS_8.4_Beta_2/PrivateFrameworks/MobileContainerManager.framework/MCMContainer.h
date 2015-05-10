/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
 */

@interface MCMContainer : NSObject {
    long long _containerClass;
    NSString *_identifier;
    NSUUID *_uuid;
    NSXPCConnection *_xpcConnection;
}

@property(assign,readonly) long long containerClass;
@property(assign,readonly) NSString * identifier;
@property(assign,readonly) NSDictionary * info;
@property(getter=isTemporary,assign,readonly) bool temporary;
@property(assign,readonly) NSURL * url;
@property(assign,readonly) NSUUID * uuid;

+ (id)containerWithIdentifier:(id)arg1 createIfNecessary:(bool)arg2 existed:(bool*)arg3 error:(id*)arg4;
+ (id)containerWithIdentifier:(id)arg1 error:(id*)arg2;
+ (id)temporaryContainerWithIdentifier:(id)arg1 existed:(bool*)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_errorOccurred;
- (long long)_getContainerClass;
- (id)_getMetadataInfoFromServer;
- (void)_invalidateObject;
- (bool)_setupXpcCnnection;
- (long long)containerClass;
- (void)dealloc;
- (id)description;
- (void)destroyContainerWithCompletion:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)info;
- (id)infoValueForKey:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithIdentifier:(id)arg1 createIfNecessary:(bool)arg2 existed:(bool*)arg3 temp:(bool)arg4 error:(id*)arg5;
- (id)initWithIdentifier:(id)arg1 uuid:(id)arg2 containerClass:(long long)arg3 error:(id*)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isTemporary;
- (void)markDeleted;
- (bool)recreateDefaultStructureWithError:(id*)arg1;
- (bool)regenerateDirectoryUUIDWithError:(id*)arg1;
- (bool)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)url;
- (id)uuid;

@end