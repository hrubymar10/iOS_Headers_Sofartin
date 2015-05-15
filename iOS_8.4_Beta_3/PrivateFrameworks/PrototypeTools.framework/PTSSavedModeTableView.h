/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSSavedModeTableView : UITableView <PTSHUDControl> {
    int _alignment;
    bool _enabled;
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

- (void).cxx_destruct;
- (int)alignment;
- (bool)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAlignment:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSettings:(id)arg1;
- (void)setValueKeyPath:(id)arg1;
- (id)settings;
- (id)valueKeyPath;

@end