/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWTotalsFileSerializer : NSObject <NSXMLParserDelegate> {
    float _farthestMile;
    NSMutableString *_foundCharacters;
    unsigned long long _mostCalories;
    unsigned long long _total10K;
    unsigned long long _total5K;
    unsigned long long _totalCalories;
    float _totalDistanceMiles;
    unsigned long long _totalHalfMarathon;
    unsigned long long _totalMarathon;
    unsigned long long _totalSeconds;
    unsigned long long _totalWeightWorkouts;
    unsigned long long _totalWorkouts;
    NSURL *_url;
    double _weight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) float farthestMile;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long mostCalories;
@property (readonly) Class superclass;
@property (readonly) unsigned long long total10K;
@property (readonly) unsigned long long total5K;
@property (readonly) unsigned long long totalCalories;
@property (readonly) float totalDistanceMiles;
@property (readonly) unsigned long long totalHalfMarathon;
@property (readonly) unsigned long long totalMarathon;
@property (readonly) unsigned long long totalSeconds;
@property (readonly) unsigned long long totalWeightWorkouts;
@property (readonly) unsigned long long totalWorkouts;
@property (readonly) double weight;

+ (void)initialize;

- (void)dealloc;
- (float)farthestMile;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1;
- (unsigned long long)mostCalories;
- (void)parseFarthestMile;
- (void)parseMostCalories;
- (void)parseTotal10K;
- (void)parseTotal5K;
- (void)parseTotalCalories;
- (void)parseTotalDistanceMiles;
- (void)parseTotalHalfMarathon;
- (void)parseTotalMarathon;
- (void)parseTotalSeconds;
- (void)parseTotalWeightWorkouts;
- (void)parseTotalWorkouts;
- (void)parseWeight;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parserDidStartDocument:(id)arg1;
- (void)reset;
- (unsigned long long)total10K;
- (unsigned long long)total5K;
- (unsigned long long)totalCalories;
- (float)totalDistanceMiles;
- (unsigned long long)totalHalfMarathon;
- (unsigned long long)totalMarathon;
- (unsigned long long)totalSeconds;
- (unsigned long long)totalWeightWorkouts;
- (unsigned long long)totalWorkouts;
- (id)url;
- (double)weight;

@end
