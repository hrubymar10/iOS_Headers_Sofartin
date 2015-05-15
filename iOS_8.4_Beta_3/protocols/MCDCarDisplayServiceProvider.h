/* Generated by RuntimeBrowser.
 */

@protocol MCDCarDisplayServiceProvider <NSObject>

@required

- (void)changeRepeatType:(unsigned long long)arg1;
- (void)changeShuffleType:(unsigned long long)arg1;
- (void)reloadPlayer:(MPAVController *)arg1 geniusMixPlaylist:(MPMediaPlaylist *)arg2 options:(NSDictionary *)arg3;
- (void)reloadPlayer:(MPAVController *)arg1 mediaQuery:(MPMediaQuery *)arg2 options:(NSDictionary *)arg3;
- (void)reloadPlayer:(MPAVController *)arg1 radioStation:(RadioStation *)arg2 options:(NSDictionary *)arg3 completion:(id)arg4;

@end