/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewConverter : NSObject {
    NSDictionary *_options;
    QLPreviewParts *_previewParts;
}

@property (nonatomic, readonly) NSString *previewFileName;
@property (nonatomic, readonly) QLPreviewParts *previewParts;
@property (nonatomic, readonly) NSURLRequest *previewRequest;
@property (nonatomic, readonly) NSURLResponse *previewResponse;
@property (nonatomic, readonly) NSString *previewUTI;

+ (id)_csvUTIs;
+ (id)_iWorkUTIs;
+ (id)_lpdfUTIs;
+ (id)_officeUTIs;
+ (id)_rtfUTIs;
+ (id)_spreadSheetUTIs;
+ (bool)canConvertDocumentType:(id)arg1;
+ (bool)isCSVDocumentType:(id)arg1;
+ (bool)isIWorkDocumentType:(id)arg1;
+ (bool)isLPDFDocumentType:(id)arg1;
+ (bool)isOfficeDocumentType:(id)arg1;
+ (bool)isRTFDocumentType:(id)arg1;
+ (bool)isSafeRequest:(id)arg1;
+ (bool)isSafeURL:(id)arg1;
+ (bool)isSpreadSheetDocumentType:(id)arg1;

- (void)_register;
- (void)appendData:(id)arg1;
- (void)appendDataArray:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (void)finishConverting;
- (void)finishedAppendingData;
- (bool)htmlErrorDisabled;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 response:(id)arg3 options:(id)arg4;
- (id)initWithData:(id)arg1 name:(id)arg2 uti:(id)arg3 options:(id)arg4;
- (id)initWithURL:(id)arg1 uti:(id)arg2 options:(id)arg3;
- (bool)isCancelled;
- (bool)isComputed;
- (id)previewFileName;
- (id)previewParts;
- (id)previewRequest;
- (id)previewResponse;
- (id)previewUTI;
- (id)safeRequestForRequest:(id)arg1;
- (void)setHtmlErrorDisabled:(bool)arg1;

@end
