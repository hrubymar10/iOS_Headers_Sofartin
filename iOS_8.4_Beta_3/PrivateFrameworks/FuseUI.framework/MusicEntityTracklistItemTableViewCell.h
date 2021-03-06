/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityTracklistItemTableViewCell : UITableViewCell <MusicEntityContentDescriptorViewConfiguring, MusicEntityTracklistItemViewDelegate, MusicEntityViewPlaybackStatusObserving> {
    double _leadingTextColumnWidth;
    MusicEntityTracklistItemView *_tracklistItemView;
}

@property (nonatomic, retain) MusicEntityViewContentDescriptor *contentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MusicEntityValueProviding> *entityValueProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic) double leadingTextColumnWidth;
@property (readonly) Class superclass;

+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;

- (void).cxx_destruct;
- (id)contentDescriptor;
- (void)dealloc;
- (id)entityValueProvider;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)leadingTextColumnWidth;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentDescriptor:(id)arg1;
- (void)setEntityDisabled:(bool)arg1;
- (void)setEntityValueProvider:(id)arg1;
- (void)setLeadingTextColumnWidth:(double)arg1;
- (void)setPlaybackStatus:(id)arg1;
- (void)tracklistItemView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2;
- (void)tracklistItemViewDidSelectContextualActionsButton:(id)arg1;
- (bool)tracklistItemViewShouldLayoutAsEditing:(id)arg1;

@end
