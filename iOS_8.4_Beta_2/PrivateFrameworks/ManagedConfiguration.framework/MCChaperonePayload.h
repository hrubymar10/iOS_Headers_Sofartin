/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCChaperonePayload : MCPayload {
    bool _nonChaperonePairingAllowed;
    NSNumber *_nonChaperonePairingAllowedNum;
    NSData *_pairingCertificateData;
}

@property(assign,readonly) bool nonChaperonePairingAllowed;
@property(assign,readonly) NSNumber * nonChaperonePairingAllowedNum;
@property(assign,retain) NSData * pairingCertificateData;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)nonChaperonePairingAllowed;
- (id)nonChaperonePairingAllowedNum;
- (id)pairingCertificateData;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
