/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHeaderBackgroundView : UIView <MKPlaceHeaderViewCinematics> {
    long long _backgroundType;
    <MKPlaceHeaderBackgroundViewDelegate> *_delegate;
    MKMapItem *_mapItem;
    long long _preparationState;
}

@property (nonatomic) long long backgroundType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPlaceHeaderBackgroundViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) long long preparationState;
@property (readonly) Class superclass;

+ (long long)backgroundTypeForMapItem:(id)arg1;
+ (id)backgroundViewForBackgroundType:(long long)arg1 mapItem:(id)arg2 headerView:(id)arg3;
+ (id)backgroundViewForMapItem:(id)arg1 headerView:(id)arg2;
+ (Class)classForBackgroundType:(long long)arg1;

- (void).cxx_destruct;
- (long long)backgroundType;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mapItem:(id)arg2;
- (id)mapItem;
- (void)pause;
- (long long)preparationState;
- (void)prepareForPresentation;
- (void)present;
- (void)reset;
- (void)resume;
- (void)setBackgroundType:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setPreparationState:(long long)arg1;

@end
