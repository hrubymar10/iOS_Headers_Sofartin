/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPopoverObserver : NSObject <UIPopoverControllerDelegate> {
    UIPopoverController *_popoverController;
    SEL _selector;
    id _target;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissPopoverAnimated:(bool)arg1;
- (id)initWithPopoverController:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setTarget:(id)arg1 selector:(SEL)arg2;

@end