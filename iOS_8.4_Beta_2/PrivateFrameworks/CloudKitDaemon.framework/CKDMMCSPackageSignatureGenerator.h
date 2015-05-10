/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSPackageSignatureGenerator : NSObject {
    void *_generator;
    bool _valid;
}

@property(assign,readwrite) void* generator;
@property(getter=isValid,assign,readwrite) bool valid;

- (char *)_finishGenerator;
- (id)dataByFinishingSignature;
- (void)dealloc;
- (void*)generator;
- (id)init;
- (bool)isValid;
- (void)setGenerator:(void*)arg1;
- (void)setValid:(bool)arg1;
- (void)updateWithData:(id)arg1;

@end