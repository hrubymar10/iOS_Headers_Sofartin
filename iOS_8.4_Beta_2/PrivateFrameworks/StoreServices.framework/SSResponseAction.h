/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSResponseAction : NSObject <NSCopying> {
    SSAccount *_account;
    NSString *_actionType;
    NSString *_clientIdentifier;
    NSString *_creditsString;
    SSDialog *_dialog;
    NSString *_footerSection;
    NSURL *_url;
    long long _urlBagType;
}

@property(assign,readonly) NSURL * URL;
@property(assign,readonly) long long URLBagType;
@property(assign,readonly) SSAccount * account;
@property(assign,readonly) NSString * actionType;
@property(assign,readonly) NSString * clientIdentifier;
@property(assign,readonly) NSString * creditsString;
@property(assign,readonly) SSDialog * dialog;
@property(assign,readonly) NSString * footerSection;

+ (id)_actionWithActionType:(id)arg1;
+ (id)_checkInAppQueueActionWithClientID:(id)arg1 environment:(id)arg2;
+ (id)_dialogActionWithDialog:(id)arg1;
+ (id)_invalidateURLBagsAction;
+ (id)_selectFooterActionWithSection:(id)arg1;
+ (id)_setActiveAccountActionWithAccount:(id)arg1;
+ (id)_setCreditsActionWithCredits:(id)arg1 account:(id)arg2;
+ (id)_urlActionWithType:(id)arg1 URL:(id)arg2;

- (id)URL;
- (long long)URLBagType;
- (id)account;
- (id)actionType;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creditsString;
- (void)dealloc;
- (id)description;
- (id)dialog;
- (id)footerSection;

@end
