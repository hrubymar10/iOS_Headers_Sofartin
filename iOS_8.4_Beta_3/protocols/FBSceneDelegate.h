/* Generated by RuntimeBrowser.
 */

@protocol FBSceneDelegate <NSObject>

@required

- (void)scene:(FBScene *)arg1 didReceiveActions:(NSSet *)arg2;
- (void)scene:(FBScene *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2 oldClientSettings:(FBSSceneClientSettings *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)scene:(FBScene *)arg1 handleUpdateSettingsWithBlock:(id)arg2;
- (void)scene:(FBScene *)arg1 handleUpdateToSettings:(FBSSceneSettings *)arg2 withTransitionContext:(FBSSceneTransitionContext *)arg3;

@end