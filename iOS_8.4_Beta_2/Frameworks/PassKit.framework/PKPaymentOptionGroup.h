/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentOptionGroup : NSObject {
    bool _editable;
    NSString *_groupDisplayMode;
    NSString *_groupDisplayName;
    NSString *_groupType;
    long long _indexForSelectedItem;
    NSArray *_items;
    NSString *_readOnlyDisplayName;
    id _selectionChangedHandler;
}

@property(assign,readonly) NSString * abTitleDisplayName;
@property(assign,readonly) NSString * addExistingDisplayName;
@property(assign,readonly) NSString * addNewDisplayName;
@property(getter=isEditable,assign,readwrite) bool editable;
@property(assign,retain) NSString * groupDisplayMode;
@property(assign,retain) NSString * groupDisplayName;
@property(assign,copy) NSString * groupType;
@property(assign,readwrite) long long indexForSelectedItem;
@property(assign,retain) NSArray * items;
@property(assign,retain) NSString * readOnlyDisplayName;
@property(assign,copy) id selectionChangedHandler;

- (id)abTitleDisplayName;
- (id)addExistingDisplayName;
- (id)addNewDisplayName;
- (void)dealloc;
- (id)groupDisplayMode;
- (id)groupDisplayName;
- (id)groupType;
- (long long)indexForSelectedItem;
- (id)init;
- (bool)isEditable;
- (id)items;
- (void)prependGroupItem:(id)arg1 promoteAndCoalesceDupes:(bool)arg2;
- (void)prependGroupItems:(id)arg1 afterItem:(id)arg2;
- (id)readOnlyDisplayName;
- (void)removeGroupItem:(id)arg1;
- (id)selectionChangedHandler;
- (void)setEditable:(bool)arg1;
- (void)setGroupDisplayMode:(id)arg1;
- (void)setGroupDisplayName:(id)arg1;
- (void)setGroupType:(id)arg1;
- (void)setIndexForSelectedItem:(long long)arg1;
- (void)setItems:(id)arg1;
- (void)setReadOnlyDisplayName:(id)arg1;
- (void)setSelectionChangedHandler:(id)arg1;

@end
