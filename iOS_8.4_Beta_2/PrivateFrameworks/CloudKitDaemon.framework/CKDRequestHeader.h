/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRequestHeader : NSObject <NSSecureCoding> {
    NSDictionary *_headerDict;
    NSString *_method;
    NSString *_sessionConfigurationIdentifier;
    NSURL *_url;
    unsigned long long _urlSessionTaskIdentifier;
}

@property(assign,retain) NSDictionary * headerDict;
@property(assign,retain) NSString * method;
@property(assign,retain) NSString * sessionConfigurationIdentifier;
@property(assign,retain) NSURL * url;
@property(assign,readwrite) unsigned long long urlSessionTaskIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)headerDict;
- (id)initWithCoder:(id)arg1;
- (id)method;
- (id)sessionConfigurationIdentifier;
- (void)setHeaderDict:(id)arg1;
- (void)setMethod:(id)arg1;
- (void)setSessionConfigurationIdentifier:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUrlSessionTaskIdentifier:(unsigned long long)arg1;
- (id)url;
- (unsigned long long)urlSessionTaskIdentifier;

@end