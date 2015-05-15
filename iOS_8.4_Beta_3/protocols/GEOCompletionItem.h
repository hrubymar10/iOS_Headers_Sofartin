/* Generated by RuntimeBrowser.
 */

@protocol GEOCompletionItem <NSObject>

@required

- (NSString *)calloutTitle;
- (NSArray *)displayLines;
- (NSData *)entryMetadata;
- (<GEOMapItem> *)geoMapItem;
- (bool)getCoordinate:(struct { double x1; double x2; }*)arg1;
- (NSArray *)highlightsForLine:(unsigned long long)arg1;
- (NSData *)metadata;
- (NSString *)queryLine;
- (void)sendFeedback;

@end