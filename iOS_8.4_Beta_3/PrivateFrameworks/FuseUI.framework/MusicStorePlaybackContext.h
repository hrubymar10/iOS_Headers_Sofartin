/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStorePlaybackContext : MPPlaybackContext {
    MusicClientContext *_clientContext;
    MusicEntityValueContext *_containerEntityValueContext;
    NSArray *_items;
}

@property(assign,retain) MusicClientContext * clientContext;
@property(assign,copy) MusicEntityValueContext * containerEntityValueContext;
@property(assign,copy) NSArray * items;

+ (Class)queueFeederClass;
+ (void)setDefaultClientContext:(id)arg1;

- (void).cxx_destruct;
- (id)clientContext;
- (id)containerEntityValueContext;
- (id)init;
- (id)initWithStoreIDs:(id)arg1;
- (id)items;
- (void)setClientContext:(id)arg1;
- (void)setContainerEntityValueContext:(id)arg1;
- (void)setItems:(id)arg1;

@end
