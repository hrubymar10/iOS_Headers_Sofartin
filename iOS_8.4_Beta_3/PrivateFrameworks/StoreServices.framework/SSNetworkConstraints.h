/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSNetworkConstraints : NSObject <NSCoding, NSCopying, SSXPCCoding> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_sizeLimits;
}

@property(getter=isAnyNetworkTypeEnabled,assign,readonly) bool anyNetworkTypeEnabled;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (void)_addNetworkConstraintsToDictionary:(id)arg1 forNetworkType:(long long)arg2 legacyDictionary:(id)arg3;
+ (id)_newLegacyNetworkConstraintsWithDictionary:(id)arg1;
+ (id)_newModernNetworkConstraintsWithArray:(id)arg1;
+ (id)newNetworkConstraintsByDownloadKindFromURLBag:(id)arg1;

- (id)_copySizeLimits;
- (void)_disableAllNetworkTypes;
- (void)_setSizeLimit:(long long)arg1 forNetworkType:(long long)arg2;
- (long long)_sizeLimitForNetworkType:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (void)disableCellularNetworkTypes;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSizeLimitForNetworkType:(long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isAnyNetworkTypeEnabled;
- (bool)isEqual:(id)arg1;
- (void)setAllNetworkTypesDisabled;
- (void)setSizeLimit:(long long)arg1 forNetworkType:(long long)arg2;
- (void)setSizeLimitsWithStoreConstraintDictionary:(id)arg1;
- (long long)sizeLimitForNetworkType:(long long)arg1;

@end
