/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageReformattingContext : NSObject {
    DOMNode *_body;
    NSMutableArray *_changes;
    DOMDocument *_document;
    bool _documentContainsAnyWebKitTransform;
    DOMRange *_firstTextRange;
    bool _floatsNeedUpdate;
    bool _hasAnyLeftFloat;
    double _maximumWidth;
    double _meanWidth;
    bool _metricsNeedUpdate;
    double _minimumRescalingFactor;
    NSArray *_rightFloats;
    double _widthDeviation;
}

@property (nonatomic, readonly) DOMNode *body;
@property (nonatomic, readonly) bool didChangeDocument;
@property (nonatomic, readonly) DOMDocument *document;
@property (nonatomic, retain) DOMRange *firstTextRange;
@property (nonatomic, readonly) bool hasAnyLeftFloat;
@property (nonatomic, readonly) bool hasAnyRightFloat;
@property (nonatomic, readonly) double maximumWidth;
@property (nonatomic, readonly) double meanWidth;
@property (nonatomic) double minimumRescalingFactor;
@property (nonatomic, readonly, copy) NSArray *rightFloats;
@property (nonatomic, readonly) double widthDeviation;

- (void)_rollBackChange:(id)arg1;
- (void)_updateFloatsIfNecessary;
- (void)_updateMetricsIfNecessary;
- (id)body;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxOf:(id)arg1;
- (bool)changeMarginOfElement:(id)arg1 priority:(id)arg2 usingBlock:(id)arg3;
- (void)changeProprety:(id)arg1 ofElement:(id)arg2 toValue:(id)arg3 priority:(id)arg4;
- (bool)changeSizeOfElement:(id)arg1 priority:(id)arg2 usingBlock:(id)arg3;
- (void)dealloc;
- (bool)didChangeDocument;
- (id)document;
- (id)firstTextRange;
- (bool)hasAnyLeftFloat;
- (bool)hasAnyRightFloat;
- (id)initWithDocument:(id)arg1;
- (double)maximumWidth;
- (double)meanWidth;
- (double)minimumRescalingFactor;
- (bool)rescaleElement:(id)arg1 withScale:(double)arg2;
- (bool)resizeElement:(id)arg1 withScale:(double)arg2 verificationBlock:(id)arg3;
- (id)rightFloats;
- (void)rollBackAllChanges;
- (void)rollBackLastChangeForElement:(id)arg1;
- (void)setFirstTextRange:(id)arg1;
- (void)setMinimumRescalingFactor:(double)arg1;
- (double)widthDeviation;

@end
