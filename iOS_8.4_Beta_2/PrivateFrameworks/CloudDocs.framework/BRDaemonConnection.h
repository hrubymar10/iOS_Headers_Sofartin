/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRDaemonConnection : NSXPCConnection {
    bool _isUsingTokenService;
    NSUUID *_uuid;
}

+ (id)cloudDocsAppSupportURL;
+ (id)cloudDocsCachesURL;
+ (id)defaultConnection;
+ (id)homeDirectoryURL;
+ (void)initialize;
+ (void)invalidateCachedURLProperties;
+ (id)mobileDocumentsURL;
+ (id)secondaryConnection;
+ (id)t_connectionForUUID:(id)arg1;
+ (void)t_setDefaultConnection:(id)arg1;
+ (void)t_setMobileDocumentsURL:(id)arg1;

- (void)_setupAndResume;
- (void)dealloc;
- (id)initUsingUserLocalDaemon;
- (id)initUsingUserLocalDaemonTokenService;
- (struct BRXPCSyncProxy { Class x1; id x2; id x3; id x4; id x5; int x6; }*)syncProxy;
- (struct BRXPCSyncProxy { Class x1; id x2; id x3; id x4; id x5; int x6; }*)syncTokenProxy;

@end