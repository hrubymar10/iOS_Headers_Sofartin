/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieMovie : SADomainObject

@property(assign,copy) NSArray * actors;
@property(assign,copy) NSArray * directors;
@property(assign,copy) NSArray * genres;
@property(assign,copy) NSURL * hiResTrailerUri;
@property(assign,copy) NSURL * iTunesUri;
@property(assign,readwrite) bool is3d;
@property(assign,copy) NSNumber * isAvailableOnItunesForPurchase;
@property(assign,copy) NSNumber * isAvailableOnItunesForRent;
@property(assign,copy) NSURL * lowResTrailerUri;
@property(assign,copy) NSString * name;
@property(assign,copy) NSArray * posterImages;
@property(assign,copy) NSURL * posterUri;
@property(assign,copy) NSNumber * qualityRating;
@property(assign,copy) NSString * rating;
@property(assign,retain) SALocalSearchReviewList * reviews;
@property(assign,copy) NSURL * rottenTomatoesUri;
@property(assign,readwrite) long long runtimeInMinutes;
@property(assign,copy) NSArray * studios;
@property(assign,copy) NSString * synopsis;
@property(assign,copy) NSString * theaterShowtimeSearchRegionDescription;
@property(assign,copy) NSArray * theaterShowtimes;
@property(assign,copy) NSDate * theatricalReleaseDate;

+ (id)movie;
+ (id)movieWithDictionary:(id)arg1 context:(id)arg2;

- (id)actors;
- (id)directors;
- (id)encodedClassName;
- (id)genres;
- (id)groupIdentifier;
- (id)hiResTrailerUri;
- (id)iTunesUri;
- (bool)is3d;
- (id)isAvailableOnItunesForPurchase;
- (id)isAvailableOnItunesForRent;
- (id)lowResTrailerUri;
- (id)name;
- (id)posterImages;
- (id)posterUri;
- (id)qualityRating;
- (id)rating;
- (id)reviews;
- (id)rottenTomatoesUri;
- (long long)runtimeInMinutes;
- (void)setActors:(id)arg1;
- (void)setDirectors:(id)arg1;
- (void)setGenres:(id)arg1;
- (void)setHiResTrailerUri:(id)arg1;
- (void)setITunesUri:(id)arg1;
- (void)setIs3d:(bool)arg1;
- (void)setIsAvailableOnItunesForPurchase:(id)arg1;
- (void)setIsAvailableOnItunesForRent:(id)arg1;
- (void)setLowResTrailerUri:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPosterImages:(id)arg1;
- (void)setPosterUri:(id)arg1;
- (void)setQualityRating:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setReviews:(id)arg1;
- (void)setRottenTomatoesUri:(id)arg1;
- (void)setRuntimeInMinutes:(long long)arg1;
- (void)setStudios:(id)arg1;
- (void)setSynopsis:(id)arg1;
- (void)setTheaterShowtimeSearchRegionDescription:(id)arg1;
- (void)setTheaterShowtimes:(id)arg1;
- (void)setTheatricalReleaseDate:(id)arg1;
- (id)studios;
- (id)synopsis;
- (id)theaterShowtimeSearchRegionDescription;
- (id)theaterShowtimes;
- (id)theatricalReleaseDate;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
