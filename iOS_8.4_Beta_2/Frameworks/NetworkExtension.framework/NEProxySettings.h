/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEProxySettings : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    bool _FTPEnabled;
    NEProxyServer *_FTPServer;
    bool _HTTPEnabled;
    bool _HTTPSEnabled;
    NEProxyServer *_HTTPSServer;
    NEProxyServer *_HTTPServer;
    bool _RTSPEnabled;
    NEProxyServer *_RTSPServer;
    bool _SOCKSEnabled;
    NEProxyServer *_SOCKSServer;
    bool _autoProxyConfigurationEnabled;
    bool _autoProxyDiscovery;
    NSArray *_exceptionList;
    bool _excludeSimpleHostnames;
    bool _gopherEnabled;
    NEProxyServer *_gopherServer;
    NSString *_proxyAutoConfigJavaScript;
    NSURL *_proxyAutoConfigURL;
    NSArray *_supplementalMatchDomains;
    NSArray *_supplementalMatchOrders;
    bool _usePassiveFTP;
}

@property(assign,readwrite) bool FTPEnabled;
@property(assign,copy) NEProxyServer * FTPServer;
@property(assign,readwrite) bool HTTPEnabled;
@property(assign,readwrite) bool HTTPSEnabled;
@property(assign,copy) NEProxyServer * HTTPSServer;
@property(assign,copy) NEProxyServer * HTTPServer;
@property(assign,readwrite) bool RTSPEnabled;
@property(assign,copy) NEProxyServer * RTSPServer;
@property(assign,readwrite) bool SOCKSEnabled;
@property(assign,copy) NEProxyServer * SOCKSServer;
@property(assign,readwrite) bool autoProxyConfigurationEnabled;
@property(assign,readwrite) bool autoProxyDiscovery;
@property(assign,copy) NSArray * exceptionList;
@property(assign,readwrite) bool excludeSimpleHostnames;
@property(assign,readwrite) bool gopherEnabled;
@property(assign,copy) NEProxyServer * gopherServer;
@property(assign,copy) NSString * proxyAutoConfigJavaScript;
@property(assign,copy) NSURL * proxyAutoConfigURL;
@property(assign,copy) NSArray * supplementalMatchDomains;
@property(assign,copy) NSArray * supplementalMatchOrders;
@property(assign,readwrite) bool usePassiveFTP;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)FTPEnabled;
- (id)FTPServer;
- (bool)HTTPEnabled;
- (bool)HTTPSEnabled;
- (id)HTTPSServer;
- (id)HTTPServer;
- (bool)RTSPEnabled;
- (id)RTSPServer;
- (bool)SOCKSEnabled;
- (id)SOCKSServer;
- (bool)autoProxyConfigurationEnabled;
- (bool)autoProxyDiscovery;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)exceptionList;
- (bool)excludeSimpleHostnames;
- (bool)gopherEnabled;
- (id)gopherServer;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)proxyAutoConfigJavaScript;
- (id)proxyAutoConfigURL;
- (void)removeKeychainItems;
- (void)setAutoProxyConfigurationEnabled:(bool)arg1;
- (void)setAutoProxyDiscovery:(bool)arg1;
- (void)setExceptionList:(id)arg1;
- (void)setExcludeSimpleHostnames:(bool)arg1;
- (void)setFTPEnabled:(bool)arg1;
- (void)setFTPServer:(id)arg1;
- (void)setGopherEnabled:(bool)arg1;
- (void)setGopherServer:(id)arg1;
- (void)setHTTPEnabled:(bool)arg1;
- (void)setHTTPSEnabled:(bool)arg1;
- (void)setHTTPSServer:(id)arg1;
- (void)setHTTPServer:(id)arg1;
- (void)setProxyAutoConfigJavaScript:(id)arg1;
- (void)setProxyAutoConfigURL:(id)arg1;
- (void)setRTSPEnabled:(bool)arg1;
- (void)setRTSPServer:(id)arg1;
- (void)setSOCKSEnabled:(bool)arg1;
- (void)setSOCKSServer:(id)arg1;
- (void)setSupplementalMatchDomains:(id)arg1;
- (void)setSupplementalMatchOrders:(id)arg1;
- (void)setUsePassiveFTP:(bool)arg1;
- (id)supplementalMatchDomains;
- (id)supplementalMatchOrders;
- (void)syncWithKeychain;
- (bool)usePassiveFTP;

@end
