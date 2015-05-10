/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLStreamShareSource : NSObject {
    NSString *_fileExtension;
    NSData *_mediaData;
    long long _mediaType;
    NSURL *_mediaURL;
}

@property(assign,retain) NSString * fileExtension;
@property(assign,retain) NSData * mediaData;
@property(assign,readwrite) long long mediaType;
@property(assign,retain) NSURL * mediaURL;

- (id)fileExtension;
- (id)initWithDictionary:(id)arg1;
- (id)mediaData;
- (long long)mediaType;
- (id)mediaURL;
- (id)serializedDictionary;
- (void)setFileExtension:(id)arg1;
- (void)setMediaData:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMediaURL:(id)arg1;

@end