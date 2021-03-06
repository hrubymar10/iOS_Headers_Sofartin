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

@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } beginningRect;
@property(assign,readonly) NSArray * deleteItems;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endingRect;
@property(assign,retain) UICollectionViewUpdateItem * firstUpdateItem;
@property(assign,readonly) bool hasInserts;
@property(assign,readonly) NSArray * insertItems;
@property(assign,readonly) bool isDeleteBasedGap;
@property(assign,readonly) bool isSectionBasedGap;
@property(assign,retain) UICollectionViewUpdateItem * lastUpdateItem;
@property(assign,readonly) NSArray * updateItems;

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
