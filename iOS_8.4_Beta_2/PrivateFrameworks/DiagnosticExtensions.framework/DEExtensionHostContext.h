/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

@interface DEExtensionHostContext : NSExtensionContext <DEExtensionHostProtocol>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)attachmentListWithHandler:(id)arg1;
- (void)attachmentsWithParams:(id)arg1 withHandler:(id)arg2;
- (void)canEnableLoggingWithHandler:(id)arg1;
- (void)disableLoggingWithHandler:(id)arg1;
- (void)enableLoggingWithHandler:(id)arg1;
- (id)extensionAPIProxy;
- (bool)hasEntitlement;
- (void)initExtensionWithHandler:(id)arg1;
- (void)isLoggingEnabledHandler:(id)arg1;

@end