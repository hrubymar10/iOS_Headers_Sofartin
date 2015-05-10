/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXAssertion : NSObject {
    NSString *_assertionType;
    NSString *_identifier;
}

@property(assign,retain) NSString * assertionType;
@property(assign,retain) NSString * identifier;

+ (id)assertionWithType:(id)arg1 identifier:(id)arg2;

- (bool)_hasValidAssertionType;
- (void)_notifyServerAssertionWasAcquired;
- (void)_notifyServerAssertionWasRelinquished;
- (id)assertionType;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)initWithType:(id)arg1 identifier:(id)arg2;
- (void)setAssertionType:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
