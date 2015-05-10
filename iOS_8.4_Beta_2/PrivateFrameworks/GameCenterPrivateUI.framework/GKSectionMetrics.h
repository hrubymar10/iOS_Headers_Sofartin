/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSectionMetrics : GKGridLayoutMetrics {
    unsigned long long _alignment;
    double _desiredItemHeight;
    double _desiredItemWidth;
    double _flowColumnWidth;
    unsigned long long _flowMaxColumnCount;
    bool _incrementalRevealConsumesPadding;
    unsigned long long _incrementalRevealItemCount;
    double _interitemSpacing;
    NSDictionary *_itemHeightList;
    unsigned long long _lastLineItemAlignment;
    double _lineSpacing;
    double _marginBetweenItems;
    unsigned long long _maximumVisibleItemCount;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _padding;
    bool _shouldAlwaysIncludeShowMore;
    bool _shouldShowSectionHeadersWhenNoItems;
}

@property(assign,readwrite) unsigned long long alignment;
@property(assign,readonly) double calculatedItemHeight;
@property(assign,readwrite) double desiredItemHeight;
@property(assign,readwrite) double desiredItemWidth;
@property(assign,readwrite) double flowColumnWidth;
@property(assign,readwrite) unsigned long long flowMaxColumnCount;
@property(assign,readwrite) bool incrementalRevealConsumesPadding;
@property(assign,readwrite) unsigned long long incrementalRevealItemCount;
@property(assign,readwrite) double interitemSpacing;
@property(assign,retain) NSDictionary * itemHeightList;
@property(assign,readwrite) unsigned long long lastLineItemAlignment;
@property(assign,readwrite) double lineSpacing;
@property(assign,readwrite) double marginBetweenItems;
@property(assign,readwrite) unsigned long long maximumVisibleItemCount;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property(assign,readwrite) double sectionHeaderHeight;
@property(assign,readwrite) bool sectionHeadersShouldPin;
@property(assign,readwrite) bool shouldAlwaysIncludeShowMore;
@property(assign,readwrite) bool shouldShowSectionHeadersWhenNoItems;
@property(assign,readwrite) double showMoreHeight;

+ (id)metricsForIdiom:(long long)arg1;

- (unsigned long long)alignment;
- (double)calculatedItemHeight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)desiredItemHeight;
- (double)desiredItemWidth;
- (double)flowColumnWidth;
- (unsigned long long)flowMaxColumnCount;
- (bool)incrementalRevealConsumesPadding;
- (unsigned long long)incrementalRevealItemCount;
- (id)init;
- (id)initWithIdiom:(long long)arg1;
- (double)interitemSpacing;
- (bool)isEqual:(id)arg1;
- (id)itemHeightList;
- (struct CGSize { double x1; double x2; })itemSizeForCollectionView:(id)arg1;
- (unsigned long long)lastLineItemAlignment;
- (double)lineSpacing;
- (id)localDescription;
- (double)marginBetweenItems;
- (unsigned long long)maximumVisibleItemCount;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (double)sectionHeaderHeight;
- (bool)sectionHeadersShouldPin;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setDesiredItemHeight:(double)arg1;
- (void)setDesiredItemWidth:(double)arg1;
- (void)setFlowColumnWidth:(double)arg1;
- (void)setFlowMaxColumnCount:(unsigned long long)arg1;
- (void)setIncrementalRevealConsumesPadding:(bool)arg1;
- (void)setIncrementalRevealItemCount:(unsigned long long)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setItemHeightList:(id)arg1;
- (void)setLastLineItemAlignment:(unsigned long long)arg1;
- (void)setLineSpacing:(double)arg1;
- (void)setMarginBetweenItems:(double)arg1;
- (void)setMaximumVisibleItemCount:(unsigned long long)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSectionHeaderHeight:(double)arg1;
- (void)setSectionHeadersShouldPin:(bool)arg1;
- (void)setShouldAlwaysIncludeShowMore:(bool)arg1;
- (void)setShouldShowSectionHeadersWhenNoItems:(bool)arg1;
- (void)setShowMoreHeight:(double)arg1;
- (bool)shouldAlwaysIncludeShowMore;
- (bool)shouldShowSectionHeadersWhenNoItems;
- (double)showMoreHeight;

@end