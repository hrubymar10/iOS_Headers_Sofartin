/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSRestrictions : IKJSObject <IKJSRestrictions>

@property (nonatomic, readonly) bool allowArtistActivity;
@property (nonatomic, readonly) bool allowsErotica;
@property (nonatomic, readonly) bool allowsExplicit;
@property (nonatomic, readonly) bool appInstallationAllowed;
@property (nonatomic, readonly) long long maxAppRank;
@property (nonatomic, readonly) NSString *maxAppRating;
@property (nonatomic, readonly) long long maxMovieRank;
@property (nonatomic, readonly) long long maxTVShowRank;

+ (id)restrictionsDidChangeNotificationName;

- (id)_contentRestrictionsCountryCode;
- (id)_ratingForSetting:(id)arg1 domain:(id)arg2 countryCode:(id)arg3;
- (bool)allowArtistActivity;
- (bool)allowsErotica;
- (bool)allowsExplicit;
- (bool)appInstallationAllowed;
- (long long)maxAppRank;
- (id)maxAppRating;
- (long long)maxMovieRank;
- (id)maxMovieRatingForCountry:(id)arg1;
- (long long)maxTVShowRank;
- (id)maxTVShowRatingForCountry:(id)arg1;

@end
