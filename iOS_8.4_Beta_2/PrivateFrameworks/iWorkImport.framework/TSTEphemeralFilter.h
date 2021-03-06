/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTEphemeralFilter : NSObject {
    unsigned char mColumnIndex;
    unsigned long long mFilterIndex;
    NSArray *mRules;
}

@property(assign,readonly) unsigned char columnIndex;
@property(assign,readonly) unsigned long long filterIndex;
@property(assign,readonly) unsigned long long ruleCount;

+ (id)filterWithIndex:(unsigned long long)arg1 columnIndex:(unsigned char)arg2 rules:(id)arg3;

- (unsigned char)columnIndex;
- (void)dealloc;
- (id)description;
- (id)filterByAddingRule:(id)arg1;
- (id)filterByRemovingRuleAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterIndex;
- (id)filterWithRule:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithIndex:(unsigned long long)arg1 columnIndex:(unsigned char)arg2 rules:(id)arg3;
- (id)ruleAtIndex:(unsigned long long)arg1;
- (unsigned long long)ruleCount;

@end
