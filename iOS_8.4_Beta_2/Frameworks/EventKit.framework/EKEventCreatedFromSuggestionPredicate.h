/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKEventCreatedFromSuggestionPredicate : EKPredicate <EKDefaultPropertiesLoading> {
    NSString *_opaqueKey;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSString * opaqueKey;
@property(assign,readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOpaqueKey:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)opaqueKey;
- (id)predicateFormat;
- (bool)shouldLoadDefaultProperties;

@end