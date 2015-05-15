/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput> {
    bool _allowsMultipleSelection;
    NSArray *_cachedItems;
    double _fontSize;
    NSArray *_groupsAndOptions;
    double _maximumTextWidth;
    UIWebSelectPopover *_popover;
    DOMHTMLSelectElement *_selectionNode;
    unsigned long long _singleSelectionIndex;
    unsigned long long _singleSelectionSection;
    long long _textAlignment;
}

@property(assign,retain) NSArray * _cachedItems;
@property(assign,retain) NSArray * _groupsAndOptions;
@property(assign,readwrite) UIWebSelectPopover * _popover;
@property(assign,retain) DOMHTMLSelectElement * _selectionNode;
@property(assign,readwrite) long long autocapitalizationType;
@property(assign,readwrite) long long autocorrectionType;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool enablesReturnKeyAutomatically;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) long long keyboardAppearance;
@property(assign,readwrite) long long keyboardType;
@property(assign,readwrite) long long returnKeyType;
@property(getter=isSecureTextEntry,assign,readwrite) bool secureTextEntry;
@property(assign,readwrite) long long spellCheckingType;
@property(assign,readonly) Class superclass;

- (id)_cachedItems;
- (id)_groupsAndOptions;
- (bool)_isEmpty;
- (id)_optionsForSection:(long long)arg1;
- (id)_popover;
- (id)_selectionNode;
- (void)_setupGroupsAndOptions;
- (void)dealloc;
- (void)deleteBackward;
- (bool)hasText;
- (id)initWithDOMHTMLSelectNode:(id)arg1 cachedItems:(id)arg2 singleSelectionIndex:(unsigned long long)arg3 multipleSelection:(bool)arg4;
- (void)insertText:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)set_cachedItems:(id)arg1;
- (void)set_groupsAndOptions:(id)arg1;
- (void)set_popover:(id)arg1;
- (void)set_selectionNode:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
