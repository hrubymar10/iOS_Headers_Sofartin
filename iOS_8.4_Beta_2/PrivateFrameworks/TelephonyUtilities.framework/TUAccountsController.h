/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAccountsController : NSObject {
    int _outgoingRelayCallerIDChangedToken;
    NSXPCConnection *_xpcConnection;
}

@property(assign,copy) NSString * formattedOutgoingRelayCallerID;
@property(assign,copy) NSString * outgoingRelayCallerID;
@property(assign,readwrite) int outgoingRelayCallerIDChangedToken;
@property(assign,retain) NSXPCConnection * xpcConnection;

- (void)_setUpXPCConnection;
- (void)_tearDownXPCConnection;
- (void)dealloc;
- (id)formattedOutgoingRelayCallerID;
- (id)init;
- (id)outgoingRelayCallerID;
- (int)outgoingRelayCallerIDChangedToken;
- (void)setOutgoingRelayCallerIDChangedToken:(int)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end