/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityViewTracklistItemContentDescriptor : MusicEntityViewContentDescriptor {
    NSArray *_detailTextDescriptors;
    MusicEntityViewContentTextDescriptor *_leadingTextDescriptor;
    MusicEntityViewContentTextDescriptor *_trailingTextDescriptor;
    bool _wantsMediaTypeImage;
}

@property(assign,copy) NSArray * detailTextDescriptors;
@property(assign,retain) MusicEntityViewContentTextDescriptor * leadingTextDescriptor;
@property(assign,retain) MusicEntityViewContentTextDescriptor * trailingTextDescriptor;
@property(assign,readwrite) bool wantsMediaTypeImage;

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
