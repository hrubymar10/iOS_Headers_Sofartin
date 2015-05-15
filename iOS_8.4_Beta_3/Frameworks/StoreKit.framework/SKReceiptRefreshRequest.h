/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKReceiptRefreshRequest : SKRequest {
    NSDictionary *_properties;
}

@property(assign,readonly) NSDictionary * receiptProperties;

- (void)_handleReply:(id)arg1;
- (void)_sendXPCMessage;
- (bool)_wantsExpired;
- (bool)_wantsRevoked;
- (bool)_wantsVPP;
- (void)dealloc;
- (id)initWithReceiptProperties:(id)arg1;
- (id)receiptProperties;

@end