/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGParallelDissector : NSObject <SGPipelineDissector> {
    NSArray *_dissectors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)parallelDissectorWithDissectors:(id)arg1;

- (void).cxx_destruct;
- (void)dissect:(id)arg1;
- (id)initWithDissectors:(id)arg1;

@end
