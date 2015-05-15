/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSToggleButton : PTSButton <PTSHUDControl, _UISettingsKeyPathObserver> {
    NSString *_titleForOffState;
    NSString *_titleForOnState;
    id _valueForOffState;
    id _valueForOnState;
}

@property(assign,readwrite) int alignment;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool enabled;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) _UISettings * settings;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * titleForOffState;
@property(assign,copy) NSString * titleForOnState;
@property(assign,copy) id valueForOffState;
@property(assign,copy) id valueForOnState;
@property(assign,copy) NSString * valueKeyPath;

+ (id)toggleButtonForSettings:(id)arg1 valueKeyPath:(id)arg2 titleForOnState:(id)arg3 titleForOffState:(id)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (void)pressed:(id)arg1;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void)setTitleForOffState:(id)arg1;
- (void)setTitleForOnState:(id)arg1;
- (void)setValueForOffState:(id)arg1;
- (void)setValueForOnState:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)titleForOffState;
- (id)titleForOnState;
- (id)valueForOffState;
- (id)valueForOnState;

@end