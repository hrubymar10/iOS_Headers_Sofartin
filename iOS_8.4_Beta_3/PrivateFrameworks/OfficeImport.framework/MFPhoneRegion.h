/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhoneRegion : MFRegion {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } m_bounds;
    OITSDBezierPath *m_path;
}

- (id).cxx_construct;
- (void)dealloc;
- (int)fill:(id)arg1 :(id)arg2;
- (int)frame:(id)arg1 :(id)arg2;
- (id)initWithPath:(id)arg1 :(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithRects:(id)arg1 :(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 :(id)arg3;
- (int)invert:(id)arg1;
- (int)setClip:(id)arg1 :(int)arg2;

@end
