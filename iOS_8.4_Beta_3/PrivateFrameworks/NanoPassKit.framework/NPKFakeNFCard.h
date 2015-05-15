/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKFakeNFCard : NSObject <PKSecureElementCardProtocol> {
    unsigned char _activationState;
    NSString *_aid;
    unsigned char _lifecycleState;
}

@property(assign,readwrite) unsigned char activationState;
@property(assign,retain) NSString * aid;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) unsigned char lifecycleState;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned char)activationState;
- (id)aid;
- (unsigned char)lifecycleState;
- (void)setActivationState:(unsigned char)arg1;
- (void)setAid:(id)arg1;
- (void)setLifecycleState:(unsigned char)arg1;

@end