/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDHyperlinkRegion : NSObject {
    TSUBezierPath *mBezierPath;
    NSURL *mURL;
}

@property(assign,retain) NSURL * URL;
@property(assign,retain) TSUBezierPath * bezierPath;

+ (id)hyperlinkRegionWithURL:(id)arg1 bezierPath:(id)arg2;

- (id)URL;
- (id)bezierPath;
- (void)dealloc;
- (id)initWithURL:(id)arg1 bezierPath:(id)arg2;
- (void)setBezierPath:(id)arg1;
- (void)setURL:(id)arg1;

@end
