/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachment : NSObject <QLPreviewItem> {
    MFAttachmentManager *_attachmentManager;
    <MFDataConsumer> *_customConsumer;
    NSString *_disposition;
    unsigned long long _encodedFileSize;
    id _fetchCompletionBlock;
    id _fetchProgressBlock;
    bool _isDataAvailableLocally;
    bool _isUserFacing;
    unsigned long long _lastProgressBytes;
    double _lastProgressTime;
    NSMutableDictionary *_metadata;
    MFMimePart *_part;
    unsigned long long _progressInterval;
    double _progressTimeInterval;
    NSURL *_url;
}

@property(assign,readwrite) MFAttachmentManager * attachmentManager;
@property(assign,readonly) NSString * contentID;
@property(assign,retain) <MFDataConsumer> * customConsumer;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) unsigned long long decodedFileSize;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * disposition;
@property(assign,readwrite) unsigned long long encodedFileSize;
@property(assign,retain) NSString * eventID;
@property(assign,copy) id fetchCompletionBlock;
@property(assign,copy) id fetchProgressBlock;
@property(assign,retain) NSString * fileName;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSString * icsRepresentation;
@property(assign,readwrite) struct CGSize { double x1; double x2; } imageDimensions;
@property(assign,readonly) NSString * inferredMimeType;
@property(assign,readonly) bool isContainedInCompose;
@property(assign,readonly) bool isContainedInRFC822;
@property(assign,readonly) bool isDataAvailableLocally;
@property(assign,readwrite) bool isUserFacing;
@property(assign,readwrite) unsigned long long lastProgressBytes;
@property(assign,readwrite) double lastProgressTime;
@property(assign,readonly) unsigned long long maxSizeAllowedOverCurrentNetwork;
@property(assign,retain) NSString * meetingStorePersistentID;
@property(assign,copy) NSString * mimeType;
@property(assign,retain) MFMimePart * part;
@property(assign,copy) NSString * path;
@property(assign,readonly) NSString * previewItemTitle;
@property(assign,readonly) NSURL * previewItemURL;
@property(assign,readwrite) unsigned long long progressInterval;
@property(assign,readwrite) double progressTimeInterval;
@property(assign,readwrite) unsigned long long setupComplete;
@property(assign,readonly) bool shouldAutoDownload;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSURL * url;

+ (id)passPlaceholder;

- (id)_contentTypeByStrippingZipIfNeeded:(bool)arg1;
- (id)_imageScalingKeyForImageScale:(unsigned long long)arg1;
- (id)attachmentManager;
- (void)cancel;
- (id)className;
- (bool)conformsToType:(id)arg1;
- (double)constrainedWidth;
- (id)contentID;
- (id)contentType;
- (id)customConsumer;
- (void)dealloc;
- (id)decodeFilterWithDataConsumer:(id)arg1;
- (unsigned long long)decodedFileSize;
- (id)description;
- (id)disposition;
- (unsigned long long)encodedFileSize;
- (void)enqueueScaleAttachmentWithCompletionBlock:(id)arg1;
- (id)eventID;
- (id)fetchCompletionBlock;
- (void)fetchData;
- (id)fetchDataSynchronously:(id*)arg1;
- (id)fetchDataSynchronously:(id*)arg1 stripPrivateMetadata:(bool)arg2;
- (id)fetchLocalData;
- (id)fetchLocalData:(id*)arg1 stripPrivateMetadata:(bool)arg2;
- (id)fetchProgressBlock;
- (id)fileAttributes;
- (id)fileName;
- (id)filenameStrippingZipIfNeededUseApplications:(bool)arg1;
- (bool)hasCalendarMetadata;
- (id)icsRepresentation;
- (struct CGSize { double x1; double x2; })imageDimensions;
- (struct CGSize { double x1; double x2; })imageDimensionsWithData:(id)arg1;
- (unsigned long long)imageScalingFlags;
- (id)inferredMimeType;
- (id)initWithURL:(id)arg1 attachmentManager:(id)arg2;
- (bool)isCalendarFile;
- (bool)isContainedInCompose;
- (bool)isContainedInRFC822;
- (bool)isContentOpenable;
- (bool)isContentTypeDisplayableByMobileMail;
- (bool)isDataAvailableLocally;
- (bool)isDisplayableByWebKit;
- (bool)isDisplayableImage;
- (bool)isDisplayableInline;
- (bool)isDisplayableInlineWithData:(id)arg1;
- (bool)isDisplayableInsidePlugin;
- (bool)isDisplayableInsidePluginWithData:(id)arg1;
- (bool)isImageFile;
- (bool)isMedia;
- (bool)isPDFFile;
- (bool)isPass;
- (bool)isRFC822;
- (bool)isRestrictedMIMEType;
- (bool)isSupportedImageType;
- (bool)isUserFacing;
- (unsigned long long)lastProgressBytes;
- (double)lastProgressTime;
- (struct CGSize { double x1; double x2; })markupSizeForImageScale:(unsigned long long)arg1;
- (id)markupStringForCompositionWithPrependedBlankLine:(bool)arg1 imageScale:(unsigned long long)arg2;
- (id)markupStringForDisplayWithData:(id)arg1 displayStyle:(int)arg2 printableWidth:(double)arg3;
- (unsigned long long)maxSizeAllowedOverCurrentNetwork;
- (id)meetingStorePersistentID;
- (id)metadataValueForKey:(id)arg1;
- (id)mimeType;
- (id)part;
- (id)pass;
- (id)passWithError:(id*)arg1;
- (id)path;
- (id)previewItemTitle;
- (id)previewItemURL;
- (unsigned long long)progressInterval;
- (double)progressTimeInterval;
- (id)readFromDisk;
- (unsigned long long)scaleImageToFit:(unsigned long long)arg1 saveScaledImage:(bool)arg2;
- (void)setAttachmentManager:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setCustomConsumer:(id)arg1;
- (void)setDecodedFileSize:(unsigned long long)arg1;
- (void)setDisposition:(id)arg1;
- (void)setEncodedFileSize:(unsigned long long)arg1;
- (void)setEventID:(id)arg1;
- (void)setFetchCompletionBlock:(id)arg1;
- (void)setFetchProgressBlock:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setIcsRepresentation:(id)arg1;
- (void)setImageDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setIsUserFacing:(bool)arg1;
- (void)setLastProgressBytes:(unsigned long long)arg1;
- (void)setLastProgressTime:(double)arg1;
- (void)setMeetingStorePersistentID:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setMimeType:(id)arg1;
- (void)setPart:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setProgressInterval:(unsigned long long)arg1;
- (void)setProgressTimeInterval:(double)arg1;
- (void)setSetupComplete:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (unsigned long long)setupComplete;
- (bool)shouldAutoDownload;
- (id)storageLocationWithMessage:(id)arg1;
- (id)textEncodingGuessWithData:(id)arg1;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;
- (id)url;
- (void)writeToDiskWithData:(id)arg1;

@end