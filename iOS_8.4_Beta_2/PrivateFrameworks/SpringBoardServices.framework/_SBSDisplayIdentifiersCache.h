/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface _SBSDisplayIdentifiersCache : NSObject {
    id _changedBlock;
    int _changedToken;
    NSSet *_displayIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)_queue_noteChanged;
- (void)dealloc;
- (id)displayIdentifiers;
- (id)init;
- (void)registerChangedBlock:(id)arg1;

@end