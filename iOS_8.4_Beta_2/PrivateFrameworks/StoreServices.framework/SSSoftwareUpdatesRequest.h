/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSoftwareUpdatesRequest : SSRequest {
    SSSoftwareUpdatesContext *_context;
}

@property(assign,readwrite) <SSSoftwareUpdatesRequestDelegate> * delegate;
@property(assign,readonly) SSSoftwareUpdatesContext * updateQueueContext;

- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithUpdateQueueContext:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)start;
- (void)startWithCompletionBlock:(id)arg1;
- (void)startWithUpdatesResponseBlock:(id)arg1;
- (id)updateQueueContext;

@end
