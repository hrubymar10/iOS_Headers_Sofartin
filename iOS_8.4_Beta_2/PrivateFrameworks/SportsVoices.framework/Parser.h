/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@interface Parser : NSObject {
    bool _debugging;
    NSMutableDictionary *_grammarsPlist;
    NSMutableArray *_productionRules;
    GrammarPart *_theGrammar;
}

@property(assign,readonly) NSMutableArray * productionRules;

+ (bool)insertStatementsFromOriginal:(id)arg1 intoBranch:(id)arg2;
+ (id)loadGrammarsFromPlistAtPath:(id)arg1;
+ (id)retrievePlistForPathArray:(id)arg1 from:(id)arg2;
+ (id)retrievePlistForStringInDotNotation:(id)arg1 from:(id)arg2;

- (void)dealloc;
- (id)initWithPlistAtPath:(id)arg1 grammar:(id)arg2;
- (id)productionRules;
- (id)resultOfRulesAppliedTo:(id)arg1;
- (id)resultOfRulesAppliedToStrings:(id)arg1;
- (void)setGrammar:(id)arg1;

@end
