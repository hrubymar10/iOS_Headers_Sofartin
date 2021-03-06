/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABFMFActionButtons : NSObject <ABFMFActionButtonsDelegate> {
    UIButton *_callButton;
    UIButton *_facetimeButton;
    UIButton *_messageButton;
    ABUnknownPersonViewController *_upvc;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) void* displayedPerson;
@property(assign,readonly) bool hasTelephonyCapability;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)dealloc;
- (void*)displayedPerson;
- (bool)hasTelephonyCapability;
- (id)init;
- (id)initWithMessageButton:(id)arg1 facetimeButton:(id)arg2 callButton:(id)arg3;
- (void)setDisplayedPerson:(void*)arg1;
- (void)showFMFCallButton:(bool)arg1 withAction:(id)arg2;
- (void)showFMFFacetimeButton:(bool)arg1 withAction:(id)arg2;
- (void)showFMFMessageButton:(bool)arg1 withAction:(id)arg2;

@end
