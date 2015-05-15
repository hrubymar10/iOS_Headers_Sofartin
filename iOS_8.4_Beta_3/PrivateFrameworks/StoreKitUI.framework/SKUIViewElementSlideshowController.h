/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIViewElementSlideshowController : NSObject <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate> {
    <SKUIViewElementSlideshowDelegate> *_delegate;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableArray *_lockups;
    SKUISlideshowViewController *_padViewController;
    SKUIIPhoneSlideshowViewController *_phoneViewController;
    long long _selectedIndex;
    NSString *_title;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIViewElementSlideshowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUIViewElementLayoutContext *layoutContext;
@property (nonatomic, readonly) long long numberOfSlideshowItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithShelf:(id)arg1 selectedLockup:(id)arg2;
- (id)layoutContext;
- (long long)numberOfItemsInSlideshowViewController:(id)arg1;
- (long long)numberOfSlideshowItems;
- (void)presentFromParentViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutContext:(id)arg1;
- (id)slideshowViewController:(id)arg1 imageAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(long long)arg2 size:(struct CGSize { double x1; double x2; }*)arg3;
- (void)slideshowViewControllerDidFinish:(id)arg1;

@end
