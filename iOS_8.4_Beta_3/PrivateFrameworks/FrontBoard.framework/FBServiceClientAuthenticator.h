/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBServiceClientAuthenticator : NSObject {
    unsigned long long _credentials;
    NSString *_entitlement;
}

+ (id)sharedForegroundUIAppClientAuthenticator;
+ (id)sharedSystemClientAuthenticator;
+ (id)sharedUIAppClientAuthenticator;

- (int)_authenticateAuditToken:(struct { unsigned int x1[8]; }*)arg1 connection:(id)arg2 entitlement:(id)arg3 withResult:(id)arg4;
- (int)authenticateAuditToken:(struct { unsigned int x1[8]; }*)arg1 forEntitlement:(id)arg2 withResult:(id)arg3;
- (int)authenticateAuditToken:(struct { unsigned int x1[8]; }*)arg1 withResult:(id)arg2;
- (int)authenticateConnection:(id)arg1 forEntitlement:(id)arg2 withResult:(id)arg3;
- (int)authenticateConnection:(id)arg1 withResult:(id)arg2;
- (id)init;
- (id)initWithCredentials:(unsigned long long)arg1;
- (id)initWithEntitlement:(id)arg1;
- (id)initWithEntitlement:(id)arg1 additionalCredentials:(unsigned long long)arg2;

@end
