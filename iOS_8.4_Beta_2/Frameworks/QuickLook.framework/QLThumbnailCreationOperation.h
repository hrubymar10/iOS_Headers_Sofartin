/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThumbnailCreationOperation : NSOperation {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _contentRect;
    NSURL *_documentURL;
    NSError *_error;
    bool _executing;
    bool _finished;
    UIImage *_image;
    double _maximumDimension;
    double _scaleFactor;
    unsigned long long _useMode;
}

@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property(assign,retain) NSURL * documentURL;
@property(assign,retain) NSError * error;
@property(assign,retain) UIImage * image;
@property(assign,readwrite) double maximumDimension;
@property(assign,readwrite) double scaleFactor;
@property(assign,readwrite) unsigned long long useMode;

- (void)_finish;
- (bool)_finishIfCancelled;
- (void)checkIfThumbnailExistsAtPhysicalURL:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (void)dealloc;
- (id)documentURL;
- (id)error;
- (id)image;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (double)maximumDimension;
- (void)retrieveThumbnailForPhysicalURL:(id)arg1 hasThumbnailInIndex:(bool)arg2;
- (double)scaleFactor;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDocumentURL:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setMaximumDimension:(double)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setUseMode:(unsigned long long)arg1;
- (void)start;
- (unsigned long long)useMode;

@end
