/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadManifestResponse : NSObject <NSCoding, SSXPCCoding> {
    NSArray *_validDownloads;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSArray * validDownloads;

- (id)copyXPCEncoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setValidDownloads:(id)arg1;
- (id)validDownloads;

@end