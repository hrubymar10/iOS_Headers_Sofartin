/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasLoadingView : UIView <IKAppDocumentDelegate> {
    MPUExtrasActivityIndicator *_activityIndicator;
    <MPUExtrasLoadingViewDelegate> *_delegate;
    IKAppDocument *_document;
    NSDictionary *_options;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_show;
- (void)cancelCountdownToVisibility;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (id)initWithDocument:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (void)startCountdownToVisibilityWithInterval:(double)arg1;

@end
