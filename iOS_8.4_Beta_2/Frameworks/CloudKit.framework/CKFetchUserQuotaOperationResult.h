/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchUserQuotaOperationResult : CKOperationResult <NSSecureCoding> {
    unsigned long long _quotaAvailable;
}

@property(assign,readwrite) unsigned long long quotaAvailable;

+ (bool)supportsSecureCoding;

- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)quotaAvailable;
- (void)setQuotaAvailable:(unsigned long long)arg1;

@end
