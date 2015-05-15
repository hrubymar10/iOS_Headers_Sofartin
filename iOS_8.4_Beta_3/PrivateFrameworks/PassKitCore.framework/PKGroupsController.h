/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKGroupsController : NSObject <PKPassLibraryDelegate> {
    bool _activePassesOnly;
    PKCatalog *_catalogBeforeReordering;
    <PKGroupsControllerDelegate> *_delegate;
    bool _enqueueRemoteUpdates;
    NSMutableArray *_enqueuedUpdates;
    NSMutableDictionary *_groupIDsByPassUniqueID;
    NSMutableArray *_groups;
    NSMutableDictionary *_groupsByGroupID;
    NSMutableDictionary *_indicesByGroupID;
    bool _limitedMode;
    NSArray *_localPasses;
    PKPassLibrary *_passLibrary;
    unsigned long long _passTypeMask;
    NSMutableDictionary *_passesByUniqueID;
    bool _reorderingEnabled;
    bool _shouldSeparatePaymentPasses;
    bool _suppressRemoteUpdates;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <PKGroupsControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(getter=isReorderingEnabled,assign,readonly) bool reorderingEnabled;
@property(assign,readwrite) bool shouldSeparatePaymentPasses;
@property(assign,readonly) Class superclass;

- (id)_copyRemoteCatalog;
- (unsigned long long)_destinationIndexForGroupID:(id)arg1 catalogGroups:(id)arg2 skippingNewGroupsAfterIndex:(unsigned long long)arg3;
- (void)_fixIndex:(unsigned long long)arg1;
- (void)_fixIndicesFrom:(unsigned long long)arg1;
- (void)_fixIndicesFrom:(unsigned long long)arg1 through:(unsigned long long)arg2;
- (void)_getPassesAndCatalogWithHandler:(id)arg1;
- (bool)_groupIDIsNew:(id)arg1;
- (unsigned long long)_indexOfGroupID:(id)arg1;
- (void)_insertGroup:(id)arg1 atIndex:(unsigned long long)arg2 notify:(bool)arg3;
- (void)_insertLocalGroupsIntoCatalog:(id)arg1 withPassesByUniqueID:(id)arg2;
- (void)_moveGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 notify:(bool)arg4;
- (id)_passesDictionaryFromSet:(id)arg1;
- (void)_performEnqueuedUpdates;
- (void)_performOrEnqueueUpdate:(id)arg1;
- (void)_placeGroup:(id)arg1 atIndex:(unsigned long long)arg2 notify:(bool)arg3;
- (void)_removeGroup:(id)arg1 notify:(bool)arg2;
- (id)_updateAndCreateGroupsWithCatalog:(id)arg1 passesByUniqueID:(id)arg2 notify:(bool)arg3;
- (void)_updateStateWithCatalog:(id)arg1 passes:(id)arg2 notify:(bool)arg3;
- (void)addLocalPasses:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)enableRemoteUpdates;
- (id)groupAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupCount;
- (unsigned long long)groupIndexForPassUniqueID:(id)arg1;
- (void)handleUserPassDelete:(id)arg1;
- (void)handleUserPassIngestionWithData:(id)arg1 completion:(id)arg2;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)indexOfSeparationGroup;
- (id)init;
- (id)initLimited;
- (id)initWithPassTypeMask:(unsigned long long)arg1;
- (bool)isReorderingEnabled;
- (void)loadGroupsSynchronously;
- (void)loadGroupsWithCompletion:(id)arg1;
- (void)moveGroupAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3;
- (void)preloadGroupsAndFrontFaceImages;
- (void)reloadGroups;
- (void)reloadGroupsAndNotify:(bool)arg1 completion:(id)arg2;
- (void)reloadGroupsWithCompletion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldSeparatePaymentPasses:(bool)arg1;
- (bool)shouldSeparatePaymentPasses;
- (void)suppressRemoteUpdates:(bool)arg1;

@end
