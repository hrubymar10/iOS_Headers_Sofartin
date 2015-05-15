/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedCell : UICollectionViewCell <UIGestureRecognizerDelegate> {
    UITapGestureRecognizer *__tapGestureRecognizer;
    <PUFeedCellDelegate> *_delegate;
    NSIndexPath *_indexPath;
    NSString *_representedElementKind;
    bool _tappable;
}

@property(setter=_setTapGestureRecognizer:,assign,retain) UITapGestureRecognizer * _tapGestureRecognizer;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <PUFeedCellDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSIndexPath * indexPath;
@property(assign,retain) NSString * representedElementKind;
@property(assign,readonly) Class superclass;
@property(getter=isTappable,assign,readwrite) bool tappable;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)_setTapGestureRecognizer:(id)arg1;
- (id)_tapGestureRecognizer;
- (void)_updateTapGestureRecognizer;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)indexPath;
- (bool)isTappable;
- (id)representedElementKind;
- (void)setDelegate:(id)arg1;
- (void)setIndexPath:(id)arg1;
- (void)setRepresentedElementKind:(id)arg1;
- (void)setTappable:(bool)arg1;
- (bool)shouldRecognizerTap:(id)arg1;

@end
