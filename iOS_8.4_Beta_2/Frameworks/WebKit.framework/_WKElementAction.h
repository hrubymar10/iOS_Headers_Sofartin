/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKElementAction : NSObject {
    id _actionHandler;
    id _dismissalHandler;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    } _title;
    long long _type;
}

@property(assign,copy) id dismissalHandler;
@property(assign,readonly) NSString * title;
@property(assign,readonly) long long type;

+ (id)elementActionWithTitle:(id)arg1 actionHandler:(id)arg2;
+ (id)elementActionWithType:(long long)arg1;
+ (id)elementActionWithType:(long long)arg1 customTitle:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithTitle:(id)arg1 actionHandler:(id)arg2 type:(long long)arg3;
- (void)_runActionWithElementInfo:(id)arg1 forActionSheetAssistant:(id)arg2;
- (void)dealloc;
- (id)dismissalHandler;
- (void)setDismissalHandler:(id)arg1;
- (id)title;
- (long long)type;

@end
