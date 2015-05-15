/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAttributionLabel : UILabel {
    unsigned long long _mapType;
    bool _useDarkText;
}

@property(assign,readwrite) unsigned long long mapType;

- (id)_attributesWithStroke:(bool)arg1;
- (void)_prepareLabel;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (unsigned long long)mapType;
- (void)setMapType:(unsigned long long)arg1;

@end
