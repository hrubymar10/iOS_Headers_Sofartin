/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFCountableMatchesContext : NSObject {
    long long _maxCount;
    struct __CFDictionary { } *_peopleCount;
    NSMutableSet *_popularPeople;
}

@property(assign,readwrite) long long maxCount;

- (void)countInstances:(id)arg1 usingPredicate:(id)arg2;
- (void)dealloc;
- (id)highestMatches;
- (id)init;
- (long long)maxCount;
- (void)setMaxCount:(long long)arg1;

@end