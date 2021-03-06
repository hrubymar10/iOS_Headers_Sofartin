/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapSnapshot : NSObject {
    UIImage *_image;
    VKMapSnapshot *_snapshot;
}

@property (nonatomic, readonly) UIImage *image;

- (void).cxx_destruct;
- (struct { double x1; double x2; })_coordinateForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_initWithSnapshot:(id)arg1;
- (id)image;
- (struct CGPoint { double x1; double x2; })pointForCoordinate:(struct { double x1; double x2; })arg1;
- (id)snapshotWithAnnotationView:(id)arg1 atCoordinate:(struct { double x1; double x2; })arg2;
- (id)snapshotWithAnnotationView:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;

@end
