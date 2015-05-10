/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapSnapshotOptions : NSObject <NSCopying> {
    MKMapCamera *_camera;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _mapRect;
    unsigned long long _mapType;
    int _mode;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } _region;
    bool _rendersInBackground;
    double _scale;
    bool _showsBuildings;
    bool _showsPointsOfInterest;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    bool _usingRect;
}

@property(assign,copy) MKMapCamera * camera;
@property(assign,readwrite) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } mapRect;
@property(assign,readwrite) unsigned long long mapType;
@property(assign,readwrite) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property(getter=_rendersInBackground,setter=_setRendersInBackground:,assign,readwrite) bool rendersInBackground;
@property(assign,readwrite) double scale;
@property(assign,readwrite) bool showsBuildings;
@property(assign,readwrite) bool showsPointsOfInterest;
@property(assign,readwrite) struct CGSize { double x1; double x2; } size;
@property(assign,readonly) bool usingRect;

- (void).cxx_destruct;
- (bool)_rendersInBackground;
- (void)_setRendersInBackground:(bool)arg1;
- (id)camera;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRect;
- (unsigned long long)mapType;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (double)scale;
- (void)setCamera:(id)arg1;
- (void)setMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMapType:(unsigned long long)arg1;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScale:(double)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsPointsOfInterest:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)showsBuildings;
- (bool)showsPointsOfInterest;
- (struct CGSize { double x1; double x2; })size;
- (bool)usingRect;

@end