/* Generated by RuntimeBrowser.
 */

@protocol FBSceneClientProvider <NSObject>

@required

- (void)beginTransaction;
- (void)endTransaction;
- (<FBSceneClient> *)registerHost:(id <FBSceneHost>)arg1 withInitialClientSettings:(FBSSceneClientSettings *)arg2;
- (void)registerInvalidationAction:(FBSceneClientProviderInvalidationAction *)arg1;
- (void)unregisterHost:(id <FBSceneHost>)arg1;

@end
