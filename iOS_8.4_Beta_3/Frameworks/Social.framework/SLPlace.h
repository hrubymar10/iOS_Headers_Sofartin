/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLPlace : NSObject <MKAnnotation, NSSecureCoding> {
    NSString *_category;
    double _distance;
    NSString *_identifier;
    double _latitude;
    double _longitude;
    NSString *_name;
    NSURL *_pictureURL;
}

@property(assign,retain) NSString * category;
@property(assign,readonly) struct { double x1; double x2; } coordinate;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) double distance;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSString * identifier;
@property(assign,readwrite) double latitude;
@property(assign,readwrite) double longitude;
@property(assign,retain) NSString * name;
@property(assign,retain) NSURL * pictureURL;
@property(assign,copy) NSString * subtitle;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (struct { double x1; double x2; })coordinate;
- (id)description;
- (double)distance;
- (id)encodableProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (double)latitude;
- (double)longitude;
- (id)name;
- (id)pictureURL;
- (void)setCategory:(id)arg1;
- (void)setDistance:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setName:(id)arg1;
- (void)setPictureURL:(id)arg1;
- (id)subtitle;
- (id)title;

@end