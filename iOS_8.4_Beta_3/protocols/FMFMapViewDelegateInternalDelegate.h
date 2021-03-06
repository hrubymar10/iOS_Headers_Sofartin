/* Generated by RuntimeBrowser.
 */

@protocol FMFMapViewDelegateInternalDelegate <NSObject>

@required

- (UIColor *)_internalAnnotationTintColor;
- (UIImage *)annotationImageForHandle:(FMFHandle *)arg1;
- (void)didDeselectLocation:(FMFLocation *)arg1;
- (void)didSelectLocation:(FMFLocation *)arg1;
- (void)didUpdateUserLocation:(MKUserLocation *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)mapViewDidFinishRenderingMap;
- (void)reZoomToFit;
- (void)regionDidChangeAnimated:(bool)arg1;
- (void)regionWillChangeAnimated:(bool)arg1;
- (void)setShouldZoomToFitNewLocations:(bool)arg1;
- (bool)shouldZoomToFitMeAndLocations;
- (bool)viewWillAppearCalled;

@end
