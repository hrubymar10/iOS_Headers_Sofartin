/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UILabelScaledMetrics : NSObject {
    double _actualScaleFactor;
    double _baselineOffset;
    NSAttributedString *_scaledAttributedText;
    double _scaledBaselineOffset;
    double _scaledLineHeight;
    struct CGSize { 
        double width; 
        double height; 
    } _scaledSize;
    struct CGSize { 
        double width; 
        double height; 
    } _targetSize;
}

@property(assign,readwrite) double actualScaleFactor;
@property(assign,readwrite) double baselineOffset;
@property(assign,retain) NSAttributedString * scaledAttributedText;
@property(assign,readwrite) double scaledBaselineOffset;
@property(assign,readwrite) double scaledLineHeight;
@property(assign,readwrite) struct CGSize { double x1; double x2; } scaledSize;
@property(assign,readwrite) struct CGSize { double x1; double x2; } targetSize;

- (double)actualScaleFactor;
- (double)baselineOffset;
- (void)dealloc;
- (id)scaledAttributedText;
- (double)scaledBaselineOffset;
- (double)scaledLineHeight;
- (struct CGSize { double x1; double x2; })scaledSize;
- (void)setActualScaleFactor:(double)arg1;
- (void)setBaselineOffset:(double)arg1;
- (void)setScaledAttributedText:(id)arg1;
- (void)setScaledBaselineOffset:(double)arg1;
- (void)setScaledLineHeight:(double)arg1;
- (void)setScaledSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })targetSize;

@end
