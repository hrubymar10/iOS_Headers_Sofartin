/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
 */

@interface FlickrPost : FlickrRequest <NSURLConnectionDelegate> {
    NSURL *_assetURL;
    int _contentType;
    bool _hidden;
    NSData *_photoData;
    long long _photoSetID;
    NSString *_postDescription;
    int _safetyLevel;
    NSArray *_tags;
    NSString *_title;
    unsigned int _visibility;
}

@property (nonatomic, retain) NSURL *assetURL;
@property (nonatomic) int contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidden;
@property (nonatomic, retain) NSData *photoData;
@property (nonatomic) long long photoSetID;
@property (nonatomic, retain) NSString *postDescription;
@property (nonatomic) int safetyLevel;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tags;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) unsigned int visibility;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_uploadData:(id)arg1 toAccount:(id)arg2 completion:(id)arg3;
- (id)assetURL;
- (int)contentType;
- (bool)hidden;
- (id)initWithDictionary:(id)arg1;
- (id)photoData;
- (long long)photoSetID;
- (id)postDescription;
- (int)safetyLevel;
- (id)serializedDictionary;
- (void)setAssetURL:(id)arg1;
- (void)setContentType:(int)arg1;
- (void)setHidden:(bool)arg1;
- (void)setPhotoData:(id)arg1;
- (void)setPhotoSetID:(long long)arg1;
- (void)setPostDescription:(id)arg1;
- (void)setSafetyLevel:(int)arg1;
- (void)setTags:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVisibility:(unsigned int)arg1;
- (id)tags;
- (id)title;
- (bool)uploadToAccount:(id)arg1 completion:(id)arg2;
- (unsigned int)visibility;

@end
