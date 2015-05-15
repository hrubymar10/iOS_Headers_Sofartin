/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapRequest : NSObject {
    id _completionHandler;
    bool _isFinished;
    GEOMapRequestManager *_requestManager;
}

@property (nonatomic, copy) id completionHandler;
@property (nonatomic, readonly) bool isFinished;

- (void)cancel;
- (void)complete;
- (id)completionHandler;
- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (bool)isFinished;
- (void)setCompletionHandler:(id)arg1;

@end
