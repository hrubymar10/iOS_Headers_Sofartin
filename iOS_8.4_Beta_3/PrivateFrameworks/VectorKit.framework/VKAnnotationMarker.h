/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnnotationMarker : VKAnnotationMarkerLayer <MKCalloutSource, VKAnchorDelegate, VKTrackableAnnotationPresentation> {
    VKAnchor *_anchor;
    bool _animatingToCoordinate;
    <VKAnnotation> *_annotation;
    struct CGPoint { 
        double x; 
        double y; 
    } _calloutOffset;
    bool _canShowCallout;
    VKAnimation *_coordinateAnimation;
    <VKAnnotationMarkerDelegate> *_delegate;
    long long _dragState;
    bool _draggable;
    float _dropFraction;
    bool _followsTerrain;
    bool _hidden;
    struct { 
        double latitude; 
        double longitude; 
    } _presentationCoordinate;
    struct CGPoint { 
        double x; 
        double y; 
    } _presentationPoint;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _projectedGroundPoint;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _projectedPoint;
    NSString *_reuseIdentifier;
    bool _selected;
    struct { 
        int from; 
        int to; 
        unsigned long long fromDisplayStyle; 
        unsigned long long toDisplayStyle; 
        float fraction; 
    } _styleTransitionState;
    bool _tracking;
    bool _useScreenSpacePoint;
}

@property (nonatomic) bool animatingToCoordinate;
@property (nonatomic, retain) <VKAnnotation> *annotation;
@property (nonatomic) struct CGPoint { double x1; double x2; } calloutOffset;
@property (nonatomic, readonly) bool canAnimateIn;
@property (nonatomic) bool canShowCallout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKAnnotationMarkerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *detailCalloutAccessoryView;
@property (nonatomic) long long dragState;
@property (getter=isDraggable, nonatomic) bool draggable;
@property (nonatomic) float dropFraction;
@property (nonatomic) bool followsTerrain;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidden;
@property (nonatomic, retain) UIView *leftCalloutAccessoryView;
@property (nonatomic) struct { double x1; double x2; } presentationCoordinate;
@property (nonatomic) struct CGPoint { double x1; double x2; } presentationPoint;
@property (nonatomic) struct VKPoint { double x1; double x2; double x3; } projectedGroundPoint;
@property (nonatomic) struct VKPoint { double x1; double x2; double x3; } projectedPoint;
@property (nonatomic, readonly) NSString *reuseIdentifier;
@property (nonatomic, retain) UIView *rightCalloutAccessoryView;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) struct { int x1; int x2; unsigned long long x3; unsigned long long x4; float x5; } styleTransitionState;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (getter=isTracking, nonatomic) bool tracking;
@property (nonatomic) bool useScreenSpacePoint;

+ (unsigned long long)_selectedZIndex;
+ (unsigned long long)_zIndex;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingTitle;

- (id).cxx_construct;
- (void)_setHiddenForOffscreen:(bool)arg1;
- (id)anchorWithContext:(id)arg1;
- (void)anchorWorldPointDidChange:(void*)arg1;
- (void)animateFromCoordinate:(struct { double x1; double x2; })arg1 duration:(double)arg2;
- (double)animateInWithCanvasSize:(struct CGSize { double x1; double x2; })arg1 delay:(double)arg2 completionHandler:(id)arg3;
- (bool)animatingToCoordinate;
- (id)annotation;
- (struct CGPoint { double x1; double x2; })calloutAnchorPointWithCanvasSize:(struct CGSize { double x1; double x2; })arg1 canvasScale:(double)arg2 snapToPixels:(bool)arg3;
- (struct CGPoint { double x1; double x2; })calloutOffset;
- (bool)canAnimateIn;
- (bool)canShowCallout;
- (void)dealloc;
- (id)debugAnchorPointString;
- (id)delegate;
- (id)detailCalloutAccessoryView;
- (long long)dragState;
- (float)dropFraction;
- (bool)followsTerrain;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameWithCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)hidden;
- (id)init;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (bool)isDraggable;
- (bool)isPersistent;
- (bool)isSelected;
- (bool)isTracking;
- (id)leftCalloutAccessoryView;
- (struct VKPoint { double x1; double x2; double x3; })pointInWorldWithContext:(id)arg1;
- (struct CGPoint { double x1; double x2; })pointToDropAtForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)prepareForReuse;
- (struct { double x1; double x2; })presentationCoordinate;
- (struct CGPoint { double x1; double x2; })presentationPoint;
- (struct VKPoint { double x1; double x2; double x3; })projectedGroundPoint;
- (struct VKPoint { double x1; double x2; double x3; })projectedPoint;
- (id)reuseIdentifier;
- (id)rightCalloutAccessoryView;
- (struct CGPoint { double x1; double x2; })screenPointToScrollRelativeToWithCanvasSize:(struct CGSize { double x1; double x2; })arg1 canvasScale:(double)arg2;
- (void)setAnimatingToCoordinate:(bool)arg1;
- (void)setAnnotation:(id)arg1;
- (void)setCalloutOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCanShowCallout:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailCalloutAccessoryView:(id)arg1;
- (void)setDragState:(long long)arg1;
- (void)setDragState:(long long)arg1 animated:(bool)arg2;
- (void)setDraggable:(bool)arg1;
- (void)setDropFraction:(float)arg1;
- (void)setFollowsTerrain:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLeftCalloutAccessoryView:(id)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPresentationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setProjectedGroundPoint:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (void)setProjectedPoint:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (void)setRightCalloutAccessoryView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setStyleTransitionState:(struct { int x1; int x2; unsigned long long x3; unsigned long long x4; float x5; })arg1;
- (void)setTracking:(bool)arg1;
- (void)setUseScreenSpacePoint:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })significantFrameWithCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (struct { int x1; int x2; unsigned long long x3; unsigned long long x4; float x5; })styleTransitionState;
- (id)subtitle;
- (id)title;
- (bool)useScreenSpacePoint;

@end
