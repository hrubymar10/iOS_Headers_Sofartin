/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebOverflowScrollListener : NSObject <UIScrollViewDelegate> {
    UIWebOverflowScrollView *_scrollView;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)_didCompleteScrolling;
- (id)initWithScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;

@end
