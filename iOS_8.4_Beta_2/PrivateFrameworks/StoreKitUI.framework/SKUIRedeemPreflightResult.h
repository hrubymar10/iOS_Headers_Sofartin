/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemPreflightResult : NSObject {
    SSAccount *_account;
    SKUIClientContext *_clientContext;
    SSVRedeemCodeMetadata *_codeMetadata;
    NSError *_error;
    SKUIRedeemConfiguration *_redeemConfiguration;
    long long _resultType;
}

@property(assign,retain) SSAccount * account;
@property(assign,retain) SKUIClientContext * clientContext;
@property(assign,retain) SSVRedeemCodeMetadata * codeMetadata;
@property(assign,copy) NSError * error;
@property(assign,retain) SKUIRedeemConfiguration * redeemConfiguration;
@property(assign,readwrite) long long resultType;

- (void).cxx_destruct;
- (id)account;
- (id)clientContext;
- (id)codeMetadata;
- (id)error;
- (id)redeemConfiguration;
- (long long)resultType;
- (void)setAccount:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setCodeMetadata:(id)arg1;
- (void)setError:(id)arg1;
- (void)setRedeemConfiguration:(id)arg1;
- (void)setResultType:(long long)arg1;

@end
