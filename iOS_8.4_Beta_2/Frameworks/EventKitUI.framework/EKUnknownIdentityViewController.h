/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUnknownIdentityViewController : UIViewController <ABUnknownPersonViewControllerDelegate> {
    <EKIdentityProtocol> *_identity;
    ABUnknownPersonViewController *_unknownPersonViewController;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithIdentity:(id)arg1;
- (void)loadView;
- (void)setIdentity:(id)arg1;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;

@end
