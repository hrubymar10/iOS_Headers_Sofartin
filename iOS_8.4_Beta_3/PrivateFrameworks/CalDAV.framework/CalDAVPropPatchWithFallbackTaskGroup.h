/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVPropPatchWithFallbackTaskGroup : CoreDAVTaskGroup {
    NSSet *_fallbackElements;
    NSSet *_primaryElements;
    CoreDAVResponseItem *_responseItem;
    NSURL *_url;
}

@property (nonatomic, retain) CoreDAVResponseItem *responseItem;

- (void)_proppatchAfterFailureCount:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5;
- (id)responseItem;
- (void)setResponseItem:(id)arg1;
- (void)startTaskGroup;

@end
