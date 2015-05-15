/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMapAnnotation : NSObject <PUMapAnnotationAnimatable> {
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    unsigned long long _hash;
    PUMapItem *_mapItem;
    struct { 
        double latitude; 
        double longitude; 
    } _originalCoordinate;
    unsigned long long _relativeOrder;
}

@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly, retain) NSDate *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSObject *itemId;
@property (nonatomic, retain) PUMapItem *mapItem;
@property (nonatomic, readonly) NSArray *mapItems;
@property (nonatomic, readonly) struct { double x1; double x2; } originalCoordinate;
@property (nonatomic) unsigned long long relativeOrder;
@property (nonatomic, readonly, retain) NSMutableSet *subAnnotations;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)annotationSortingComparatorNewestToOldest;
+ (id)annotationSortingComparatorOldestToNewest;
+ (id)compactDescriptionForAnnotations:(id)arg1;

- (void).cxx_destruct;
- (id)_dateString;
- (long long)annotationSortingCompareWithAnnotation:(id)arg1;
- (id)compactDescription;
- (long long)compare:(id)arg1;
- (bool)containsAnnotation:(id)arg1;
- (struct { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)dateCreated;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (bool)isEqual:(id)arg1;
- (id)itemId;
- (id)mapItem;
- (id)mapItems;
- (id)newestMaxMapItems:(unsigned long long)arg1;
- (struct { double x1; double x2; })originalCoordinate;
- (unsigned long long)relativeOrder;
- (void)resetCoordinateToOriginal;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setMapItem:(id)arg1;
- (void)setRelativeOrder:(unsigned long long)arg1;
- (id)subAnnotations;
- (id)subtitle;
- (id)title;

@end
