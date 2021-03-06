/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPAssetReadChannel : NSObject <TSUStreamReadChannel> {
    ALAssetsLibrary *_library;
    NSObject<OS_dispatch_queue> *_readQueue;
    ALAssetRepresentation *_representation;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)initWithRepresentation:(id)arg1 library:(id)arg2;
- (void)readWithHandler:(id)arg1;

@end
