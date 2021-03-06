/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITonePurchaseController : NSObject <ABPeoplePickerNavigationControllerDelegate> {
    SKUIClientContext *_clientContext;
    id _completionBlock;
    SKUIItem *_item;
    UIViewController *_parentViewController;
    ABPeoplePickerNavigationController *_peoplePicker;
}

@property(assign,retain) SKUIClientContext * clientContext;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) UIViewController * parentViewController;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissPeoplePicker;
- (void)_finishPeoplePicker:(id)arg1 withPerson:(void*)arg2;
- (void)_finishWithTonePurchase:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_showPeoplePicker;
- (id)clientContext;
- (void)dealloc;
- (id)initWithItem:(id)arg1;
- (id)parentViewController;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)showPurchaseFlowWithCompletionBlock:(id)arg1;

@end
