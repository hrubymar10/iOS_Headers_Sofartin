/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsAthlete : SASportsEntity

@property(assign,retain) SASportsTeam * activeTeam;
@property(assign,copy) NSArray * athleteMetadata;
@property(assign,copy) NSArray * careerStatistics;
@property(assign,copy) NSString * firstName;
@property(assign,copy) NSArray * formattedMetadata;
@property(assign,copy) NSArray * formattedMetadataTypes;
@property(assign,copy) NSString * gender;
@property(assign,copy) NSString * height;
@property(assign,copy) NSNumber * injured;
@property(assign,copy) NSString * jerseyNumber;
@property(assign,copy) NSArray * lastGameStatistics;
@property(assign,copy) NSString * lastName;
@property(assign,copy) NSString * nickname;
@property(assign,copy) NSString * position;
@property(assign,copy) NSArray * previousTeams;
@property(assign,copy) NSArray * statistics;
@property(assign,copy) NSString * weight;

+ (id)athlete;
+ (id)athleteWithDictionary:(id)arg1 context:(id)arg2;

- (id)activeTeam;
- (id)athleteMetadata;
- (id)careerStatistics;
- (id)encodedClassName;
- (id)firstName;
- (id)formattedMetadata;
- (id)formattedMetadataTypes;
- (id)gender;
- (id)groupIdentifier;
- (id)height;
- (id)injured;
- (id)jerseyNumber;
- (id)lastGameStatistics;
- (id)lastName;
- (id)nickname;
- (id)position;
- (id)previousTeams;
- (void)setActiveTeam:(id)arg1;
- (void)setAthleteMetadata:(id)arg1;
- (void)setCareerStatistics:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFormattedMetadata:(id)arg1;
- (void)setFormattedMetadataTypes:(id)arg1;
- (void)setGender:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setInjured:(id)arg1;
- (void)setJerseyNumber:(id)arg1;
- (void)setLastGameStatistics:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setPosition:(id)arg1;
- (void)setPreviousTeams:(id)arg1;
- (void)setStatistics:(id)arg1;
- (void)setWeight:(id)arg1;
- (id)statistics;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)weight;

@end
