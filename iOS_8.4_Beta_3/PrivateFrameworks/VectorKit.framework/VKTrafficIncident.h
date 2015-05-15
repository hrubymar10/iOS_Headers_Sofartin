/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficIncident : NSObject <NSCopying> {
    NSString *_crossStreet;
    NSDate *_endDate;
    NSString *_info;
    bool _isNotForDisplay;
    bool _isOnSelectedRoute;
    NSDate *_lastUpdatedDate;
    struct { 
        double latitude; 
        double longitude; 
    } _location;
    float _maxZoom;
    float _minZoom;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _routeOffset;
    unsigned int _routeOffsetInMeters;
    long long _routeRelevance;
    long long _significance;
    NSDate *_startDate;
    NSString *_street;
    NSString *_subtitle;
    NSString *_title;
    long long _type;
    unsigned long long _uniqueID;
    NSString *_uniqueString;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _worldPoint;
}

@property(assign,readonly) NSString * crossStreet;
@property(assign,readonly) NSDate * endDate;
@property(assign,readonly) NSString * info;
@property(assign,readonly) bool isNotForDisplay;
@property(assign,readwrite) bool isOnSelectedRoute;
@property(assign,readonly) NSDate * lastUpdatedDate;
@property(assign,readonly) float maxZoom;
@property(assign,readonly) float minZoom;
@property(assign,readwrite) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property(assign,readwrite) unsigned int routeOffsetInMeters;
@property(assign,readwrite) long long routeRelevance;
@property(assign,readonly) long long significance;
@property(assign,readonly) NSDate * startDate;
@property(assign,readonly) NSString * street;
@property(assign,copy) NSString * subtitle;
@property(assign,copy) NSString * title;
@property(assign,readonly) long long type;
@property(assign,readonly) unsigned long long uniqueID;
@property(assign,readonly) NSString * uniqueString;
@property(assign,readonly) struct VKPoint { double x1; double x2; double x3; } worldPoint;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crossStreet;
- (void)dealloc;
- (id)endDate;
- (bool)hasSameIdentifier:(id)arg1;
- (id)info;
- (id)initWithIncident:(id)arg1 vertices:(struct { long long x1; long long x2; }*)arg2 tileRect:(struct { double x1; double x2; double x3; double x4; })arg3 tileSize:(double)arg4;
- (id)initWithIncidentData:(const struct Incident { struct GeoCoordinates { struct Longitude { unsigned int x_1_2_1; } x_1_1_1; struct Latitude { unsigned int x_2_2_1; } x_1_1_2; } x1; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; int x4; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_6_1_1; } x6; long long x7; long long x8; long long x9; long long x10; int x11; unsigned char x12; bool x13; int x14; unsigned char x15; unsigned char x16; }*)arg1 worldPoint:(struct VKPoint { double x1; double x2; double x3; }*)arg2;
- (id)initWithRouteIncident:(id)arg1 routeRelevance:(long long)arg2;
- (bool)isNotForDisplay;
- (bool)isOnSelectedRoute;
- (id)lastUpdatedDate;
- (float)maxZoom;
- (float)minZoom;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (unsigned int)routeOffsetInMeters;
- (long long)routeRelevance;
- (void)setIsOnSelectedRoute:(bool)arg1;
- (void)setRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setRouteOffsetInMeters:(unsigned int)arg1;
- (void)setRouteRelevance:(long long)arg1;
- (long long)significance;
- (id)startDate;
- (id)street;
- (id)subtitle;
- (id)title;
- (long long)type;
- (unsigned long long)uniqueID;
- (id)uniqueString;
- (struct VKPoint { double x1; double x2; double x3; })worldPoint;

@end
