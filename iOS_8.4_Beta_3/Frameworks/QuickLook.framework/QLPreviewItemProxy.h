/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewItemProxy : NSObject <NSSecureCoding, QLPreviewItem> {
    double _autoPlaybackPosition;
    UIColor *_backgroundColorOverride;
    NSString *_contentType;
    long long _fileExtensionHandle;
    NSString *_fileExtensionToken;
    long long _index;
    bool _isPromisedItem;
    NSString *_password;
    NSString *_title;
    NSURL *_url;
    NSURL *_urlForDisplay;
    NSUUID *_uuid;
}

@property(assign,readwrite) double autoPlaybackPosition;
@property(assign,retain) UIColor * backgroundColorOverride;
@property(assign,retain) NSString * contentType;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) long long index;
@property(assign,readwrite) bool isPromisedItem;
@property(assign,retain) NSString * password;
@property(assign,readonly) NSString * previewItemTitle;
@property(assign,readonly) NSURL * previewItemURL;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSString * title;
@property(assign,retain) NSURL * url;
@property(assign,retain) NSURL * urlForDisplay;
@property(assign,readonly) NSUUID * uuid;

+ (id)encodedClasses;
+ (id)proxyWithPreviewItem:(id)arg1;
+ (bool)supportsSecureCoding;

- (double)autoPlaybackPosition;
- (id)backgroundColorOverride;
- (void)consumeFileExtension;
- (id)contentType;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreviewItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPromisedItem;
- (void)issueFileExtension;
- (id)password;
- (id)previewItemContentType;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)previewItemURLForDisplay;
- (void)setAutoPlaybackPosition:(double)arg1;
- (void)setBackgroundColorOverride:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setIsPromisedItem:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUrlForDisplay:(id)arg1;
- (id)title;
- (id)url;
- (id)urlForDisplay;
- (id)uuid;

@end
