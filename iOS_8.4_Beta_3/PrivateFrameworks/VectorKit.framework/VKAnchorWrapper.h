/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnchorWrapper : NSObject <VKAnchorDelegate> {
    VKAnchor *_anchor;
    MDDisplayLayer *_displayLayer;
    bool _followsTerrain;
    bool _isUpdating;
    struct { 
        double latitude; 
        double longitude; 
    } _lastCoordinate;
    VKLayoutContext *_lastLayoutContext;
    double _pointsPerMeter;
    struct CGPoint { 
        double x; 
        double y; 
    } _screenPointInCanvas;
}

@property(assign,readonly) struct { double x1; double x2; } coordinate;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) MDDisplayLayer * displayLayer;
@property(assign,readwrite) bool followsTerrain;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (id).cxx_construct;
- (id)_anchorWithContext:(id)arg1;
- (void)_updateCachedPointWithContext:(id)arg1;
- (void)anchorWorldPointDidChange:(void*)arg1;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)displayLayer;
- (bool)followsTerrain;
- (void)layoutWithContext:(id)arg1;
- (struct CGPoint { double x1; double x2; })pointInLayer:(id)arg1;
- (double)pointOffsetForDistanceOffset:(double)arg1;
- (void)setDisplayLayer:(id)arg1;
- (void)setFollowsTerrain:(bool)arg1;
- (void)updateIfNeeded;

@end