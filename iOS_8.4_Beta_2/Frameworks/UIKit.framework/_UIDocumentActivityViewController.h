/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentActivityViewController : UIActivityViewController {
    UIDocumentInteractionController *_documentInteractionController;
    bool _hideSystemActivities;
    bool hideSystemActivities;
}

@property(assign,readwrite) UIDocumentInteractionController * documentInteractionController;
@property(assign,readwrite) bool hideSystemActivities;

- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (bool)_shouldShowSystemActivity:(id)arg1;
- (id)documentInteractionController;
- (bool)hideSystemActivities;
- (void)setDocumentInteractionController:(id)arg1;
- (void)setHideSystemActivities:(bool)arg1;
- (bool)sourceIsManaged;

@end
