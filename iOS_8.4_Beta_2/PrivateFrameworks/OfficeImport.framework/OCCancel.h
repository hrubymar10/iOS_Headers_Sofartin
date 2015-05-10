/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCCancel : NSObject <TCCancelDelegate> {
    bool mIsCancelled;
    bool mIsQuit;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)cancel;
- (id)init;
- (bool)isCancelled;
- (bool)isQuit;
- (void)quit;

@end
