/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNMacUILayout : NSObject <NSCopying, NSMutableCopying> {
    long long mInspectorPaneViewMode;
    bool mShowingInspectorPane;
    bool mShowingLightTable;
    bool mShowingMasterSlides;
    bool mShowingNavigatorViewInSidebar;
    bool mShowingPresenterNotes;
    bool mShowingSidebar;
}

@property(assign,readonly) long long inspectorPaneViewMode;
@property(getter=p_isShowingNavigatorViewInSidebar,assign,readonly) bool p_showingNavigatorViewInSidebar;
@property(getter=isShowingInspectorPane,assign,readonly) bool showingInspectorPane;
@property(getter=isShowingLightTable,assign,readonly) bool showingLightTable;
@property(getter=isShowingMasterSlides,assign,readonly) bool showingMasterSlides;
@property(getter=isShowingPresenterNotes,assign,readonly) bool showingPresenterNotes;
@property(getter=isShowingSidebar,assign,readonly) bool showingSidebar;
@property(assign,readonly) long long sidebarViewMode;

+ (id)uiLayoutFromArchive:(const struct DesktopUILayoutArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; bool x6; bool x7; bool x8; bool x9; int x10; bool x11; }*)arg1 unarchiver:(id)arg2 context:(id)arg3;

- (id)archivedUILayoutInContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (long long)inspectorPaneViewMode;
- (bool)isEqual:(id)arg1;
- (bool)isShowingInspectorPane;
- (bool)isShowingLightTable;
- (bool)isShowingMasterSlides;
- (bool)isShowingPresenterNotes;
- (bool)isShowingSidebar;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)p_isShowingNavigatorViewInSidebar;
- (void)saveToArchive:(struct DesktopUILayoutArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; bool x6; bool x7; bool x8; bool x9; int x10; bool x11; }*)arg1 archiver:(id)arg2;
- (long long)sidebarViewMode;

@end
