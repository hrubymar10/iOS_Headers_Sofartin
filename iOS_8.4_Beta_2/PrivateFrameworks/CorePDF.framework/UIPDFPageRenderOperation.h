/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPageRenderOperation : NSOperation {
    UIPDFPageRenderJob *_job;
    bool executing;
    bool finished;
}

@property(assign,retain) UIPDFPageRenderJob * job;

- (void)completeOperation;
- (void)dealloc;
- (id)initWithJob:(id)arg1;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (id)job;
- (void)main;
- (void)setJob:(id)arg1;
- (void)start;

@end
