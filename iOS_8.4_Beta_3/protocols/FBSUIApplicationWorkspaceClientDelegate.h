/* Generated by RuntimeBrowser.
 */

@protocol FBSUIApplicationWorkspaceClientDelegate <FBSWorkspaceClientDelegate>

@required

- (void)client:(FBSWorkspaceClient *)arg1 handleLaunch:(FBSUIApplicationLaunchEvent *)arg2 withCompletion:(id)arg3;
- (void)clientHandleAssertionExpirationImminent:(FBSWorkspaceClient *)arg1;
- (void)clientHandleExit:(FBSWorkspaceClient *)arg1;

@end