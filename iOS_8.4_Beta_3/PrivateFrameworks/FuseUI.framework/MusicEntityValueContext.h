/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityValueContext : NSObject <NSCopying> {
    <MusicEntityValueProviding> *_containerEntityValueProvider;
    MPUContentItemIdentifierCollection *_containerIdentifierCollection;
    MPPlaybackContext *_containerPlaybackContext;
    <MusicEntityValueProviding> *_itemEntityValueProvider;
    unsigned long long _itemGlobalIndex;
    MPUContentItemIdentifierCollection *_itemIdentifierCollection;
    MPPlaybackContext *_itemPlaybackContext;
    bool _wantsContainerEntityValueProvider;
    bool _wantsContainerIdentifierCollection;
    bool _wantsContainerPlaybackContext;
    bool _wantsItemEntityValueProvider;
    bool _wantsItemGlobalIndex;
    bool _wantsItemIdentifierCollection;
    bool _wantsItemPlaybackContext;
}

@property(assign,retain) <MusicEntityValueProviding> * containerEntityValueProvider;
@property(assign,copy) MPUContentItemIdentifierCollection * containerIdentifierCollection;
@property(assign,retain) MPPlaybackContext * containerPlaybackContext;
@property(assign,readonly) <MusicEntityValueProviding> * entityValueProvider;
@property(assign,retain) <MusicEntityValueProviding> * itemEntityValueProvider;
@property(assign,readwrite) unsigned long long itemGlobalIndex;
@property(assign,copy) MPUContentItemIdentifierCollection * itemIdentifierCollection;
@property(assign,retain) MPPlaybackContext * itemPlaybackContext;
@property(assign,readwrite) bool wantsContainerEntityValueProvider;
@property(assign,readwrite) bool wantsContainerIdentifierCollection;
@property(assign,readwrite) bool wantsContainerPlaybackContext;
@property(assign,readwrite) bool wantsItemEntityValueProvider;
@property(assign,readwrite) bool wantsItemGlobalIndex;
@property(assign,readwrite) bool wantsItemIdentifierCollection;
@property(assign,readwrite) bool wantsItemPlaybackContext;

- (void).cxx_destruct;
- (void)configureWithMediaEntity:(id)arg1;
- (id)containerEntityValueProvider;
- (id)containerIdentifierCollection;
- (id)containerPlaybackContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entityValueProvider;
- (id)init;
- (id)itemEntityValueProvider;
- (unsigned long long)itemGlobalIndex;
- (id)itemIdentifierCollection;
- (id)itemPlaybackContext;
- (void)resetOutputValues;
- (void)setContainerEntityValueProvider:(id)arg1;
- (void)setContainerIdentifierCollection:(id)arg1;
- (void)setContainerPlaybackContext:(id)arg1;
- (void)setItemEntityValueProvider:(id)arg1;
- (void)setItemGlobalIndex:(unsigned long long)arg1;
- (void)setItemIdentifierCollection:(id)arg1;
- (void)setItemPlaybackContext:(id)arg1;
- (void)setWantsContainerEntityValueProvider:(bool)arg1;
- (void)setWantsContainerIdentifierCollection:(bool)arg1;
- (void)setWantsContainerPlaybackContext:(bool)arg1;
- (void)setWantsItemEntityValueProvider:(bool)arg1;
- (void)setWantsItemGlobalIndex:(bool)arg1;
- (void)setWantsItemIdentifierCollection:(bool)arg1;
- (void)setWantsItemPlaybackContext:(bool)arg1;
- (bool)wantsContainerEntityValueProvider;
- (bool)wantsContainerIdentifierCollection;
- (bool)wantsContainerPlaybackContext;
- (bool)wantsItemEntityValueProvider;
- (bool)wantsItemGlobalIndex;
- (bool)wantsItemIdentifierCollection;
- (bool)wantsItemPlaybackContext;

@end