/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOProxyClient : NSObject {
    NSData *_auditToken;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    bool _isApplication;
}

@property (nonatomic, retain) NSData *auditToken;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *bundleVersion;
@property (nonatomic) bool isApplication;

+ (id)compositeClientForClients:(id)arg1;
+ (id)currentClient;

- (id)URLConnectionProperties;
- (id)auditToken;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)isApplication;
- (bool)isEqual:(id)arg1;
- (void)setAuditToken:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setIsApplication:(bool)arg1;

@end
