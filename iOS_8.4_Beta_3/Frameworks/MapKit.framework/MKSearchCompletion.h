/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSearchCompletion : NSObject {
    <GEOCompletionItem> *_item;
    NSString *_localizedSectionHeader;
    NSString *_sourceID;
}

@property(assign,readonly) NSArray * displayLines;
@property(assign,readonly) <GEOCompletionItem> * geoCompletionItem;
@property(assign,copy) NSString * localizedSectionHeader;
@property(assign,readonly) MKMapItem * mapItem;
@property(assign,copy) NSString * sourceID;

- (void).cxx_destruct;
- (id)calloutTitle;
- (id)copyStorage;
- (id)description;
- (id)displayLines;
- (id)geoCompletionItem;
- (bool)getCoordinate:(struct { double x1; double x2; }*)arg1;
- (unsigned long long)hash;
- (id)highlightsForLine:(unsigned long long)arg1;
- (id)iconWithScale:(double)arg1;
- (id)initWithGeoCompletionItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedSectionHeader;
- (id)mapItem;
- (id)queryLine;
- (void)sendFeedback;
- (void)setLocalizedSectionHeader:(id)arg1;
- (void)setSourceID:(id)arg1;
- (id)sourceID;

@end