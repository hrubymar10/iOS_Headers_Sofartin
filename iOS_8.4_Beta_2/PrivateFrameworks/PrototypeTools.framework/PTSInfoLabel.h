/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSInfoLabel : UILabel <PTSHUDControl, _UISettingsKeyPathObserver> {
    int _alignment;
    _UISettings *_settings;
    NSString *_valueKeyPath;
}

@property(assign,readwrite) int alignment;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool enabled;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) _UISettings * settings;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * valueKeyPath;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFrame;
+ (id)infoLabel;
+ (id)infoLabelForSettings:(id)arg1 valueKeyPath:(id)arg2;

- (void).cxx_destruct;
- (int)alignment;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setAlignment:(int)arg1;
- (void)setSettings:(id)arg1;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void)setValueKeyPath:(id)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)valueKeyPath;

@end
