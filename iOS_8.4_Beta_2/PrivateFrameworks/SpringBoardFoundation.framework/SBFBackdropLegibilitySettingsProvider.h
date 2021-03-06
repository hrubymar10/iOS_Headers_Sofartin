/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFBackdropLegibilitySettingsProvider : NSObject <SBFLegibilitySettingsProvider, _UIBackdropViewObserver> {
    _UIBackdropView *_backdropView;
    <SBFLegibilitySettingsProviderDelegate> *_delegate;
    _UILegibilitySettings *_legibilitySettings;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SBFLegibilitySettingsProviderDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) _UILegibilitySettings * legibilitySettings;
@property(assign,readonly) Class superclass;

- (void)backdropViewDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithBackdropView:(id)arg1;
- (id)legibilitySettings;
- (void)setDelegate:(id)arg1;

@end
