/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPVisibleColumnProxy : NSObject <TSWPOffscreenColumn> {
    TPPageController *_pageController;
    unsigned long long _pageIndex;
}

@property(assign,readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } anchoredRange;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) unsigned long long nextWidowPullsDownFromCharIndex;
@property(assign,readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property(assign,readonly) unsigned long long startAnchoredCharIndex;
@property(assign,readonly) unsigned long long startCharIndex;
@property(assign,readonly) Class superclass;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })anchoredRange;
- (void)dealloc;
- (id)initWithPageIndex:(unsigned long long)arg1 pageController:(id)arg2;
- (unsigned long long)nextWidowPullsDownFromCharIndex;
- (const struct TSWPTargetHint { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; unsigned long long x3; struct _NSRange { unsigned long long x_4_1_1; unsigned long long x_4_1_2; } x4; unsigned long long x5; unsigned long long x6; }*)p_targetFirstHint;
- (const struct TSWPTargetHint { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; unsigned long long x3; struct _NSRange { unsigned long long x_4_1_1; unsigned long long x_4_1_2; } x4; unsigned long long x5; unsigned long long x6; }*)p_targetLastHint;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (unsigned long long)startAnchoredCharIndex;
- (unsigned long long)startCharIndex;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteLayoutCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;

@end
