/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKOverflowScrollViewDelegate : NSObject <UIScrollViewDelegate> {
    bool _inUserInteraction;
    struct ScrollingTreeOverflowScrollingNodeIOS { int (**x1)(); unsigned int x2; struct OwnPtr<WTF::Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow> > { struct Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow> {} *x_3_1_1; } x3; struct ScrollingTree {} *x4; int x5; unsigned long long x6; struct ScrollingTreeNode {} *x7; struct FloatSize { float x_8_1_1; float x_8_1_2; } x8; struct FloatSize { float x_9_1_1; float x_9_1_2; } x9; struct FloatSize { float x_10_1_1; float x_10_1_2; } x10; struct FloatSize { float x_11_1_1; float x_11_1_2; } x11; struct FloatPoint { float x_12_1_1; float x_12_1_2; } x12; struct IntPoint { int x_13_1_1; int x_13_1_2; } x13; struct ScrollableAreaParameters { int x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; bool x_14_1_5; bool x_14_1_6; } x14; struct RetainPtr<CALayer> { void *x_15_1_1; } x15; struct RetainPtr<CALayer> { void *x_16_1_1; } x16; struct RetainPtr<WKOverflowScrollViewDelegate> { void *x_17_1_1; } x17; bool x18; } *_scrollingTreeNode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_isInUserInteraction, nonatomic) bool inUserInteraction;
@property (readonly) Class superclass;

- (bool)_isInUserInteraction;
- (id)initWithScrollingTreeNode:(struct ScrollingTreeOverflowScrollingNodeIOS { int (**x1)(); unsigned int x2; struct OwnPtr<WTF::Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow> > { struct Vector<WTF::RefPtr<WebCore::ScrollingTreeNode>, 0, WTF::CrashOnOverflow> {} *x_3_1_1; } x3; struct ScrollingTree {} *x4; int x5; unsigned long long x6; struct ScrollingTreeNode {} *x7; struct FloatSize { float x_8_1_1; float x_8_1_2; } x8; struct FloatSize { float x_9_1_1; float x_9_1_2; } x9; struct FloatSize { float x_10_1_1; float x_10_1_2; } x10; struct FloatSize { float x_11_1_1; float x_11_1_2; } x11; struct FloatPoint { float x_12_1_1; float x_12_1_2; } x12; struct IntPoint { int x_13_1_1; int x_13_1_2; } x13; struct ScrollableAreaParameters { int x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; bool x_14_1_5; bool x_14_1_6; } x14; struct RetainPtr<CALayer> { void *x_15_1_1; } x15; struct RetainPtr<CALayer> { void *x_16_1_1; } x16; struct RetainPtr<WKOverflowScrollViewDelegate> { void *x_17_1_1; } x17; bool x18; }*)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setInUserInteraction:(bool)arg1;

@end
