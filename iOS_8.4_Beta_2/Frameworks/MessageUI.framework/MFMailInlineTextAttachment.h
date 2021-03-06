/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailInlineTextAttachment : MFMessageTextAttachment {
    struct CGSize { 
        double width; 
        double height; 
    } _cachedImageSize;
    bool _displayableAsIcon;
    unsigned int _hasBeenDownloaded;
    NSData *_iconImageData;
    MFMimeTextAttachment *_original;
}

@property(assign,readwrite) bool displayableAsIcon;

+ (unsigned long long)precedenceLevel;

- (void)_cacheImageSizeIfNecessary;
- (void)_setImageDimensions:(struct CGSize { double x1; double x2; })arg1;
- (unsigned int)approximateSize;
- (double)constrainedWidth;
- (void)dealloc;
- (bool)displayableAsIcon;
- (void)download;
- (bool)hasBeenDownloaded;
- (struct CGSize { double x1; double x2; })imageDimensions;
- (id)initWithMimeTextAttachment:(id)arg1 andMessageBody:(id)arg2;
- (id)initWithWrapper:(id)arg1;
- (void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2;
- (bool)isDisplayableInline;
- (bool)isDisplayableInsidePlugin;
- (id)mimeTextAttachment;
- (bool)needsRedownload;
- (id)persistentUniqueIdentifier;
- (void)setDisplayableAsIcon:(bool)arg1;
- (void)setDisplayableInline:(bool)arg1;
- (void)setDisplayableInsidePlugin:(bool)arg1;
- (void)setFileWrapper:(id)arg1;
- (void)setNeedsRedownload:(bool)arg1;
- (void)setupForComposition;
- (bool)shouldDownloadAttachmentOnDisplay;
- (id)textEncodingGuess;

@end
