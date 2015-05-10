/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGSignatureDissector : NSObject <SGPipelineDissector>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (void)initialize;

- (void)dissect:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })findSignaturePrefix:(id)arg1;
- (id)findSignaturePrefixesInEntity:(id)arg1 withSignaturePrefixes:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })findValediction:(id)arg1;
- (id)findValedictionCommencedSignatureRanges:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hmmPlausibleSignatureRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hmmSignatureRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hmmSignatureRangeWithContent:(id)arg1 detectedData:(id)arg2 quotedRegions:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })miniSignatureRange:(id)arg1;
- (bool)shouldIgnoreSignature:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })signatureRange:(id)arg1;

@end