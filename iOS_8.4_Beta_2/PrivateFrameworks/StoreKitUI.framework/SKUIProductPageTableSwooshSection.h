/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageTableSwooshSection : SKUIProductPageTableSection <SKUIMissingItemDelegate, SKUISwooshViewControllerDelegate> {
    id _actionBlock;
    SKUILockupSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUIResourceLoader *_resourceLoader;
    SKUISwooshPageComponent *_swooshComponent;
    SKUILockupSwooshViewController *_swooshViewController;
}

@property(assign,copy) id actionBlock;
@property(assign,retain) SKUIColorScheme * colorScheme;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) SKUIResourceLoader * resourceLoader;
@property(assign,readonly) Class superclass;
@property(assign,readonly) UIViewController * swooshViewController;

- (void).cxx_destruct;
- (id)_artworkLoader;
- (id)_missingItemLoader;
- (id)_swooshViewController;
- (id)actionBlock;
- (id)colorScheme;
- (void)dealloc;
- (id)headerViewForTableView:(id)arg1;
- (id)initWithItems:(id)arg1 title:(id)arg2;
- (id)initWithLockups:(id)arg1 title:(id)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (id)resourceLoader;
- (void)setActionBlock:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setResourceLoader:(id)arg1;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (id)swooshViewController;

@end
