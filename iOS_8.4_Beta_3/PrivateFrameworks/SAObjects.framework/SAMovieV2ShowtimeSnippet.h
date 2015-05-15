/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2ShowtimeSnippet : SAUISnippet

@property(assign,retain) SAUIImageResource * attributionLogo;
@property(assign,copy) NSString * movieName;
@property(assign,copy) NSArray * showtimes;
@property(assign,retain) SALocalSearchBusiness2 * theater;
@property(assign,copy) NSString * theaterName;

+ (id)showtimeSnippet;
+ (id)showtimeSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributionLogo;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)movieName;
- (void)setAttributionLogo:(id)arg1;
- (void)setMovieName:(id)arg1;
- (void)setShowtimes:(id)arg1;
- (void)setTheater:(id)arg1;
- (void)setTheaterName:(id)arg1;
- (id)showtimes;
- (id)theater;
- (id)theaterName;

@end