/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSHomeSharingLibrary : NSObject {
    bool __hasPendingUpdateRequest;
    bool _available;
    NSURL *_baseURL;
    HSConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionAccessQueue;
    long long _connectionType;
    <NSObject> *_context;
    NSString *_homeSharingGroupID;
    NSString *_name;
    bool _requiresPassword;
    NSString *_uniqueIdentifier;
    unsigned int _version;
}

@property(assign,readwrite) bool _hasPendingUpdateRequest;
@property(getter=isAvailable,assign,readonly) bool available;
@property(assign,readonly) unsigned int basePlaylistContainerID;
@property(assign,retain) NSURL * baseURL;
@property(assign,retain) HSConnection * connection;
@property(assign,readonly) long long connectionState;
@property(assign,readonly) long long connectionType;
@property(assign,retain) <NSObject> * context;
@property(assign,readonly) unsigned int databaseID;
@property(assign,readonly) NSString * deviceGUID;
@property(assign,copy) NSString * homeSharingGroupID;
@property(assign,copy) NSString * name;
@property(assign,readonly) bool requiresPassword;
@property(assign,copy) NSString * uniqueIdentifier;
@property(assign,readonly) unsigned int version;

- (void).cxx_destruct;
- (bool)_hasPendingUpdateRequest;
- (void)_onQueue_ensureConnection;
- (void)_sendUpdateRequest;
- (unsigned int)basePlaylistContainerID;
- (id)baseURL;
- (void)connectWithCompletionHandler:(id)arg1;
- (id)connection;
- (long long)connectionState;
- (long long)connectionType;
- (id)context;
- (unsigned int)databaseID;
- (id)deviceGUID;
- (void)disconnect;
- (id)homeSharingGroupID;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned int)arg3 baseURL:(id)arg4 homeSharingGroupID:(id)arg5 connectionType:(long long)arg6;
- (bool)isAvailable;
- (id)name;
- (bool)requiresPassword;
- (id)securityInfoForURL:(id)arg1;
- (void)sendRequest:(id)arg1 withResponseHandler:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setContext:(id)arg1;
- (void)set_hasPendingUpdateRequest:(bool)arg1;
- (id)signedRequestFromURLRequest:(id)arg1;
- (id)uniqueIdentifier;
- (id)urlForRequest:(id)arg1;
- (unsigned int)version;

@end
