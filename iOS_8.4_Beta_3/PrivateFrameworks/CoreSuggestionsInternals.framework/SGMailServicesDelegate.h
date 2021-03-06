/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGMailServicesDelegate : NSObject <MSSearchDelegate> {
    id _callback;
    NSObject<OS_dispatch_semaphore> *_done;
    NSError *_error;
    bool _ignoreEmpty;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)error;
- (id)initWithCallback:(id)arg1 ignoreEmpty:(bool)arg2;
- (bool)search:(id)arg1 didFindResults:(id)arg2;
- (void)search:(id)arg1 didFinishWithError:(id)arg2;
- (void)wait;

@end
