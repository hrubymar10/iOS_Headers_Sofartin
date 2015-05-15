/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGExtractionDissector : NSObject <SGPipelineDissector> {
    SGAsset *_asset;
    <SGReverseTemplateJS> *_reverseTemplateJS;
    NSXPCConnection *_xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)addParams:(id)arg1 toParameterizedString:(id)arg2;
+ (id)addressDictionaryToString:(id)arg1;
+ (id)parseISO8601:(id)arg1;

- (void).cxx_destruct;
- (void)dissect:(id)arg1;
- (id)entityForJS:(id)arg1;
- (id)entityForOutputItem:(id)arg1 parentEntity:(id)arg2;
- (id)init;

@end
