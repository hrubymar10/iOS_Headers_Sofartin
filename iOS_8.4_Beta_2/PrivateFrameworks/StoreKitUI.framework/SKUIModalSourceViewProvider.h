/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIModalSourceViewProvider : NSObject {
    <SKUIModalSourceViewProviderDelegate> *_delegate;
    bool _hideOriginalSourceView;
    UIView *_originalSourceView;
    UIBarButtonItem *_sourceButtonBarItem;
    id _userInfo;
}

@property(assign,readwrite) <SKUIModalSourceViewProviderDelegate> * delegate;
@property(assign,retain) UIView * originalSourceView;
@property(assign,retain) UIBarButtonItem * sourceButtonBarItem;
@property(assign,retain) id userInfo;

- (void).cxx_destruct;
- (id)animationView;
- (id)delegate;
- (void)hideOriginalSourceView;
- (id)originalSourceView;
- (void)setDelegate:(id)arg1;
- (void)setOriginalSourceView:(id)arg1;
- (void)setSourceButtonBarItem:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)showOriginalSourceView;
- (id)sourceButtonBarItem;
- (id)userInfo;

@end