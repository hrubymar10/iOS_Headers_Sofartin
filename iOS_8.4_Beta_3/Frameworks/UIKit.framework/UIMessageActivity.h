/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMessageActivity : UIActivity {
    MFMessageComposeViewController *_messageComposeViewController;
    bool _sourceIsManaged;
}

@property(assign,retain) MFMessageComposeViewController * messageComposeViewController;
@property(assign,readwrite) bool sourceIsManaged;

+ (long long)activityCategory;

- (id)_activityImage;
- (id)_activitySettingsImage;
- (void)_cleanup;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)messageComposeViewController;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setMessageComposeViewController:(id)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (bool)sourceIsManaged;

@end