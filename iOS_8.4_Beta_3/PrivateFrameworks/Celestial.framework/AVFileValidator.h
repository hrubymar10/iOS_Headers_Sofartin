/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVFileValidator : NSObject {
    struct AVFileValidatorPrivate { id x1; id x2; struct FigOpaqueMediaValidator {} *x3; struct FigMediaValidatorDataLocation { unsigned long long x_4_1_1; unsigned long long x_4_1_2; } x4; struct OpaqueCMByteStream {} *x5; bool x6; bool x7; id x8; } *_priv;
    NSString *_validationRules;
}

@property(assign,retain) NSString * validationRules;

- (void)cancel;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (bool)isCompleted;
- (bool)isStreaming;
- (id)notificationForFileCheckResult:(id)arg1;
- (void)postNotificationForCallback:(id)arg1;
- (float)progress;
- (void)setValidationRules:(id)arg1;
- (id)url;
- (void)validate;
- (id)validateBlocking:(bool)arg1;
- (void)validateForCameraRoll;
- (bool)validateSyncWithError:(id*)arg1;
- (id)validationRules;

@end
