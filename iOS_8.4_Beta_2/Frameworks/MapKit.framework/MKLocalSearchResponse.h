/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocalSearchResponse : NSObject {
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } _boundingRegion;
    NSArray *_mapItems;
}

@property(assign,readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingRegion;
@property(assign,readonly) NSArray * mapItems;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initWithMapItems:(id)arg1 boundingRegion:(id)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRegion;
- (id)description;
- (id)mapItems;

@end
