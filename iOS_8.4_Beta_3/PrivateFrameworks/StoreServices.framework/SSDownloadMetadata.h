/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadMetadata : NSObject <NSCoding, NSCopying, SSXPCCoding> {
    NSMutableDictionary *_dictionary;
    long long _keyStyle;
    NSLock *_lock;
}

@property(assign,readonly) NSArray * MD5HashStrings;
@property(assign,retain) NSData * appReceiptData;
@property(assign,readwrite) unsigned long long artistIdentifier;
@property(assign,copy) NSString * artistName;
@property(getter=isAutomaticDownload,assign,readwrite) bool automaticDownload;
@property(assign,retain) NSURL * cancelDownloadURL;
@property(getter=isContentRestricted,assign,readonly) bool contentRestricted;
@property(assign,retain) NSString * copyright;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSDictionary * dictionary;
@property(assign,retain) NSString * downloadKey;
@property(assign,readonly) NSNumber * downloaderAccountIdentifier;
@property(assign,retain) NSData * epubRightsData;
@property(assign,retain) NSString * fileExtension;
@property(assign,retain) NSURL * fullSizeImageURL;
@property(assign,retain) NSString * genre;
@property(assign,readwrite) unsigned long long genreIdentifier;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) unsigned long long itemIdentifier;
@property(assign,readwrite) long long keyStyle;
@property(assign,retain) NSString * kind;
@property(assign,retain) NSURL * launchExtrasUrl;
@property(assign,copy) NSString * longDescription;
@property(assign,readonly) NSNumber * numberOfBytesToHash;
@property(assign,copy) NSString * pageProgressionDirection;
@property(assign,readwrite) unsigned long long preOrderIdentifier;
@property(assign,copy) NSString * preferredAssetFlavor;
@property(assign,readonly) NSDictionary * primaryAssetDictionary;
@property(assign,retain) NSURL * primaryAssetURL;
@property(assign,copy) NSString * redownloadActionParameters;
@property(getter=isRedownloadDownload,assign,readwrite) bool redownloadDownload;
@property(assign,retain) NSDate * releaseDate;
@property(assign,retain) NSString * releaseDateString;
@property(assign,retain) NSNumber * releaseYear;
@property(assign,copy) id requiredDeviceCapabilities;
@property(assign,copy) NSString * shortDescription;
@property(assign,readwrite) bool shouldDownloadAutomatically;
@property(assign,retain) NSArray * sinfs;
@property(assign,retain) NSString * sortArtistName;
@property(assign,retain) NSString * sortCollectionName;
@property(assign,retain) NSString * sortTitle;
@property(assign,retain) NSString * subtitle;
@property(assign,readonly) Class superclass;
@property(assign,readonly) SSItemImageCollection * thumbnailImageCollection;
@property(assign,retain) NSURL * thumbnailImageURL;
@property(assign,retain) NSString * thumbnailNewsstandBindingEdge;
@property(assign,retain) NSString * thumbnailNewsstandBindingType;
@property(assign,retain) NSString * title;
@property(assign,retain) NSString * transactionIdentifier;
@property(assign,copy) NSURL * transitMapDataURL;

