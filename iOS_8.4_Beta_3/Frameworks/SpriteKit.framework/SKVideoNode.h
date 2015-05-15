/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKVideoNode : SKNode {
    bool _isLoaded;
    AVPlayer *_player;
    NSString *_videoFileName;
    NSURL *_videoFileURL;
}

@property (nonatomic, retain) AVPlayer *_player;
@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

+ (id)videoNodeWithAVPlayer:(id)arg1;
+ (id)videoNodeWithVideoFileNamed:(id)arg1;
+ (id)videoNodeWithVideoURL:(id)arg1;

- (void).cxx_destruct;
- (id)_player;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAVPlayer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoFileNamed:(id)arg1;
- (id)initWithVideoURL:(id)arg1;
- (bool)isEqualToNode:(id)arg1;
- (bool)isPaused;
- (void)pause;
- (void)play;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPaused:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)set_player:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
