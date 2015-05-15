/* Generated by RuntimeBrowser.
 */

@protocol TSDAnnotationHosting <NSObject, TSKAnnotation>

@required

- (TSKAnnotationAuthor *)author;
- (void)commentWillBeAddedToDocumentRoot;
- (void)commitText:(NSString *)arg1;
- (NSDate *)date;
- (<TSKModel> *)hostingModel;
- (bool)isEqual:(id)arg1;
- (void)setAuthor:(TSKAnnotationAuthor *)arg1;
- (void)setHostingModel:(id <TSKModel>)arg1;

@optional

- (NSString *)changeTrackingContentFormatString;
- (NSString *)changeTrackingContentString;
- (NSString *)changeTrackingTitleString;
- (void)setStorage:(TSDCommentStorage *)arg1;
- (TSDCommentStorage *)storage;
- (bool)wantsAnnotationPopover;

@end
