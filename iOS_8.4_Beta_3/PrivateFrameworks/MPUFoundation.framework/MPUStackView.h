/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUStackView : UIView {
    struct { 
        struct CGSize { 
            double width; 
            double height; 
        } baseSize; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } bounds; 
        struct CGPoint { 
            double x; 
            double y; 
        } centerInLocalCoordinates; 
        bool forcesIntegralX; 
        bool forcesIntegralY; 
        struct UIOffset { 
            double horizontal; 
            double vertical; 
        } maximumRelativeOffsetStep; 
        double scale; 
        struct CGSize { 
            double width; 
            double height; 
        } sizeInsetStep; 
        struct CGPoint { 
            double x; 
            double y; 
        } vanishingPoint; 
    } _configuration;
    <MPUStackViewDataSource> *_dataSource;
    long long _distanceIgnoreCount;
    Class _itemClass;
    NSString *_itemReuseIdentifier;
    NSMutableArray *_items;
    long long _numberOfItems;
    UIView *_perspectiveTargetView;
    UIWindow *_window;
}

@property (nonatomic) struct CGSize { double x1; double x2; } baseSize;
@property (nonatomic) <MPUStackViewDataSource> *dataSource;
@property (nonatomic) bool forcesIntegralX;
@property (nonatomic) bool forcesIntegralY;
@property (nonatomic, readonly) Class itemClass;
@property (nonatomic, readonly) NSString *itemReuseIdentifier;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic) struct UIOffset { double x1; double x2; } maximumRelativeOffsetStep;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic) UIView *perspectiveTargetView;
@property (nonatomic) struct CGSize { double x1; double x2; } sizeInsetStep;
@property (nonatomic) struct CGPoint { double x1; double x2; } vanishingPoint;

- (void).cxx_destruct;
- (id)_dequeueReusableItem;
- (void)_updateGeometryFieldsInConfiguration;
- (struct CGSize { double x1; double x2; })baseSize;
- (void)beginIgnoringDistanceUpdates;
- (id)dataSource;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)endIgnoringDistanceUpdates;
- (bool)forcesIntegralX;
- (bool)forcesIntegralY;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 itemClass:(Class)arg2 itemReuseIdentifier:(id)arg3;
- (id)itemAtIndex:(long long)arg1;
- (Class)itemClass;
- (id)itemReuseIdentifier;
- (id)items;
- (void)layoutSubviews;
- (struct UIOffset { double x1; double x2; })maximumRelativeOffsetStep;
- (long long)numberOfItems;
- (id)perspectiveTargetView;
- (struct UIOffset { double x1; double x2; })relativeOffsetOfItemAtIndex:(double)arg1 withCenter:(struct CGPoint { double x1; double x2; })arg2;
- (void)reloadData;
- (void)reloadDataWithTransition:(long long)arg1;
- (void)setBaseSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setForcesIntegralX:(bool)arg1;
- (void)setForcesIntegralY:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaximumRelativeOffsetStep:(struct UIOffset { double x1; double x2; })arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setSizeInsetStep:(struct CGSize { double x1; double x2; })arg1;
- (void)setVanishingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeInsetStep;
- (struct CGSize { double x1; double x2; })sizeOfItemAtIndex:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (struct CGPoint { double x1; double x2; })vanishingPoint;

@end
