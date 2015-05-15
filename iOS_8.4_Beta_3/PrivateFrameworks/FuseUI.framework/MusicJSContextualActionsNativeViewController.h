/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSContextualActionsNativeViewController : MusicJSNativeViewController <MusicJSContextualActionsNativeViewController> {
    <MusicJSContextualActionsNativeViewControllerDelegate> *_delegate;
    MusicJSContextualActionsNavigationDocument *_jsContextualActionsNavigationDocument;
    MusicJSManagedObject *_jsManagedContextualActionsNavigationDocumentObject;
    IKAppDocument *_shareDocument;
    NSDictionary *_shareDocumentOptions;
}

@property(assign,readwrite) <MusicJSContextualActionsNativeViewControllerDelegate> * delegate;
@property(assign,readonly) IKJSNavigationDocument * navigationDocument;
@property(assign,readonly) IKAppDocument * shareDocument;
@property(assign,readonly) NSDictionary * shareDocumentOptions;

- (void).cxx_destruct;
- (id)delegate;
- (id)jsNavigationDocumentForJSContext:(id)arg1;
- (id)nativeViewIdentifier;
- (id)navigationDocument;
- (void)presentShareDocument:(id)arg1 :(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)shareDocument;
- (id)shareDocumentOptions;

@end