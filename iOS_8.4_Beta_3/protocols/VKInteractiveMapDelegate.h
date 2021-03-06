/* Generated by RuntimeBrowser.
 */

@protocol VKInteractiveMapDelegate <NSObject>

@required

- (void)map:(id <VKInteractiveMap>)arg1 canEnter3DModeDidChange:(bool)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 canShowFlyoverDidChange:(bool)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 canZoomInDidChange:(bool)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 canZoomOutDidChange:(bool)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 didBecomePitched:(bool)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 didChangeRegionAnimated:(bool)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 didUpdateVerticalYawTo:(double)arg2;
- (VKOverlayPainter *)map:(id <VKInteractiveMap>)arg1 painterForOverlay:(id <VKOverlay>)arg2;
- (<VKTrackableAnnotationPresentation> *)map:(id <VKInteractiveMap>)arg1 presentationForAnnotation:(id <VKTrackableAnnotation>)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 selectedLabelMarkerWillDisappear:(VKLabelMarker *)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 willChangeRegionAnimated:(bool)arg2;
- (void)map:(id <VKInteractiveMap>)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapDidBecomeFullyDrawn:(id <VKInteractiveMap>)arg1 hasFailedTiles:(bool)arg2;
- (void)mapDidBecomePartiallyDrawn:(id <VKInteractiveMap>)arg1;
- (void)mapDidChangeVisibleRegion:(id <VKInteractiveMap>)arg1;
- (void)mapDidFailLoadingTiles:(id <VKInteractiveMap>)arg1 withError:(NSError *)arg2;
- (void)mapDidFinishChangingMapDisplayStyle:(unsigned long long)arg1;
- (void)mapDidFinishInitialTrackingAnimation:(id <VKInteractiveMap>)arg1;
- (void)mapDidFinishLoadingTiles:(id <VKInteractiveMap>)arg1;
- (void)mapDidStartLoadingTiles:(id <VKInteractiveMap>)arg1;

@optional

- (void)map:(id <VKInteractiveMap>)arg1 didUpdateContainsOverlay:(bool)arg2;

@end
