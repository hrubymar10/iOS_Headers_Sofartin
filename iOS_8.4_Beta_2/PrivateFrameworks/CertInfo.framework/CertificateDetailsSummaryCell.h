/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertificateDetailsSummaryCell : CertUIItemDetailsSummaryCell {
    NSArray *_details;
}

@property(assign,retain) NSArray * details;

- (void).cxx_destruct;
- (id)details;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setCertificateTrust:(struct __SecTrust { }*)arg1 certificateExpiration:(id)arg2 certificateIsTrusted:(bool)arg3;
- (void)setDetails:(id)arg1;
- (void)setDetailsWithCertificateTrust:(struct __SecTrust { }*)arg1 certificateExpiration:(id)arg2 certificateIsTrusted:(bool)arg3;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
