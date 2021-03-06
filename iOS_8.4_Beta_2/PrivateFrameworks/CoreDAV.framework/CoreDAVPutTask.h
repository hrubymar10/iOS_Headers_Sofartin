/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPutTask : CoreDAVPostOrPutTask {
    NSString *_nextETag;
}

@property(assign,readwrite) <CoreDAVTaskDelegate> * delegate;
@property(assign,retain) NSString * nextETag;

- (void)dealloc;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)nextETag;
- (void)setNextETag:(id)arg1;

@end
