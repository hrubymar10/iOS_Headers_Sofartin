/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartValueAxisRenderer : TSCHChartAxisRenderer {
    unsigned long long mEditingLabelIndex;
}

- (void)drawIntoLayer:(int)arg1 inContext:(struct CGContext { }*)arg2 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)labelStringForAxis:(id)arg1 index:(unsigned long long)arg2;
- (id)labelsLayoutItem;
- (id)transparencyLayers;
- (double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2;
- (id)valueAxisLayoutItem;

@end
