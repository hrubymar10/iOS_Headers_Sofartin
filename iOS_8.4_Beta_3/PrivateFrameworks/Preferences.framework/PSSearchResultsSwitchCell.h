/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchResultsSwitchCell : PSSearchResultsCell {
    SEL _getter;
    SEL _setter;
    PSSpecifier *_specifier;
    UISwitch *_switch;
    id _target;
}

@property (nonatomic) SEL getter;
@property (nonatomic) SEL setter;
@property (nonatomic, retain) PSSpecifier *specifier;
@property (nonatomic) id target;

- (void)_switchValueChanged:(id)arg1;
- (void)dealloc;
- (SEL)getter;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)reloadValue:(bool)arg1;
- (void)setGetter:(SEL)arg1;
- (void)setSetter:(SEL)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setTarget:(id)arg1;
- (SEL)setter;
- (id)specifier;
- (id)target;

@end
