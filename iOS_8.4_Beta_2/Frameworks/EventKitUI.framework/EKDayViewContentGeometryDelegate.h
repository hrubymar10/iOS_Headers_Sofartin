/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayViewContentGeometryDelegate : NSObject <CUIKSingleDayTimelineGeometryDelegate> {
    EKDayViewContent *_dayViewContent;
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
}

@property(assign,readwrite) EKDayViewContent * dayViewContent;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } displayedRect;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) double hourHeight;
@property(assign,readonly) bool originIsUpperLeft;
@property(assign,readonly) Class superclass;
@property(assign,readonly) double timeWidth;
@property(assign,readonly) double topPadding;

- (void).cxx_destruct;
- (double)dateForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)dayViewContent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })displayedRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (double)hourHeight;
- (bool)originIsUpperLeft;
- (struct CGPoint { double x1; double x2; })pointForDate:(double)arg1;
- (void)setDayViewContent:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)timeWidth;
- (double)topPadding;

@end
