/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCSCEPPayload : MCCertificatePayload {
    NSArray *_CACaps;
    NSData *_CAFingerprint;
    NSString *_CAInstanceName;
    NSString *_URLString;
    NSString *_challenge;
    unsigned long long _keySize;
    unsigned long long _retries;
    unsigned long long _retryDelay;
    NSArray *_subject;
    NSDictionary *_subjectAltName;
    int _usageFlags;
}

@property(assign,retain) NSArray * CACaps;
@property(assign,retain) NSData * CAFingerprint;
@property(assign,retain) NSString * CAInstanceName;
@property(assign,retain) NSString * URLString;
@property(assign,retain) NSString * challenge;
@property(assign,readonly) unsigned long long keySize;
@property(assign,readonly) unsigned long long retries;
@property(assign,readonly) unsigned long long retryDelay;
@property(assign,retain) NSArray * subject;
@property(assign,retain) NSDictionary * subjectAltName;
@property(assign,readonly) int usageFlags;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)CACaps;
- (id)CAFingerprint;
- (id)CAInstanceName;
- (id)URLString;
- (id)challenge;
- (struct __SecCertificate { }*)copyCertificate;
- (struct __SecIdentity { }*)copyIdentityFromKeychain;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)isIdentity;
- (bool)isRoot;
- (unsigned long long)keySize;
- (id)payloadDescriptionKeyValueSections;
- (unsigned long long)retries;
- (unsigned long long)retryDelay;
- (id)stubDictionary;
- (id)subject;
- (id)subjectAltName;
- (int)usageFlags;

@end
