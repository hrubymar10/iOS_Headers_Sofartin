/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsLeague : AceObject <SAAceSerializable>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * diplayedText;
@property(assign,copy) NSNumber * displayTeamLocationOverName;
@property(assign,copy) NSString * displayedText;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * identifier;
@property(assign,retain) SASportsSeason * season;
@property(assign,copy) NSString * sport;
@property(assign,readonly) Class superclass;

+ (id)league;
+ (id)leagueWithDictionary:(id)arg1 context:(id)arg2;

- (id)diplayedText;
- (id)displayTeamLocationOverName;
- (id)displayedText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)season;
- (void)setDiplayedText:(id)arg1;
- (void)setDisplayTeamLocationOverName:(id)arg1;
- (void)setDisplayedText:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSeason:(id)arg1;
- (void)setSport:(id)arg1;
- (id)sport;

@end