/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFlowLayoutSection : NSObject {
    double _actualGap;
    double _beginMargin;
    double _endMargin;
    bool _fixedItemSize;
    double _footerDimension;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _footerFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _frame;
    double _headerDimension;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _headerFrame;
    double _horizontalInterstice;
    long long _indexOfIncompleteRow;
    NSMutableSet *_invalidatedIndexPaths;
    bool _isValid;
    struct CGSize { 
        double width; 
        double height; 
    } _itemSize;
    NSMutableArray *_items;
    long long _itemsByRowCount;
    long long _itemsCount;
    double _lastRowActualGap;
    double _lastRowBeginMargin;
    double _lastRowEndMargin;
    bool _lastRowIncomplete;
    _UIFlowLayoutInfo *_layoutInfo;
    double _otherMargin;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _rectToKeepValid;
    struct { 
        int commonRowHorizontalAlignment; 
        int lastRowHorizontalAlignment; 
        int rowVerticalAlignment; 
    } _rowAlignmentOptions;
    NSMutableArray *_rows;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _sectionMargins;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _validItemRange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _validRect;
    double _verticalInterstice;
}

@property(assign,readonly) double actualGap;
@property(assign,readonly) double beginMargin;
@property(assign,readonly) double endMargin;
@property(assign,readwrite) bool fixedItemSize;
@property(assign,readonly) double footerDimension;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } footerFrame;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property(assign,readonly) double headerDimension;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } headerFrame;
@property(assign,readwrite) double horizontalInterstice;
@property(assign,readonly) long long indexOfIncompleteRow;
@property(assign,readonly) NSArray * invalidatedIndexPaths;
@property(assign,readwrite) struct CGSize { double x1; double x2; } itemSize;
@property(assign,readonly) NSMutableArray * items;
@property(assign,readonly) long long itemsByRowCount;
@property(assign,readwrite) long long itemsCount;
@property(assign,readonly) double lastRowActualGap;
@property(assign,readonly) double lastRowBeginMargin;
@property(assign,readonly) double lastRowEndMargin;
@property(assign,readonly) bool lastRowIncomplete;
@property(assign,readwrite) _UIFlowLayoutInfo * layoutInfo;
@property(assign,readonly) double otherMargin;
@property(assign,readwrite) struct { int x1; int x2; int x3; } rowAlignmentOptions;
@property(assign,readonly) NSMutableArray * rows;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionMargins;
@property(assign,readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } validItemRange;
@property(assign,readwrite) double verticalInterstice;

- (double)actualGap;
- (void)addInvalidatedIndexPath:(id)arg1;
- (id)addItem;
- (id)addRowAtEnd:(bool)arg1;
- (double)beginMargin;
- (void)computeLayout;
- (void)computeLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSection:(long long)arg2 invalidating:(bool)arg3;
- (id)copyFromLayoutInfo:(id)arg1;
- (void)dealloc;
- (double)endMargin;
- (long long)estimatedIndexOfItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)fixedItemSize;
- (double)footerDimension;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })footerFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndexPath:(id)arg1;
- (double)headerDimension;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })headerFrame;
- (double)horizontalInterstice;
- (long long)indexOfIncompleteRow;
- (id)init;
- (void)invalidate;
- (id)invalidatedIndexPaths;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)items;
- (long long)itemsByRowCount;
- (long long)itemsCount;
- (double)lastRowActualGap;
- (double)lastRowBeginMargin;
- (double)lastRowEndMargin;
- (bool)lastRowIncomplete;
- (id)layoutInfo;
- (void)logInvalidSizes;
- (double)otherMargin;
- (struct { int x1; int x2; int x3; })rowAlignmentOptions;
- (id)rows;
- (id)rowsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionMargins;
- (void)setEstimatedSize:(struct CGSize { double x1; double x2; })arg1 forSection:(long long)arg2;
- (void)setFixedItemSize:(bool)arg1;
- (void)setFooterDimension:(double)arg1 forSection:(long long)arg2;
- (void)setFooterFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHeaderDimension:(double)arg1 forSection:(long long)arg2;
- (void)setHeaderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHorizontalInterstice:(double)arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemsCount:(long long)arg1;
- (void)setLayoutInfo:(id)arg1;
- (void)setRowAlignmentOptions:(struct { int x1; int x2; int x3; })arg1;
- (void)setSectionMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1 forItemAtIndexPath:(id)arg2;
- (void)setVerticalInterstice:(double)arg1;
- (void)sizeChangedForItem:(id)arg1 atIndexPath:(id)arg2 inRow:(id)arg3;
- (id)snapshot;
- (void)updateEstimatedSizeForSection:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })validItemRange;
- (double)verticalInterstice;

@end
