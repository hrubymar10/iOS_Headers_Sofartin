/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDDataLabel : NSObject {
    unsigned long long mContentFormatId;
    OADGraphicProperties *mGraphicProperties;
    bool mIsPositionAffineTransform;
    int mPosition;
    EDResources *mResources;
    double mRotation;
    bool mShowBubbleSize;
    bool mShowCategoryName;
    bool mShowLeaderLines;
    bool mShowLegendKey;
    bool mShowPercent;
    bool mShowSeriesName;
    bool mShowValue;
    unsigned long long mStringIndex;
}

+ (id)dataLabelWithResources:(id)arg1;

- (id)contentFormat;
- (unsigned long long)contentFormatId;
- (void)dealloc;
- (id)graphicProperties;
- (id)initWithResources:(id)arg1;
- (bool)isPositionAffineTransform;
- (bool)isShowBubbleSize;
- (bool)isShowCategoryName;
- (bool)isShowLeaderLines;
- (bool)isShowLegendKey;
- (bool)isShowPercent;
- (bool)isShowSeriesName;
- (bool)isShowValue;
- (int)position;
- (double)rotationAngle;
- (void)setContentFormat:(id)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setIsPositionAffineTransform:(bool)arg1;
- (void)setPosition:(int)arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setShowBubbleSize:(bool)arg1;
- (void)setShowCategoryName:(bool)arg1;
- (void)setShowLeaderLines:(bool)arg1;
- (void)setShowLegendKey:(bool)arg1;
- (void)setShowPercent:(bool)arg1;
- (void)setShowSeriesName:(bool)arg1;
- (void)setShowValue:(bool)arg1;
- (void)setString:(id)arg1;
- (void)setStringIndex:(unsigned long long)arg1;
- (id)string;
- (unsigned long long)stringIndex;

@end