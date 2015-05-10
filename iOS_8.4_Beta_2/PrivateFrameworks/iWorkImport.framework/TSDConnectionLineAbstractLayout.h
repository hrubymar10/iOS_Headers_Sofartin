/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDConnectionLineAbstractLayout : TSDShapeLayout {
    struct CGPoint { 
        double x; 
        double y; 
    } mAcumulatedDrag;
    double mCachedFromOutset;
    TSUBezierPath *mCachedFromOutsetWrapPath;
    TSUBezierPath *mCachedFromWrapPath;
    double mCachedToOutset;
    TSUBezierPath *mCachedToOutsetWrapPath;
    TSUBezierPath *mCachedToWrapPath;
    TSUBezierPath *mClippedBezierPath;
    TSDLayout *mConnectedFrom;
    NSObject<TSDInfo> *mConnectedFromInfo;
    TSDInfoGeometry *mConnectedInfoGeometry;
    TSDConnectionLinePathSource *mConnectedPathSource;
    TSDLayout *mConnectedTo;
    NSObject<TSDInfo> *mConnectedToInfo;
    double mDynamicOutsetFrom;
    double mDynamicOutsetTo;
    struct CGPoint { 
        double x; 
        double y; 
    } mLooseEndPosition;
    TSDLayout *mOldConnectedFrom;
    TSDLayout *mOldConnectedTo;
    TSDConnectionLinePathSource *mOriginalPathSource;
    struct CGPoint { 
        double x; 
        double y; 
    } mResizeControlPoints;
    bool mUseDynamicOutsets;
    bool mUseResizePoints;
    bool mValidConnections;
    bool mValidLine;
    bool mVisibleLine;
}

@property(assign,readwrite) TSDLayout * connectedFrom;
@property(assign,readwrite) NSObject<TSDInfo> * connectedFromInfo;
@property(assign,readonly) TSDConnectionLinePathSource * connectedPathSource;
@property(assign,readwrite) TSDLayout * connectedTo;
@property(assign,readwrite) NSObject<TSDInfo> * connectedToInfo;
@property(assign,readwrite) double dynamicOutsetFrom;
@property(assign,readwrite) double dynamicOutsetTo;
@property(assign,readonly) double outsetFrom;
@property(assign,readonly) double outsetTo;
@property(assign,readwrite) bool useDynamicOutsets;
@property(assign,readonly) bool validLine;

- (id)additionalLayoutsForRepCreation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (bool)canBeIntersected;
- (bool)canEndpointsCoincide;
- (bool)canFlip;
- (bool)canResetTextAndObjectHandles;
- (void)checkConnections;
- (id)clipPath:(id)arg1 onLayout:(id)arg2 outset:(double)arg3 reversed:(bool)arg4 isValid:(bool*)arg5;
- (id)connectedFrom;
- (id)connectedFromInfo;
- (void)connectedLayoutInvalidated:(id)arg1;
- (id)connectedPathSource;
- (id)connectedTo;
- (id)connectedToInfo;
- (id)connectionLineInfo;
- (struct CGPoint { double x1; double x2; })controlPointForPointA:(struct CGPoint { double x1; double x2; })arg1 pointB:(struct CGPoint { double x1; double x2; })arg2 andOriginalA:(struct CGPoint { double x1; double x2; })arg3 originalB:(struct CGPoint { double x1; double x2; })arg4;
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint { double x1; double x2; })arg3;
- (void)dealloc;
- (double)dynamicOutsetFrom;
- (double)dynamicOutsetTo;
- (struct CGPoint { double x1; double x2; })getControlKnobPosition:(unsigned long long)arg1;
- (void)invalidateConnections;
- (void)invalidatePath;
- (void)invalidatePosition;
- (bool)isDraggable;
- (bool)isInvisible;
- (bool)isSelectable;
- (bool)isStraightLine;
- (id)layoutInfoGeometry;
- (double)outsetFrom;
- (double)outsetTo;
- (id)p_infoForConnectingToInfo:(id)arg1;
- (bool)p_isConnectedToLockedObjects;
- (void)parentDidChange;
- (id)path;
- (bool)pathIsLineSegment;
- (bool)pathIsOpen;
- (id)pathSource;
- (void)processChangedProperty:(int)arg1;
- (id)reliedOnLayouts;
- (void)removeConnections;
- (void)setConnectedFrom:(id)arg1;
- (void)setConnectedFromInfo:(id)arg1;
- (void)setConnectedTo:(id)arg1;
- (void)setConnectedToInfo:(id)arg1;
- (void)setDynamicOutsetFrom:(double)arg1;
- (void)setDynamicOutsetTo:(double)arg1;
- (void)setUseDynamicOutsets:(bool)arg1;
- (bool)shouldDisplayGuides;
- (bool)shouldValidate;
- (bool)supportsFlipping;
- (bool)supportsResize;
- (bool)supportsRotation;
- (struct CGPoint { double x1; double x2; })unclippedHeadPoint;
- (struct CGPoint { double x1; double x2; })unclippedTailPoint;
- (void)updateConnectedPath;
- (void)updateRepPath;
- (bool)useDynamicOutsets;
- (bool)validLine;
- (void)validate;
- (int)wrapType;

@end
