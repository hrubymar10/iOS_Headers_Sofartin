/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageTextAttachment : NSObject {
    NSMutableDictionary *_cache;
}

@property (nonatomic, retain) MFMessageFileWrapper *fileWrapper;

+ (unsigned long long)precedenceLevel;

- (id)_contentTypeByStrippingZipIfNeeded:(bool)arg1;
- (bool)_isSinglePagePDFThatIsAllowedToBeInline;
- (unsigned int)approximateSize;
- (id)cachedValueForKey:(id)arg1;
- (id)contentType;
- (void)dealloc;
- (id)description;
- (void)download;
- (id)fileWrapper;
- (id)fileWrapperForcingDownload:(bool)arg1;
- (bool)hasBeenDownloaded;
- (unsigned int)imageScalingFlags;
- (id)init;
- (id)initWithWrapper:(id)arg1;
- (void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2;
- (bool)isCalendarFile;
- (bool)isContentDownloadable;
- (bool)isContentOpenable;
- (bool)isDisplayableInline;
- (bool)isDisplayableInsidePlugin;
- (bool)isPass;
- (bool)isPlaceholder;
- (struct CGSize { double x1; double x2; })mf_markupSizeForImageScale:(unsigned long long)arg1;
- (id)mf_markupStringForComposition:(bool)arg1 prependBlankLine:(bool)arg2 imageScale:(unsigned long long)arg3;
- (id)mf_markupURL;
- (id)mimePart;
- (id)mimeType;
- (bool)needsRedownload;
- (id)pass;
- (id)persistentUniqueIdentifier;
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;
- (void)setFileWrapper:(id)arg1;
- (void)setImageScalingFlags:(unsigned int)arg1;
- (void)setMimePart:(id)arg1;
- (bool)shouldDownloadAttachmentOnDisplay;
- (id)textEncodingGuess;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;
- (id)unzippedContentType;

@end
