/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask {
    NSString *_previousETag;
}

@property(assign,readwrite) <CoreDAVTaskDelegate> * delegate;
@property(assign,retain) NSString * previousETag;

- (id)additionalHeaderValues;
- (void)dealloc;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)previousETag;
- (id)requestBody;
- (void)setPreviousETag:(id)arg1;

@end