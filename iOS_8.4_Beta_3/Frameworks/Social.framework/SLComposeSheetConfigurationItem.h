/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLComposeSheetConfigurationItem : NSObject {
    <SLComposeSheetConfigurationItemObserving> *_changeObserver;
    id _tapHandler;
    NSString *_title;
    NSString *_value;
    bool _valuePending;
}

@property (nonatomic, copy) id tapHandler;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *value;
@property (nonatomic) bool valuePending;

- (void).cxx_destruct;
- (id)changeObserver;
- (id)init;
- (void)setChangeObserver:(id)arg1;
- (void)setTapHandler:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValuePending:(bool)arg1;
- (id)tapHandler;
- (id)title;
- (id)value;
- (bool)valuePending;

@end
