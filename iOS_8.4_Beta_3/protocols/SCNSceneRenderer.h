/* Generated by RuntimeBrowser.
 */

@protocol SCNSceneRenderer <NSObject>

@required

- (bool)autoenablesDefaultLighting;
- (void*)context;
- (<SCNSceneRendererDelegate> *)delegate;
- (NSArray *)hitTest:(struct CGPoint { double x1; double x2; })arg1 options:(NSDictionary *)arg2;
- (bool)isJitteringEnabled;
- (bool)isNodeInsideFrustum:(SCNNode *)arg1 withPointOfView:(SCNNode *)arg2;
- (bool)isPlaying;
- (bool)loops;
- (SKScene *)overlaySKScene;
- (SCNNode *)pointOfView;
- (bool)prepareObject:(id)arg1 shouldAbortBlock:(id)arg2;
- (void)prepareObjects:(NSArray *)arg1 withCompletionHandler:(id)arg2;
- (struct SCNVector3 { float x1; float x2; float x3; })projectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (SCNScene *)scene;
- (double)sceneTime;
- (void)setAutoenablesDefaultLighting:(bool)arg1;
- (void)setDelegate:(id <SCNSceneRendererDelegate>)arg1;
- (void)setJitteringEnabled:(bool)arg1;
- (void)setLoops:(bool)arg1;
- (void)setOverlaySKScene:(SKScene *)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPointOfView:(SCNNode *)arg1;
- (void)setScene:(SCNScene *)arg1;
- (void)setSceneTime:(double)arg1;
- (void)setShowsStatistics:(bool)arg1;
- (bool)showsStatistics;
- (struct SCNVector3 { float x1; float x2; float x3; })unprojectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1;

@end