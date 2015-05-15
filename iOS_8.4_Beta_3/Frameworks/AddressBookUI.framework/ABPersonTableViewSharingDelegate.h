/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableViewSharingDelegate : NSObject {
    ABActionSheetDelegate *_actionSheetDelegate;
    ABPersonViewControllerHelper *_helper;
    UIImage *_shareLocationSnapshotImage;
    NSString *_shareLocationURL;
    NSString *_shareMessageBody;
    bool _shareMessageBodyIsHTML;
    NSString *_shareMessageSubject;
    ABStyleProvider *_styleProvider;
    id _willTweetLocationCallback;
    id _willWeiboLocationCallback;
}

@property (nonatomic, readonly) bool canSendMMS;
@property (nonatomic, readonly) bool canSendMail;
@property (nonatomic, readonly) bool canShareContact;
@property (nonatomic, readonly) bool canTweet;
@property (nonatomic, readonly) bool canWeibo;
@property (nonatomic) ABPersonViewControllerHelper *helper;
@property (nonatomic, retain) UIImage *shareLocationSnapshotImage;
@property (nonatomic, copy) NSString *shareLocationURL;
@property (nonatomic, copy) NSString *shareMessageBody;
@property (nonatomic) bool shareMessageBodyIsHTML;
@property (nonatomic, copy) NSString *shareMessageSubject;
@property (nonatomic, retain) ABStyleProvider *styleProvider;
@property (nonatomic, copy) id willTweetLocationCallback;
@property (nonatomic, copy) id willWeiboLocationCallback;

+ (id)_fakePersonForMergedPeople:(id)arg1;

- (bool)canSendMMS;
- (bool)canSendMail;
- (bool)canShareContact;
- (bool)canTweet;
- (bool)canWeibo;
- (void)dealloc;
- (void)getVCardData:(id*)arg1 exportMode:(int)arg2 fileName:(id*)arg3;
- (id)helper;
- (id)init;
- (bool)loadChatKitAndReturnBundle:(id*)arg1;
- (bool)loadMessageUIAndReturnBundle:(id*)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)setHelper:(id)arg1;
- (void)setShareLocationSnapshotImage:(id)arg1;
- (void)setShareLocationURL:(id)arg1;
- (void)setShareMessageBody:(id)arg1;
- (void)setShareMessageBodyIsHTML:(bool)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setWillTweetLocationCallback:(id)arg1;
- (void)setWillWeiboLocationCallback:(id)arg1;
- (void)shareActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)shareContact:(id)arg1;
- (void)shareContactByEmail:(id)arg1;
- (void)shareContactByTextMessage:(id)arg1;
- (void)shareContactFromButtonItem:(id)arg1;
- (void)shareContactFromButtonItem:(id)arg1 sender:(id)arg2;
- (void)shareLocationOnTwitter:(id)arg1;
- (void)shareLocationOnWeibo:(id)arg1;
- (id)shareLocationSnapshotImage;
- (id)shareLocationURL;
- (id)shareMessageBody;
- (bool)shareMessageBodyIsHTML;
- (id)shareMessageSubject;
- (id)styleProvider;
- (id)vCardFileName;
- (id)willTweetLocationCallback;
- (id)willWeiboLocationCallback;

@end
