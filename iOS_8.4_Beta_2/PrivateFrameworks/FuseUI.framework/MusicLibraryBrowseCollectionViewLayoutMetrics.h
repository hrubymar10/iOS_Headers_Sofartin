/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryBrowseCollectionViewLayoutMetrics : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInsets;
    struct CGSize { 
        double width; 
        double height; 
    } _headerSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _headerViewContentInsets;
    double _itemHeight;
    double _itemWidth;
    double _minimumInteritemSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _sectionInsets;
    bool _wantsEdgeToEdgeLayout;
}

@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property(assign,readwrite) struct CGSize { double x1; double x2; } headerSize;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } headerViewContentInsets;
@property(assign,readwrite) double itemHeight;
@property(assign,readonly) struct CGSize { double x1; double x2; } itemSize;
@property(assign,readwrite) double itemWidth;
@property(assign,readwrite) double minimumInteritemSpacing;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInsets;
@property(assign,readwrite) bool wantsEdgeToEdgeLayout;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)description;
- (struct CGSize { double x1; double x2; })headerSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerViewContentInsets;
- (double)itemHeight;
- (struct CGSize { double x1; double x2; })itemSize;
- (double)itemWidth;
- (double)minimumInteritemSpacing;
- (void)populateHorizontalMetricsWithSize:(struct CGSize { double x1; double x2; })arg1 linearRelationWidth:(struct { double x1; double x2; })arg2 maximumWidth:(double)arg3;
- (void)populateHorizontalMetricsWithSize:(struct CGSize { double x1; double x2; })arg1 minimumHorizontalEdgeSpacing:(double)arg2 maximumColumnCount:(long long)arg3 interitemSpacing:(double)arg4 minimumCellWidth:(double)arg5 traitCollection:(id)arg6;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsets;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHeaderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHeaderViewContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setItemHeight:(double)arg1;
- (void)setItemWidth:(double)arg1;
- (void)setMinimumInteritemSpacing:(double)arg1;
- (void)setSectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setWantsEdgeToEdgeLayout:(bool)arg1;
- (bool)wantsEdgeToEdgeLayout;

@end