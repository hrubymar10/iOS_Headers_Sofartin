/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextSelectionRect : NSObject

@property(assign,readonly) bool containsEnd;
@property(assign,readonly) bool containsStart;
@property(getter=_isImpl,assign,readonly) UITextSelectionRectImpl * isImpl;
@property(assign,readonly) bool isVertical;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property(assign,readonly) long long writingDirection;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endEdgeFromRects:(id)arg1;
+ (bool)endIsHorizontal:(id)arg1;
+ (id)endRectFromRects:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startEdgeFromRects:(id)arg1;
+ (bool)startIsHorizontal:(id)arg1;
+ (id)startRectFromRects:(id)arg1;

- (id)_isImpl;
- (bool)containsEnd;
- (bool)containsStart;
- (bool)isVertical;
- (id)range;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (long long)writingDirection;

@end
