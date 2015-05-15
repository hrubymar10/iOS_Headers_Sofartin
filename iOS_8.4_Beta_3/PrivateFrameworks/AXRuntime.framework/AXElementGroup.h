/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXElementGroup : NSArray <AXGroupable> {
    NSArray *_elementStore;
    <AXElementGroupGenerator> *_generator;
    NSHashTable *_groupObservers;
    int _groupTraits;
    NSString *_label;
    AXElementGroup *_parentGroup;
    bool _rootGroup;
}

@property(assign,readonly) bool allowsChangingExistingGroupingOfContents;
@property(assign,readonly) bool allowsVisualGroupingOfChildren;
@property(assign,readonly) bool canBeGroupedWithOtherGroupables;
@property(assign,readonly) bool canBeReplacedByChildren;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property(assign,readwrite) <AXElementGroupGenerator> * generator;
@property(assign,retain) NSHashTable * groupObservers;
@property(assign,readwrite) int groupTraits;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSString * label;
@property(assign,readonly) unsigned long long numberOfElements;
@property(assign,readwrite) AXElementGroup * parentGroup;
@property(getter=isRootGroup,assign,readwrite) bool rootGroup;
@property(assign,readonly) bool shouldBeUngrouped;
@property(assign,readonly) Class superclass;

+ (id)groupWithElements:(id)arg1;
+ (id)groupWithElements:(id)arg1 label:(id)arg2;
+ (id)groupWithGenerator:(id)arg1;

- (void)_commonInitWithElements:(id)arg1 label:(id)arg2 generator:(id)arg3;
- (id)_debugBriefDescription;
- (id)_debugDescriptionForTraits;
- (id)_debugFullDescriptionWithIndent:(id)arg1;
- (void)_generateGroupsIfNeeded;
- (void)_notifyGroupObserversDidTransferStateToGroup:(id)arg1;
- (void)_notifyGroupObserversWillTransferStateToGroup:(id)arg1;
- (id)_siblingOfChild:(id)arg1 inDirection:(bool)arg2 didWrap:(bool*)arg3;
- (void)_transferStateToGroup:(id)arg1;
- (bool)allowsChangingExistingGroupingOfContents;
- (bool)allowsVisualGroupingOfChildren;
- (id)ancestorPassingTest:(id)arg1;
- (bool)canBeGroupedWithOtherGroupables;
- (bool)canBeReplacedByChildren;
- (id)childrenPassingTest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)debugDescription;
- (id)debugFullDescription;
- (id)descendantsPassingTest:(id)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)firstChild;
- (id)firstChildMatchingItem:(id)arg1;
- (id)firstChildPassingTest:(id)arg1;
- (id)firstDescendantMatchingItem:(id)arg1;
- (id)firstDescendantPassingTest:(id)arg1;
- (id)firstLeafDescendant;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)generator;
- (id)groupByAppendingGroupable:(id)arg1;
- (id)groupByPrependingGroupable:(id)arg1;
- (id)groupByRemovingGroupable:(id)arg1;
- (id)groupByReplacingGroupable:(id)arg1 withGroupable:(id)arg2;
- (id)groupObservers;
- (int)groupTraits;
- (id)highestAncestorGroup;
- (id)initWithElements:(id)arg1 label:(id)arg2;
- (id)initWithGenerator:(id)arg1;
- (bool)isGroup;
- (bool)isKeyboardContainer;
- (bool)isKeyboardRow;
- (bool)isRootGroup;
- (id)keyboardContainer;
- (id)keyboardContainerRows;
- (id)keyboardRow;
- (id)label;
- (id)lastChild;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nextSiblingOfChild:(id)arg1 didWrap:(bool*)arg2;
- (unsigned long long)numberOfElements;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)parentGroup;
- (id)previousSiblingOfChild:(id)arg1 didWrap:(bool*)arg2;
- (void)registerGroupObserver:(id)arg1;
- (void)setGenerator:(id)arg1;
- (void)setGroupObservers:(id)arg1;
- (void)setGroupTraits:(int)arg1;
- (void)setParentGroup:(id)arg1;
- (void)setRootGroup:(bool)arg1;
- (bool)shouldBeUngrouped;
- (void)unregisterAllGroupObservers;
- (void)unregisterGroupObserver:(id)arg1;

@end