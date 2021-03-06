/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFDocument : NSObject {
    double _cachedWidth;
    struct CGPDFDocument { } *_cgDocument;
    <NSObject><UIPDFDocumentDelegate> *_delegate;
    NSString *_documentID;
    NSString *_documentName;
    unsigned long long _imageCacheCount;
    int _imageCacheLock;
    unsigned long long _imageCacheLookAhead;
    int _lock;
    unsigned long long _numberOfPages;
    UIPDFPageImageCache *_pageImageCache;
    UIPDFPageImageCache *_thumbnailCache;
    int _thumbnailLock;
}

@property(assign,readonly) struct CGPDFDocument { }* CGDocument;
@property(assign,readwrite) <NSObject><UIPDFDocumentDelegate> * delegate;
@property(assign,readonly) NSString * documentID;
@property(assign,readonly) unsigned long long numberOfPages;
@property(assign,retain) UIPDFPageImageCache * pageImageCache;
@property(assign,retain) UIPDFPageImageCache * thumbnailCache;

+ (id)documentNamed:(id)arg1;

- (struct CGPDFDocument { }*)CGDocument;
- (bool)allowsCopying;
- (struct CGPDFDocument { }*)copyCGPDFDocument;
- (bool)copyDocumentTo:(id)arg1;
- (id)copyPageAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)delegate;
- (id)documentID;
- (id)initWithCGPDFDocument:(struct CGPDFDocument { }*)arg1;
- (id)initWithURL:(id)arg1;
- (double)maxHeight;
- (double)maxWidth;
- (unsigned long long)numberOfPages;
- (id)pageAtIndex:(unsigned long long)arg1;
- (id)pageImageCache;
- (void)purgePagesBefore:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageCacheCount:(unsigned long long)arg1 lookAhead:(unsigned long long)arg2;
- (void)setPageImageCache:(id)arg1;
- (void)setThumbnailCache:(id)arg1;
- (double)sumHeight;
- (double)sumWidth;
- (id)thumbnailCache;

@end
