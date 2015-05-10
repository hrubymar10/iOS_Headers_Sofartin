/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDThumbnailGenerator : NSObject {
    TSKDocumentRoot *_documentRoot;
    TSDImager *_imager;
}

@property(assign,readwrite) struct CGColor { }* backgroundColor;

- (struct CGColor { }*)backgroundColor;
- (void)dealloc;
- (id)drawImageSynchronouslyForThumbnailId:(id)arg1 producer:(id)arg2;
- (void)generateThumbnailForConsumer:(id)arg1 producer:(id)arg2;
- (void)generateThumbnailForThumbnailId:(id)arg1 consumer:(id)arg2 producer:(id)arg3 continueThumbnailing:(bool)arg4;
- (void)idle;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)p_initialReadCallback:(id)arg1;
- (void)p_mainThreadReadCallback:(id)arg1;
- (struct CGImage { }*)p_newThumbnailForProducer:(id)arg1 identifier:(id)arg2;
- (void)p_writeCallback:(id)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;

@end
