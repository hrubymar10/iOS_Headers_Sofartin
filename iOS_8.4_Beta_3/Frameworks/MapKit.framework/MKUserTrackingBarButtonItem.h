/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserTrackingBarButtonItem : UIBarButtonItem <MKUserTrackingButtonTarget> {
    UIView *_associatedView;
    _MKUserTrackingButtonController *_controller;
    UIButton *_customButton;
    bool _hasCustomAssociatedView;
    bool _isLegacy;
    UINavigationBar *_navigationBar;
    UIToolbar *_toolbar;
    UIImage *_trackingEmptyImage;
    UIImage *_trackingFollowImage;
    UIImage *_trackingFollowWithHeadingImage;
    UIImage *_trackingNoneImage;
    _MKUserTrackingButton *_userTrackingButton;
}

@property(assign,retain) UIView * _associatedView;
@property(assign,retain) UINavigationBar * _navigationBar;
@property(setter=_setState:,assign,readwrite) long long _state;
@property(assign,retain) UIToolbar * _toolbar;
@property(setter=_setUserTrackingView:,assign,retain) <MKUserTrackingView> * _userTrackingView;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) MKMapView * mapView;
@property(getter=_selectsWhenTracking,setter=_setSelectsWhenTracking:,assign,readwrite) bool selectsWhenTracking;
@property(assign,readonly) Class superclass;

+ (Class)_activityIndicatorClass;

- (void).cxx_destruct;
- (long long)_activityIndicatorStyle;
- (id)_associatedView;
- (void)_goToNextMode:(id)arg1;
- (id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
- (id)_imageForUserTrackingMode:(long long)arg1;
- (bool)_isHighlightedForState:(long long)arg1;
- (bool)_isInMiniBar;
- (id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1;
- (id)_navigationBar;
- (void)_repositionViews;
- (bool)_selectsWhenTracking;
- (void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2;
- (void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2;
- (void)_setSelectsWhenTracking:(bool)arg1;
- (void)_setState:(long long)arg1;
- (void)_setUserTrackingView:(id)arg1;
- (long long)_state;
- (long long)_styleForState:(long long)arg1;
- (id)_toolbar;
- (id)_trackingEmptyImage;
- (id)_trackingFollowImage;
- (id)_trackingFollowWithHeadingImage;
- (id)_trackingNoneImage;
- (void)_updateForState:(long long)arg1;
- (id)_userTrackingView;
- (id)createViewForNavigationItem:(id)arg1;
- (id)createViewForToolbar:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMapView:(id)arg1;
- (id)mapView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setEnabled:(bool)arg1;
- (void)setMapView:(id)arg1;
- (void)set_associatedView:(id)arg1;
- (void)set_navigationBar:(id)arg1;
- (void)set_toolbar:(id)arg1;

@end
