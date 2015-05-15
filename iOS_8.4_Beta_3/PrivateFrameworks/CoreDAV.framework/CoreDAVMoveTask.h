/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask {
    NSString *_previousETag;
}

@property(assign,readwrite) <CoreDAVMoveTaskDelegate> * delegate;
@property(assign,retain) NSString * previousETag;

- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;
- (id)additionalHeaderValues;
- (void)dealloc;
- (id)description;
- (id)httpMethod;
- (id)previousETag;
- (void)setPreviousETag:(id)arg1;

@end
