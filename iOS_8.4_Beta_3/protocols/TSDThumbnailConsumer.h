/* Generated by RuntimeBrowser.
 */

@protocol TSDThumbnailConsumer <NSObject>

@required

- (<TSDThumbnailIdentifier> *)nextThumbnailIdentifier;
- (void)updateThumbnail:(TSUImage *)arg1 identifier:(id <TSDThumbnailIdentifier>)arg2 continueThumbnailing:(bool)arg3;

@optional

- (void)commitThumbnail:(TSUImage *)arg1 identifier:(id <TSDThumbnailIdentifier>)arg2;
- (bool)shouldCallCommit;

@end
