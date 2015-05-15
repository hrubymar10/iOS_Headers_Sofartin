/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUDeferredUIButton : UIButton <SUDeferredUIView> {
    bool _deferredEnabled;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _deferredFrame;
    NSMutableDictionary *_deferredImages;
    NSMutableDictionary *_deferredTitles;
    bool _isDeferringInterfaceUpdates;
}

@property(assign,copy) NSString * debugDescription;
@property(getter=isDeferringInterfaceUpdates,assign,readwrite) bool deferringInterfaceUpdates;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)_commitDeferredInterfaceUpdates;
- (void)_saveCurrentStateAsDeferred;
- (void)_saveImagesAsDeferred;
- (void)_saveTitlesAsDeferred;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)imageForState:(unsigned long long)arg1;
- (bool)isDeferringInterfaceUpdates;
- (bool)isEnabled;
- (void)setDeferringInterfaceUpdates:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)titleForState:(unsigned long long)arg1;

@end
