/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactAction : NSObject {
    UIColor *_color;
    CNContact *_contact;
    CNContactStyle *_contactStyle;
    <ABContactActionDelegate> *_delegate;
    bool _destructive;
    SEL _selector;
    id _target;
    NSString *_title;
    long long _transportType;
}

@property(assign,retain) UIColor * color;
@property(assign,retain) CNContact * contact;
@property(assign,retain) CNContactStyle * contactStyle;
@property(assign,readwrite) <ABContactActionDelegate> * delegate;
@property(getter=isDestructive,assign,readwrite) bool destructive;
@property(assign,readonly) SEL selector;
@property(assign,retain) id target;
@property(assign,copy) NSString * title;
@property(assign,readwrite) long long transportType;

+ (id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(bool)arg4;

- (id)color;
- (id)contact;
- (id)contactStyle;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithContact:(id)arg1;
- (id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(bool)arg4;
- (bool)isDestructive;
- (void)performActionWithSender:(id)arg1;
- (SEL)selector;
- (void)setColor:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestructive:(bool)arg1;
- (void)setTransportType:(long long)arg1;
- (id)target;
- (id)title;
- (long long)transportType;

@end