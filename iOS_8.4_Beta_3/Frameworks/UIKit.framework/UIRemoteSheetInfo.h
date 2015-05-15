/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoteSheetInfo : NSObject {
    void *_context;
    id _delegate;
    UISpringBoardHostedView *_remoteView;
    long long _returnCode;
    SEL _selector;
    UIView *_sheetView;
}

@property (nonatomic) void*context;
@property (nonatomic) id delegate;
@property (nonatomic, retain) UISpringBoardHostedView *remoteView;
@property (nonatomic) long long returnCode;
@property (nonatomic) SEL selector;
@property (nonatomic, retain) UIView *sheetView;

- (void*)context;
- (void)dealloc;
- (id)delegate;
- (id)remoteView;
- (long long)returnCode;
- (SEL)selector;
- (void)setContext:(void*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRemoteView:(id)arg1;
- (void)setReturnCode:(long long)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setSheetView:(id)arg1;
- (id)sheetView;

@end
