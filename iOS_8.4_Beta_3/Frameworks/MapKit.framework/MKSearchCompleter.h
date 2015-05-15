/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSearchCompleter : NSObject {
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
    id _context;
    <MKSearchCompleterDelegate> *_delegate;
    CLLocation *_deviceLocation;
    long long _entriesType;
    NSString *_fragment;
    NSString *_identifier;
    long long _listType;
    double _timeSinceLastInBoundingRegion;
}

@property (nonatomic) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingRegion;
@property (nonatomic) id context;
@property (nonatomic) <MKSearchCompleterDelegate> *delegate;
@property (nonatomic, retain) CLLocation *deviceLocation;
@property (nonatomic) long long entriesType;
@property (nonatomic, copy) NSString *fragment;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long listType;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic) double timeSinceLastInBoundingRegion;

+ (id)alloc;

- (void).cxx_destruct;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRegion;
- (void)cancel;
- (id)context;
- (id)delegate;
- (id)deviceLocation;
- (long long)entriesType;
- (id)fragment;
- (id)identifier;
- (id)init;
- (bool)isSearching;
- (long long)listType;
- (id)results;
- (bool)resultsAreCurrent;
- (void)retry;
- (void)setBoundingRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceLocation:(id)arg1;
- (void)setEntriesType:(long long)arg1;
- (void)setFragment:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setListType:(long long)arg1;
- (void)setTimeSinceLastInBoundingRegion:(double)arg1;
- (double)timeSinceLastInBoundingRegion;

@end
