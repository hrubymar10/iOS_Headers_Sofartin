/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCardGroup : NSObject <NSCopying> {
    NSArray *_actionItems;
    NSMutableArray *_actions;
    bool _addSpacerFromPreviousGroup;
    CNContact *_contact;
    NSMutableArray *_items;
    NSString *_title;
    bool _useSplitActions;
}

@property(assign,readonly) NSArray * actionItems;
@property(assign,readonly) NSArray * actions;
@property(assign,readwrite) bool addSpacerFromPreviousGroup;
@property(assign,retain) CNContact * contact;
@property(assign,readonly) NSArray * displayItems;
@property(assign,readonly) NSArray * editingItems;
@property(assign,readonly) NSString * title;
@property(assign,readwrite) bool useSplitActions;

+ (id)groupForContact:(id)arg1;

- (id)_loadActionItems;
- (id)actionItems;
- (id)actions;
- (void)addAction:(id)arg1 withTitle:(id)arg2;
- (void)addAction:(id)arg1 withTitle:(id)arg2 color:(id)arg3 transportType:(long long)arg4;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(bool)arg4;
- (bool)addSpacerFromPreviousGroup;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)displayItems;
- (id)editingItems;
- (id)initWithContact:(id)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)removeActionWithTitle:(id)arg1;
- (void)setAddSpacerFromPreviousGroup:(bool)arg1;
- (void)setContact:(id)arg1;
- (void)setUseSplitActions:(bool)arg1;
- (id)title;
- (bool)useSplitActions;

@end
