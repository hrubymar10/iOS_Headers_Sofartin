/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVCopyOrMoveTask : CoreDAVTask {
    NSURL *_destinationURL;
    int _overwrite;
}

@property(assign,retain) NSURL * destinationURL;
@property(assign,readwrite) int overwrite;

+ (id)stringFromOverwriteValue:(int)arg1;

- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;
- (id)additionalHeaderValues;
- (void)dealloc;
- (id)description;
- (id)destinationURL;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 andOverwrite:(int)arg3;
- (id)initWithURL:(id)arg1;
- (int)overwrite;
- (id)requestBody;
- (void)setDestinationURL:(id)arg1;
- (void)setOverwrite:(int)arg1;

@end
