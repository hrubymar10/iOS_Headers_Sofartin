/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPBodyInfo : NSObject <TSDContainerInfo> {
    TPPageInfo *_pageInfo;
}

@property(getter=isAnchoredToText,assign,readonly) bool anchoredToText;
@property(getter=isAttachedToBodyText,assign,readonly) bool attachedToBodyText;
@property(assign,readonly) TSWPStorage * bodyStorage;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(getter=isFloatingAboveText,assign,readonly) bool floatingAboveText;
@property(assign,copy) TSDInfoGeometry * geometry;
@property(assign,readonly) unsigned long long hash;
@property(getter=isInlineWithText,assign,readonly) bool inlineWithText;
@property(assign,readonly) bool layoutVertically;
@property(assign,readwrite) bool matchesObjectPlaceholderGeometry;
@property(assign,readonly) <TSDHint> * nextTargetFirstChildHint;
@property(assign,readonly) <TSWPOffscreenColumn> * nextTargetFirstColumn;
@property(assign,readonly) const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *' */ struct * nextTargetTopicNumbers; /* unknown property attribute:  true> >=Q}}}QQ} */
@property(assign,readwrite) TSPObject<TSDOwningAttachment> * owningAttachment;
@property(assign,readonly) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse;
@property(assign,readonly) TPPageHint * pageHint;
@property(assign,readwrite) NSObject<TSDContainerInfo> * parentInfo;
@property(assign,readonly) <TSWPOffscreenColumn> * previousTargetLastColumn;
@property(assign,readonly) const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *' */ struct * previousTargetTopicNumbers; /* unknown property attribute:  true> >=Q}}}QQ} */
@property(assign,readonly) TSWPStorage * storage;
@property(assign,readonly) Class superclass;

- (id)bodyStorage;
- (id)childInfos;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)geometry;
- (void)inflateBodyLayout:(id)arg1;
- (id)infoForSelectionPath:(id)arg1;
- (bool)isAnchoredToText;
- (bool)isAttachedToBodyText;
- (bool)isFloatingAboveText;
- (bool)isInlineWithText;
- (bool)isThemeContent;
- (Class)layoutClass;
- (bool)layoutVertically;
- (id)nextTargetFirstChildHint;
- (id)nextTargetFirstColumn;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned long long x2; unsigned long long x3; }*)nextTargetTopicNumbers;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (id)pageHint;
- (id)parentInfo;
- (id)previousTargetLastColumn;
- (const struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; unsigned long long x2; unsigned long long x3; }*)previousTargetTopicNumbers;
- (Class)repClass;
- (void)setGeometry:(id)arg1;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)setPrimitiveGeometry:(id)arg1;
- (id)storage;

@end
