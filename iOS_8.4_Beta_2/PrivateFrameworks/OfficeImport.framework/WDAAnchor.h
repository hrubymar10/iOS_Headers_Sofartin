/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDAAnchor : NSObject {
    bool mAllowOverlap;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } mBounds;
    int mHorizontalPosition;
    int mRelativeHorizontalPosition;
    int mRelativeVerticalPosition;
    NSArray *mTextWrapPoints;
    int mTextWrappingMode;
    int mTextWrappingModeType;
    int mVerticalPosition;
    double mWrapDistanceBottom;
    double mWrapDistanceLeft;
    double mWrapDistanceRight;
    double mWrapDistanceTop;
    long long mZIndex;
}

@property(assign,readwrite) bool allowOverlap;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property(assign,readwrite) int horizontalPosition;
@property(assign,readwrite) int relativeHorizontalPosition;
@property(assign,readwrite) int relativeVerticalPosition;
@property(assign,retain) NSArray * textWrapPoints;
@property(assign,readwrite) int textWrappingMode;
@property(assign,readwrite) int textWrappingModeType;
@property(assign,readwrite) int verticalPosition;
@property(assign,readwrite) double wrapDistanceBottom;
@property(assign,readwrite) double wrapDistanceLeft;
@property(assign,readwrite) double wrapDistanceRight;
@property(assign,readwrite) double wrapDistanceTop;
@property(assign,readwrite) long long zIndex;

+ (id)stringForTextWrappingModeType:(int)arg1;

- (id).cxx_construct;
- (bool)allowOverlap;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (int)horizontalPosition;
- (id)init;
- (int)relativeHorizontalPosition;
- (int)relativeVerticalPosition;
- (void)setAllowOverlap:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHorizontalPosition:(int)arg1;
- (void)setRelativeHorizontalPosition:(int)arg1;
- (void)setRelativeVerticalPosition:(int)arg1;
- (void)setTextWrapPoints:(id)arg1;
- (void)setTextWrappingMode:(int)arg1;
- (void)setTextWrappingModeType:(int)arg1;
- (void)setVerticalPosition:(int)arg1;
- (void)setWrapDistanceBottom:(double)arg1;
- (void)setWrapDistanceLeft:(double)arg1;
- (void)setWrapDistanceRight:(double)arg1;
- (void)setWrapDistanceTop:(double)arg1;
- (void)setZIndex:(long long)arg1;
- (id)textWrapPoints;
- (int)textWrappingMode;
- (int)textWrappingModeType;
- (int)verticalPosition;
- (double)wrapDistanceBottom;
- (double)wrapDistanceLeft;
- (double)wrapDistanceRight;
- (double)wrapDistanceTop;
- (long long)zIndex;

@end