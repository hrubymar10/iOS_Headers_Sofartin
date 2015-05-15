/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewUpdateGap : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _beginningRect;
    NSMutableArray *_deleteItems;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _endingRect;
    UICollectionViewUpdateItem *_firstUpdateItem;
    NSMutableArray *_insertItems;
    UICollectionViewUpdateItem *_lastUpdateItem;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } beginningRect;
@property (nonatomic, readonly) NSArray *deleteItems;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endingRect;
@property (nonatomic, retain) UICollectionViewUpdateItem *firstUpdateItem;
@property (nonatomic, readonly) bool hasInserts;
@property (nonatomic, readonly) NSArray *insertItems;
@property (nonatomic, readonly) bool isDeleteBasedGap;
@property (nonatomic, readonly) bool isSectionBasedGap;
@property (nonatomic, retain) UICollectionViewUpdateItem *lastUpdateItem;
@property (nonatomic, readonly) NSArray *updateItems;

+ (id)gapWithUpdateItem:(id)arg1;

- (void)addUpdateItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })beginningRect;
- (void)dealloc;
- (id)deleteItems;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endingRect;
- (id)firstUpdateItem;
- (bool)hasInserts;
- (id)init;
- (id)insertItems;
- (bool)isDeleteBasedGap;
- (bool)isSectionBasedGap;
- (id)lastUpdateItem;
- (void)setBeginningRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEndingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFirstUpdateItem:(id)arg1;
- (void)setLastUpdateItem:(id)arg1;
- (id)updateItems;

@end
