/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaContentTasteItem : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, SSXPCCoding> {
    unsigned long long _contentType;
    NSString *_playlistGlobalID;
    long long _storeAdamID;
    unsigned long long _tasteType;
}

@property(assign,readonly) unsigned long long contentType;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * playlistGlobalID;
@property(assign,readonly) long long storeAdamID;
@property(assign,readonly) Class superclass;
@property(assign,readonly) unsigned long long tasteType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithMediaContentTasteItemClass:(Class)arg1;
- (unsigned long long)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)playlistGlobalID;
- (long long)storeAdamID;
- (unsigned long long)tasteType;

@end
