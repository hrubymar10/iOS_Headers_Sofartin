/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWaitForSceneDestructionTransaction : FBTransaction <FBSceneManagerObserver> {
    FBSceneManager *_sceneManager;
    FBScene *_sceneToWaitForDeath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) FBScene *scene;
@property (readonly) Class superclass;

- (void)_begin;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)dealloc;
- (id)initWithScene:(id)arg1;
- (id)scene;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;

@end
