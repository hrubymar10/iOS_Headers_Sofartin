/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnchor : NSObject {
    struct shared_ptr<vk::Anchor> { 
        struct Anchor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _anchor;
}

@property (nonatomic) struct { double x1; double x2; } coordinate;
@property (nonatomic) <VKAnchorDelegate> *delegate;
@property (nonatomic, readonly) bool followsTerrain;
@property (nonatomic, readonly) bool isGeocentric;
@property (nonatomic, readonly) bool isMercator;
@property (nonatomic, readonly) struct VKPoint { double x1; double x2; double x3; } mercatorPoint;
@property (nonatomic, readonly) struct VKPoint { double x1; double x2; double x3; } worldPoint;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { double x1; double x2; })coordinate;
- (id)delegate;
- (bool)followsTerrain;
- (id)initWithAnchor:(struct shared_ptr<vk::Anchor> { struct Anchor {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)isGeocentric;
- (bool)isMercator;
- (struct VKPoint { double x1; double x2; double x3; })mercatorPoint;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setMercatorPoint:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (long long)worldIndexWithContext:(id)arg1;
- (struct VKPoint { double x1; double x2; double x3; })worldPoint;
- (void)worldPointDidChange;

@end
