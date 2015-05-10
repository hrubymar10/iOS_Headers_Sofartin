/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABGroupTableCell : UITableViewCell <ABGroupWrapperDelegate> {
    ABGroupWrapper *_groupWrapper;
    ABStyleProvider *_styleProvider;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) ABGroupWrapper * groupWrapper;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) ABStyleProvider * styleProvider;
@property(assign,readonly) Class superclass;

- (void)dealloc;
- (id)groupWrapper;
- (void)groupWrapper:(id)arg1 didBecomeSelected:(bool)arg2;
- (void)setGroupWrapper:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)tintColorDidChange;
- (void)updateFromGroupWrapper;

@end