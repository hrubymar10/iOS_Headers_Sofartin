/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PT2DGraphView : UIView {
    NSArray *_data;
    UIColor *_dataColor;
    struct CGSize { 
        double width; 
        double height; 
    } _datumSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _edgeInsets;
    UIColor *_groundColor;
    struct CGPoint { 
        double x; 
        double y; 
    } _origin;
    NSArray *_provisionalData;
    UIColor *_provisionalDataColor;
    NSMutableArray *_provisionalDataSubviews;
    PT2DGraphAxisStyle *_xaxisStyle;
    double _xmaximum;
    double _xminimum;
    PT2DGraphAxisStyle *_yaxisStyle;
    double _ymaximum;
    double _yminimum;
}

@property (nonatomic, retain) NSArray *data;
@property (nonatomic, retain) UIColor *dataColor;
@property (nonatomic) struct CGSize { double x1; double x2; } datumSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) UIColor *groundColor;
@property (nonatomic) struct CGPoint { double x1; double x2; } origin;
@property (nonatomic, retain) NSArray *provisionalData;
@property (nonatomic, retain) UIColor *provisionalDataColor;
@property (nonatomic, retain) NSMutableArray *provisionalDataSubviews;
@property (nonatomic, retain) PT2DGraphAxisStyle *xaxisStyle;
@property (nonatomic) double xmaximum;
@property (nonatomic) double xminimum;
@property (nonatomic, retain) PT2DGraphAxisStyle *yaxisStyle;
@property (nonatomic) double ymaximum;
@property (nonatomic) double yminimum;

- (void).cxx_destruct;
- (id)data;
- (id)dataColor;
- (struct CGSize { double x1; double x2; })datumSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)groundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })origin;
- (struct CGPoint { double x1; double x2; })pointForText:(id)arg1 centeredOnPoint:(struct CGPoint { double x1; double x2; })arg2 withAttributes:(id)arg3;
- (id)provisionalData;
- (id)provisionalDataColor;
- (id)provisionalDataSubviews;
- (void)setData:(id)arg1;
- (void)setDataColor:(id)arg1;
- (void)setDatumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setGroundColor:(id)arg1;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setProvisionalData:(id)arg1;
- (void)setProvisionalDataColor:(id)arg1;
- (void)setProvisionalDataSubviews:(id)arg1;
- (void)setXaxisStyle:(id)arg1;
- (void)setXmaximum:(double)arg1;
- (void)setXminimum:(double)arg1;
- (void)setYaxisStyle:(id)arg1;
- (void)setYmaximum:(double)arg1;
- (void)setYminimum:(double)arg1;
- (id)xaxisStyle;
- (double)xmaximum;
- (double)xminimum;
- (id)yaxisStyle;
- (double)ymaximum;
- (double)yminimum;

@end
