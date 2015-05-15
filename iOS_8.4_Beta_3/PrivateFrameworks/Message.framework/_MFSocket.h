/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFSocket : NSObject {
    NSString *_accountIdentifier;
    bool _allowsTrustPrompt;
    NSArray *_clientCertificates;
    NSCondition *_condition;
    struct __CFString { } *_connectionServiceType;
    NSInvocation *_eventHandler;
    NSString *_host;
    int _lowThroughputCounter;
    int _numTimeoutSecs;
    NSString *_protocol;
    NSString *_service;
    bool _socketCanRead;
    bool _socketCanWrite;
    NSString *_sourceApplicationBundleIdentifier;
    MFStream *_stream;
    bool _usesOpportunisticSockets;
}

@property(assign,copy) NSString * accountIdentifier;
@property(assign,readwrite) bool allowsTrustPrompt;
@property(assign,retain) NSArray * clientCertificates;
@property(assign,readonly) bool isCellularConnection;
@property(assign,readonly) bool isReadable;
@property(assign,readonly) bool isValid;
@property(assign,readonly) bool isWritable;
@property(assign,readonly) NSString * remoteHostname;
@property(assign,readonly) unsigned int remotePortNumber;
@property(assign,readonly) NSArray * serverCertificates;
@property(assign,copy) NSString * sourceApplicationBundleIdentifier;
@property(assign,readonly) NSData * sourceIPAddress;
@property(assign,readwrite) int timeout;
@property(assign,readwrite) bool usesOpportunisticSockets;

- (unsigned int)_bufferedByteCount;
- (bool)_startSSLHandshakeWithProtocol:(id)arg1 disableSSL2:(bool)arg2 errorPtr:(id*)arg3;
- (void)abort;
- (id)accountIdentifier;
- (bool)allowsTrustPrompt;
- (id)clientCertificates;
- (bool)connectToHost:(id)arg1 withPort:(unsigned int)arg2 service:(id)arg3;
- (void)dealloc;
- (void)enableThroughputMonitoring:(bool)arg1;
- (id)init;
- (bool)isCellularConnection;
- (bool)isReadable;
- (bool)isValid;
- (bool)isWritable;
- (long long)readBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)remoteHostname;
- (unsigned int)remotePortNumber;
- (id)securityProtocol;
- (id)serverCertificates;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAllowsTrustPrompt:(bool)arg1;
- (void)setClientCertificates:(id)arg1;
- (void)setConnectionServiceType:(struct __CFString { }*)arg1;
- (void)setEventHandler:(id)arg1;
- (bool)setSecurityProtocol:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setTimeout:(int)arg1;
- (void)setUsesOpportunisticSockets:(bool)arg1;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceIPAddress;
- (int)timeout;
- (bool)usesOpportunisticSockets;
- (long long)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;

@end