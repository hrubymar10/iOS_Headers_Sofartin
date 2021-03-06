/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISVariable : NSObject {
    <NSISVariableDelegate> *_delegate;
    unsigned int _ident;
    int _refCount;
}

@property <NSISVariableDelegate> *delegate;
@property (readonly) bool shouldBeMinimized;
@property (readonly) int valueRestriction;

+ (id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3;
+ (id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3;
+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (double)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (id)delegate;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)markedConstraint;
- (bool)markedConstraintIsEligibleForIntegralizationAdjustment;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setDelegate:(id)arg1;
- (bool)shouldBeIntegral;
- (bool)shouldBeMinimized;
- (bool)valueIsUserVisible;
- (int)valueRestriction;

@end
