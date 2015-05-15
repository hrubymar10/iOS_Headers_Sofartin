/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSConnectionConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    SSAccount *_account;
    NSURL *_baseURL;
    NSString *_buildIdentifier;
    NSDictionary *_cookieHeaders;
    NSNumber *_familyMemberStoreID;
    NSString *_purchaseClientIdentifier;
    long long _requestReason;
    NSString *_userAgent;
}

@property(assign,readonly) SSAccount * account;
@property(assign,readonly) NSURL * baseURL;
@property(assign,readonly) NSString * buildIdentifier;
@property(assign,readonly) NSDictionary * cookieHeaders;
@property(assign,readonly) NSNumber * familyMemberStoreID;
@property(assign,readonly) NSString * purchaseClientIdentifier;
@property(assign,readonly) long long requestReason;
@property(assign,readonly) NSString * userAgent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)baseURL;
- (id)buildIdentifier;
- (id)cookieHeaders;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)familyMemberStoreID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)purchaseClientIdentifier;
- (long long)requestReason;
- (id)userAgent;

@end
