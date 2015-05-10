/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDTGContext : NSObject {
    <TSDThumbnailConsumer> *_consumer;
    bool _continueThumbnailing;
    <TSDThumbnailProducer> *_producer;
    TSUImage *_thumbnail;
    <TSDThumbnailIdentifier> *_thumbnailId;
}

@property(assign,readonly) <TSDThumbnailConsumer> * consumer;
@property(assign,readwrite) bool continueThumbnailing;
@property(assign,readonly) <TSDThumbnailProducer> * producer;
@property(assign,retain) TSUImage * thumbnail;
@property(assign,readwrite) <TSDThumbnailIdentifier> * thumbnailId;

- (id)consumer;
- (bool)continueThumbnailing;
- (void)dealloc;
- (id)initWithConsumer:(id)arg1 producer:(id)arg2;
- (id)producer;
- (void)setContinueThumbnailing:(bool)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setThumbnailId:(id)arg1;
- (id)thumbnail;
- (id)thumbnailId;

@end