/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSStringDrawingContext : NSObject {
    double _actualScaleFactor;
    double _actualTrackingAdjustment;
    double _baselineOffset;
    double _firstBaselineOffset;
    id _layout;
    NSDictionary *_linkAttributes;
    unsigned long long _maximumNumberOfLines;
    double _minimumScaleFactor;
    double _minimumTrackingAdjustment;
    unsigned long long _numberOfLineFragments;
    double _scaledBaselineOffset;
    double _scaledLineHeight;
    struct { 
        unsigned int _wantsNumberOfLineFragments : 1; 
        unsigned int _wrapsForTruncationMode : 1; 
        unsigned int _wantsBaselineOffset : 1; 
        unsigned int _wantsScaledBaselineOffset : 1; 
        unsigned int _wantsScaledLineHeight : 1; 
        unsigned int _drawsDebugBaselines : 1; 
        unsigned int _cachesLayout : 1; 
        unsigned int _usesSimpleTextEffects : 1; 
    } _sdcFlags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _totalBounds;
}

@property(assign,readwrite) double actualScaleFactor;
@property(assign,readwrite) double actualTrackingAdjustment;
@property(assign,readwrite) double baselineOffset;
@property(assign,readwrite) bool cachesLayout;
@property(assign,readwrite) bool drawsDebugBaselines;
@property(assign,readwrite) double firstBaselineOffset;
@property(assign,retain) id layout;
@property(assign,readwrite) unsigned long long maximumNumberOfLines;
@property(assign,readwrite) double minimumScaleFactor;
@property(assign,readwrite) double minimumTrackingAdjustment;
@property(assign,readwrite) unsigned long long numberOfLineFragments;
@property(assign,readwrite) double scaledBaselineOffset;
@property(assign,readwrite) double scaledLineHeight;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } totalBounds;
@property(assign,readwrite) bool usesSimpleTextEffects;
@property(assign,readwrite) bool wantsBaselineOffset;
@property(assign,readwrite) bool wantsNumberOfLineFragments;
@property(assign,readwrite) bool wantsScaledBaselineOffset;
@property(assign,readwrite) bool wantsScaledLineHeight;
@property(assign,readwrite) bool wrapsForTruncationMode;

- (double)actualScaleFactor;
- (double)actualTrackingAdjustment;
- (double)baselineOffset;
- (bool)cachesLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)drawsDebugBaselines;
- (double)firstBaselineOffset;
- (id)layout;
- (unsigned long long)maximumNumberOfLines;
- (double)minimumScaleFactor;
- (double)minimumTrackingAdjustment;
- (unsigned long long)numberOfLineFragments;
- (double)scaledBaselineOffset;
- (double)scaledLineHeight;
- (void)setActualScaleFactor:(double)arg1;
- (void)setActualTrackingAdjustment:(double)arg1;
- (void)setBaselineOffset:(double)arg1;
- (void)setCachesLayout:(bool)arg1;
- (void)setDrawsDebugBaselines:(bool)arg1;
- (void)setFirstBaselineOffset:(double)arg1;
- (void)setLayout:(id)arg1;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setMinimumTrackingAdjustment:(double)arg1;
- (void)setNumberOfLineFragments:(unsigned long long)arg1;
- (void)setScaledBaselineOffset:(double)arg1;
- (void)setScaledLineHeight:(double)arg1;
- (void)setTotalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUsesSimpleTextEffects:(bool)arg1;
- (void)setWantsBaselineOffset:(bool)arg1;
- (void)setWantsNumberOfLineFragments:(bool)arg1;
- (void)setWantsScaledBaselineOffset:(bool)arg1;
- (void)setWantsScaledLineHeight:(bool)arg1;
- (void)setWrapsForTruncationMode:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })totalBounds;
- (bool)usesSimpleTextEffects;
- (bool)wantsBaselineOffset;
- (bool)wantsNumberOfLineFragments;
- (bool)wantsScaledBaselineOffset;
- (bool)wantsScaledLineHeight;
- (bool)wrapsForTruncationMode;

@end
