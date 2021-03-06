/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRefreshControlContentView : UIView {
    UIRefreshControl *_refreshControl;
    UIColor *_tintColor;
}

@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic, readonly) double maximumSnappingHeight;
@property (nonatomic, readonly) double minimumSnappingHeight;
@property (nonatomic) UIRefreshControl *refreshControl;
@property (nonatomic, readonly) long long style;
@property (nonatomic, retain) UIColor *tintColor;

- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (id)attributedTitle;
- (void)dealloc;
- (void)didTransitionFromState:(int)arg1 toState:(int)arg2;
- (double)maximumSnappingHeight;
- (double)minimumSnappingHeight;
- (id)refreshControl;
- (void)refreshControlInvalidatedSnappingHeight;
- (void)setAttributedTitle:(id)arg1;
- (void)setRefreshControl:(id)arg1;
- (void)setTintColor:(id)arg1;
- (long long)style;
- (id)tintColor;
- (void)willTransitionFromState:(int)arg1 toState:(int)arg2;

@end
