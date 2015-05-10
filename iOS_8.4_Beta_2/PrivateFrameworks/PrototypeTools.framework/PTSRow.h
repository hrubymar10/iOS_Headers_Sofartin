/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSRow : NSObject <_UISettingsKeyPathObserver> {
    PTSRowAction *_action;
    long long _allowedEditingTypes;
    NSPredicate *_condition;
    _UISettings *_groupChild;
    NSString *_groupKeyPath;
    NSString *_imageKeyPath;
    NSHashTable *_observers;
    PTSSection *_section;
    _UISettings *_settings;
    UIImage *_staticImage;
    NSString *_staticTitle;
    NSString *_titleKeyPath;
    id _valueFormatter;
    NSString *_valueKeyPath;
    id _valueValidatator;
}

@property(assign,copy) PTSRowAction * action;
@property(assign,readwrite) long long allowedEditingTypes;
@property(assign,copy) NSPredicate * condition;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) _UISettings * groupChild;
@property(assign,retain) NSString * groupKeyPath;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * imageKeyPath;
@property(assign,readwrite) PTSSection * section;
@property(assign,retain) _UISettings * settings;
@property(assign,retain) UIImage * staticImage;
@property(assign,copy) NSString * staticTitle;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * titleKeyPath;
@property(assign,retain) id value;
@property(assign,copy) id valueFormatter;
@property(assign,copy) NSString * valueKeyPath;
@property(assign,copy) id valueValidatator;

+ (id)row;
+ (id)rowWithTitle:(id)arg1 valueKeyPath:(id)arg2;

- (void).cxx_destruct;
- (void)_sendImageChanged;
- (void)_sendTitleChanged;
- (void)_sendValueChanged;
- (id)action;
- (id)action:(id)arg1;
- (void)addObserver:(id)arg1;
- (long long)allowedEditingTypes;
- (id)allowedEditingTypes:(long long)arg1;
- (bool)allowsDelete;
- (bool)allowsDuplicate;
- (bool)allowsReorder;
- (bool)allowsShare;
- (id)childSettingsForKeyPath:(id)arg1;
- (id)concreteCopyWithIndex:(unsigned long long)arg1;
- (id)condition;
- (id)condition:(id)arg1;
- (id)conditionFormat:(id)arg1;
- (void)dealloc;
- (id)group;
- (id)groupChild;
- (id)groupKeyPath;
- (id)groupKeyPath:(id)arg1;
- (id)image;
- (id)imageKeyPath;
- (id)imageKeyPath:(id)arg1;
- (id)init;
- (id)pu_increment:(double)arg1;
- (void)removeObserver:(id)arg1;
- (void)resolveTemplatesWithIndex:(unsigned long long)arg1;
- (Class)rowTableViewCellClass;
- (id)section;
- (void)setAction:(id)arg1;
- (void)setAllowedEditingTypes:(long long)arg1;
- (void)setCondition:(id)arg1;
- (void)setGroupChild:(id)arg1;
- (void)setGroupKeyPath:(id)arg1;
- (void)setImageKeyPath:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setStaticImage:(id)arg1;
- (void)setStaticTitle:(id)arg1;
- (void)setTitleKeyPath:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueFormatter:(id)arg1;
- (void)setValueKeyPath:(id)arg1;
- (void)setValueValidatator:(id)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)staticImage;
- (id)staticImage:(id)arg1;
- (id)staticTitle;
- (id)staticTitle:(id)arg1;
- (id)title;
- (id)titleKeyPath;
- (id)titleKeyPath:(id)arg1;
- (void)updateWithRow:(id)arg1;
- (id)value;
- (id)valueFormatter;
- (id)valueFormatter:(id)arg1;
- (id)valueKeyPath;
- (id)valueKeyPath:(id)arg1;
- (id)valueValidatator;
- (id)valueValidator:(id)arg1;

@end