- (id)MD5HashStrings;
- (id)_assetDictionary;
- (id)_dateValueForValue:(id)arg1;
- (id)_newDateFormatter;
- (id)_newImageCollectionWithURLString:(id)arg1;
- (id)_releaseDateValue;
- (void)_setValue:(id)arg1 forTopLevelKey:(id)arg2;
- (void)_setValueCopy:(id)arg1 forMetadataKey:(id)arg2;
- (id)_stringValueForValue:(id)arg1;
- (id)_thumbnailArtworkImage;
- (id)_urlValueForValue:(id)arg1;
- (id)_valueForFirstAvailableTopLevelKey:(id)arg1;
- (id)appReceiptData;
- (id)applicationIdentifier;
- (unsigned long long)artistIdentifier;
- (id)artistName;
- (bool)artworkIsPrerendered;
- (id)bundleIdentifier;
- (id)cancelDownloadURL;
- (id)cloudIdentifier;
- (id)collectionArtistName;
- (unsigned long long)collectionIdentifier;
- (id)collectionIndexInCollectionGroup;
- (id)collectionName;
- (unsigned long long)composerIdentifier;
- (id)composerName;
- (id)contentRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWritableMetadata;
- (id)copyXPCEncoding;
- (id)copyright;
- (void)dealloc;
- (id)dictionary;
- (id)documentTargetIdentifier;
- (id)downloadKey;
- (id)downloaderAccountIdentifier;
- (id)durationInMilliseconds;
- (void)encodeWithCoder:(id)arg1;
- (id)episodeIdentifier;
- (id)episodeSortIdentifier;
- (id)epubRightsData;
- (id)fileExtension;
- (id)fullSizeImageURL;
- (id)genre;
- (unsigned long long)genreIdentifier;
- (id)indexInCollection;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (id)initWithKind:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isAutomaticDownload;
- (bool)isCompilation;
- (bool)isContentRestricted;
- (bool)isExplicitContent;
- (bool)isHighDefinition;
- (bool)isRedownloadDownload;
- (bool)isRental;
- (bool)isSample;
- (unsigned long long)itemIdentifier;
- (long long)keyStyle;
- (id)kind;
- (id)launchExtrasUrl;
- (id)longDescription;
- (id)longSeasonDescription;
- (id)networkName;
- (id)newDownloadProperties;
- (id)numberOfBytesToHash;
- (id)numberOfCollectionsInCollectionGroup;
- (id)numberOfItemsInCollection;
- (id)pageProgressionDirection;
- (id)podcastEpisodeGUID;
- (id)podcastFeedURL;
- (id)podcastType;
- (unsigned long long)preOrderIdentifier;
- (id)preferredAssetFlavor;
- (id)primaryAssetDictionary;
- (id)primaryAssetURL;
- (id)purchaseDate;
- (id)redownloadActionParameters;
- (id)releaseDate;
- (id)releaseDateString;
- (id)releaseYear;
- (id)requiredDeviceCapabilities;
- (unsigned long long)sagaIdentifier;
- (id)seasonNumber;
- (id)seriesName;
- (void)setArtistIdentifier:(unsigned long long)arg1;
- (void)setArtistName:(id)arg1;
- (void)setArtworkIsPrerendered:(bool)arg1;
- (void)setAutomaticDownload:(bool)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCancelDownloadURL:(id)arg1;
- (void)setCloudIdentifier:(id)arg1;
- (void)setCollectionArtistName:(id)arg1;
- (void)setCollectionIdentifier:(unsigned long long)arg1;
- (void)setCollectionIndexInCollectionGroup:(id)arg1;
- (void)setCollectionName:(id)arg1;
- (void)setCompilation:(bool)arg1;
- (void)setComposerIdentifier:(unsigned long long)arg1;
- (void)setComposerName:(id)arg1;
- (void)setContentRating:(id)arg1;
- (void)setCopyright:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setDocumentTargetIdentifier:(id)arg1;
- (void)setDownloadKey:(id)arg1;
- (void)setDurationInMilliseconds:(id)arg1;
- (void)setEpisodeIdentifier:(id)arg1;
- (void)setEpisodeSortIdentifier:(id)arg1;
- (void)setEpubRightsData:(id)arg1;
- (void)setExplicitContent:(bool)arg1;
- (void)setFileExtension:(id)arg1;
- (void)setFullSizeImageURL:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setGenreIdentifier:(unsigned long long)arg1;
- (void)setHighDefinition:(bool)arg1;
- (void)setIndexInCollection:(id)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (void)setKeyStyle:(long long)arg1;
- (void)setKind:(id)arg1;
- (void)setLaunchExtrasUrl:(id)arg1;
- (void)setLongDescription:(id)arg1;
- (void)setLongSeasonDescription:(id)arg1;
- (void)setMD5HashStrings:(id)arg1 numberOfBytesToHash:(id)arg2;
- (void)setNetworkName:(id)arg1;
- (void)setNumberOfCollectionsInCollectionGroup:(id)arg1;
- (void)setNumberOfItemsInCollection:(id)arg1;
- (void)setPageProgressionDirection:(id)arg1;
- (void)setPodcastEpisodeGUID:(id)arg1;
- (void)setPodcastFeedURL:(id)arg1;
- (void)setPodcastType:(id)arg1;
- (void)setPreOrderIdentifier:(unsigned long long)arg1;
- (void)setPreferredAssetFlavor:(id)arg1;
- (void)setPrimaryAssetURL:(id)arg1;
- (void)setPurchaseDate:(id)arg1;
- (void)setRedownloadActionParameters:(id)arg1;
- (void)setRedownloadDownload:(bool)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setReleaseDateString:(id)arg1;
- (void)setReleaseYear:(id)arg1;
- (void)setRental:(bool)arg1;
- (void)setRequiredDeviceCapabilities:(id)arg1;
- (void)setSagaIdentifier:(unsigned long long)arg1;
- (void)setSample:(bool)arg1;
- (void)setSeasonNumber:(id)arg1;
- (void)setSeriesName:(id)arg1;
- (void)setShortDescription:(id)arg1;
- (void)setShouldDownloadAutomatically:(bool)arg1;
- (void)setSinfs:(id)arg1;
- (void)setSortArtistName:(id)arg1;
- (void)setSortCollectionName:(id)arg1;
- (void)setSortTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThumbnailImageURL:(id)arg1;
- (void)setThumbnailNewsstandBindingEdge:(id)arg1;
- (void)setThumbnailNewsstandBindingType:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (void)setTransitMapDataURL:(id)arg1;
- (void)setValue:(id)arg1 forMetadataKey:(id)arg2;
- (void)setValuesFromDownload:(id)arg1;
- (void)setVideoDetailsDictionary:(id)arg1;
- (void)setViewStoreItemURL:(id)arg1;
- (id)shortDescription;
- (bool)shouldDownloadAutomatically;
- (id)sinfs;
- (id)sortArtistName;
- (id)sortCollectionName;
- (id)sortTitle;
- (id)subtitle;
- (id)thumbnailImageCollection;
- (id)thumbnailImageURL;
- (id)thumbnailNewsstandBindingEdge;
- (id)thumbnailNewsstandBindingType;
- (id)title;
- (id)transactionIdentifier;
- (id)transitMapDataURL;
- (id)valueForFirstAvailableKey:(id)arg1;
- (id)valueForMetadataKey:(id)arg1;
- (id)videoDetailsDictionary;
- (id)viewStoreItemURL;

@end
