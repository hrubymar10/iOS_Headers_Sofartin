/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSResetServer : NSObject <MSResetServerProtocolDelegate> {
    MSMediaStreamDaemon *_daemon;
    NSString *_personID;
    MSResetServerProtocol *_protocol;
    id _selfReference;
}

@property(assign,readwrite) MSMediaStreamDaemon * daemon;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSString * personID;
@property(assign,readonly) Class superclass;

+ (id)resetServerObjectWithPersonID:(id)arg1 baseURL:(id)arg2;

- (void).cxx_destruct;
- (id)daemon;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (id)personID;
- (void)resetServer;
- (void)resetServerProtocol:(id)arg1 didFinishWithError:(id)arg2;
- (void)resetServerProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)setDaemon:(id)arg1;

@end
