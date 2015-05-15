/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSimpleComposeController : GKBaseComposeController {
    NSString *_defaultMessage;
    id _doneHandler;
    NSArray *_players;
    GKComposeHeaderWithStaticRecipients *_toField;
}

@property(assign,retain) NSString * defaultMessage;
@property(assign,copy) id doneHandler;
@property(assign,retain) NSArray * players;
@property(assign,retain) GKComposeHeaderWithStaticRecipients * toField;

- (void)dealloc;
- (id)defaultMessage;
- (id)doneHandler;
- (void)donePressed;
- (void)loadView;
- (id)players;
- (void)pushOntoNavigationController:(id)arg1 withDoneHandler:(id)arg2;
- (void)setDefaultMessage:(id)arg1;
- (void)setDoneHandler:(id)arg1;
- (void)setPlayers:(id)arg1;
- (void)setToField:(id)arg1;
- (void)setupSendButton;
- (id)toField;
- (void)viewWillAppear:(bool)arg1;

@end
