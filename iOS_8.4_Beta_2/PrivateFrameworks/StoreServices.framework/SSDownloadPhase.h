/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadPhase : NSObject <NSCopying, SSXPCCoding> {
    SSOperationProgress *_operationProgress;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) double estimatedSecondsRemaining;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) SSOperationProgress * operationProgress;
@property(assign,readonly) long long phaseType;
@property(assign,readonly) float progressChangeRate;
@property(assign,readonly) long long progressUnits;
@property(assign,readonly) long long progressValue;
@property(assign,readonly) Class superclass;
@property(assign,readonly) long long totalProgressValue;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (double)estimatedSecondsRemaining;
- (id)init;
- (id)initWithOperationProgress:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)operationProgress;
- (long long)phaseType;
- (float)progressChangeRate;
- (long long)progressUnits;
- (long long)progressValue;
- (long long)totalProgressValue;

@end
