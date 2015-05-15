/* Generated by RuntimeBrowser.
 */

@protocol TSKSearchable <TSKModel>

@optional

- (TSKReplaceAllChildCommand *)childCommandForReplaceAllCommand:(TSKReplaceAllCommand *)arg1;
- (void)continueAnnotationSearch:(TSKSearch *)arg1;
- (void)continueSearch:(TSKSearch *)arg1;
- (TSKSearch *)searchForAnnotationsWithHitBlock:(id)arg1;
- (TSKSearch *)searchForString:(NSString *)arg1 options:(unsigned long long)arg2 searchCanvasDelegate:(id <TSKSearchCanvasDelegate>)arg3 onHit:(id)arg4;

@end
