/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKVideoTrimController : NSObject <UINavigationControllerDelegate, UIVideoEditorControllerDelegatePrivate> {
    <CKTrimControllerDelegate> *_delegate;
    UIVideoEditorController *_editVideoVC;
    CKMediaObject *_originalMediaObject;
    CKMediaObject *_trimmedMediaObject;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <CKTrimControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,retain) UIVideoEditorController * editVideoVC;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) CKMediaObject * originalMediaObject;
@property(assign,readonly) Class superclass;
@property(assign,retain) CKMediaObject * trimmedMediaObject;

- (void)dealloc;
- (id)delegate;
- (id)editVideoVC;
- (id)initWithMediaObject:(id)arg1 maxTrimDuration:(double)arg2;
- (id)originalMediaObject;
- (void)setDelegate:(id)arg1;
- (void)setEditVideoVC:(id)arg1;
- (void)setOriginalMediaObject:(id)arg1;
- (void)setTrimmedMediaObject:(id)arg1;
- (id)trimmedMediaObject;
- (void)videoEditorController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2;
- (void)videoEditorController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)videoEditorControllerDidCancel:(id)arg1;

@end
