/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2MovieListCell : SADomainObject

@property(assign,copy) NSArray * displayableShowtimes;
@property(assign,retain) SAMovieV2MovieDetailSnippet * movieDetailSnippet;
@property(assign,copy) NSString * movieName;
@property(assign,copy) NSArray * posterImages;
@property(assign,copy) NSNumber * qualityRating;
@property(assign,copy) NSString * rating;
@property(assign,copy) NSDate * theatricalReleaseDate;

+ (id)movieListCell;
+ (id)movieListCellWithDictionary:(id)arg1 context:(id)arg2;

- (id)displayableShowtimes;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)movieDetailSnippet;
- (id)movieName;
- (id)posterImages;
- (id)qualityRating;
- (id)rating;
- (void)setDisplayableShowtimes:(id)arg1;
- (void)setMovieDetailSnippet:(id)arg1;
- (void)setMovieName:(id)arg1;
- (void)setPosterImages:(id)arg1;
- (void)setQualityRating:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setTheatricalReleaseDate:(id)arg1;
- (id)theatricalReleaseDate;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
