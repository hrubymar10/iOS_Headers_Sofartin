/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBLaunchImageContextHostView : UIView {
    NSString *_bundleID;
    id _captureBlock;
    CALayerHost *_contentLayer;
    id _delegate;
    double _remoteScale;
    bool _saved;
}

@property (nonatomic, copy) id captureBlock;
@property (nonatomic) double remoteScale;
@property (getter=isSaved, nonatomic) bool saved;

- (id)captureBlock;
- (void)connectToContextID:(unsigned int)arg1 bundleID:(id)arg2;
- (unsigned int)contextId;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)disconnect;
- (bool)isSaved;
- (double)remoteScale;
- (void)setCaptureBlock:(id)arg1;
- (void)setRemoteScale:(double)arg1;
- (void)setSaved:(bool)arg1;

@end
