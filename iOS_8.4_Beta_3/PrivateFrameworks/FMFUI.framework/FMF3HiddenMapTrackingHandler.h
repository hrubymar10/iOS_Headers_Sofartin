/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMF3HiddenMapTrackingHandler : NSObject <MKMapViewDelegate> {
    <FMF3HiddenMapTrackingHandlerDelegate> *_delegate;
    MKMapView *_hiddenMapView;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <FMF3HiddenMapTrackingHandlerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) MKMapView * hiddenMapView;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)hiddenMapView;
- (id)initWithView:(id)arg1;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setHiddenMapView:(id)arg1;

@end