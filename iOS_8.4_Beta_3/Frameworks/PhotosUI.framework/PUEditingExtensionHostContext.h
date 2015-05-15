/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUEditingExtensionHostContext : NSExtensionContext <PUEditingExtensionHost> {
    id _contentEditingOutputCommitHandler;
}

@property (copy) id contentEditingOutputCommitHandler;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)commitContentEditingOutput:(id)arg1 withCompletionHandler:(id)arg2;
- (id)contentEditingOutputCommitHandler;
- (void)setContentEditingOutputCommitHandler:(id)arg1;

@end
