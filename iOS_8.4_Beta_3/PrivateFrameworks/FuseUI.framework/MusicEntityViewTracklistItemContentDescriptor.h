/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityViewTracklistItemContentDescriptor : MusicEntityViewContentDescriptor {
    NSArray *_detailTextDescriptors;
    MusicEntityViewContentTextDescriptor *_leadingTextDescriptor;
    MusicEntityViewContentTextDescriptor *_trailingTextDescriptor;
    bool _wantsMediaTypeImage;
}

@property (nonatomic, copy) NSArray *detailTextDescriptors;
@property (nonatomic, retain) MusicEntityViewContentTextDescriptor *leadingTextDescriptor;
@property (nonatomic, retain) MusicEntityViewContentTextDescriptor *trailingTextDescriptor;
@property (nonatomic) bool wantsMediaTypeImage;

+ (Class)tableViewCellClass;
+ (id)tableViewCellReuseIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detailTextDescriptors;
- (id)leadingTextDescriptor;
- (void)setDetailTextDescriptors:(id)arg1;
- (void)setLeadingTextDescriptor:(id)arg1;
- (void)setTrailingTextDescriptor:(id)arg1;
- (void)setWantsMediaTypeImage:(bool)arg1;
- (id)textDescriptors;
- (id)trailingTextDescriptor;
- (bool)wantsMediaTypeImage;

@end
