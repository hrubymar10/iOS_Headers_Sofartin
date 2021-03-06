/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAFamilyEligibilityResponse : AAResponse {
    NSArray *_familyFeaturePrimaryDescriptions;
    NSArray *_familyFeatureSecondaryDescriptions;
    NSString *_familyFeatureSecondaryTitle;
    bool _hasPendingInvites;
    NSString *_underageEligibilityAlertMessage;
    NSString *_underageEligibilityAlertTitle;
}

@property(assign,readonly) long long eligibilityStatus;
@property(assign,readonly) bool eligible;
@property(assign,readonly) NSArray * familyFeaturePrimaryDescriptions;
@property(assign,readonly) NSArray * familyFeatureSecondaryDescriptions;
@property(assign,readonly) NSString * familyFeatureSecondaryTitle;
@property(assign,readonly) bool hasPendingInvites;
@property(assign,readonly) NSString * underageEligibilityAlertMessage;
@property(assign,readonly) NSString * underageEligibilityAlertTitle;

- (void).cxx_destruct;
- (long long)eligibilityStatus;
- (bool)eligible;
- (id)familyFeaturePrimaryDescriptions;
- (id)familyFeatureSecondaryDescriptions;
- (id)familyFeatureSecondaryTitle;
- (bool)hasPendingInvites;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)underageEligibilityAlertMessage;
- (id)underageEligibilityAlertTitle;

@end
