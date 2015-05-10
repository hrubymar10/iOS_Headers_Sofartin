/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKResponseCollection : NSObject {
    NSString *_context;
    NSMutableDictionary *_phraseMap;
    NSMutableDictionary *_responseCatalogEditable;
    NSMutableDictionary *_responseCatalogNonEditable;
}

@property(assign,retain) NSString * context;
@property(assign,retain) NSMutableDictionary * phraseMap;
@property(assign,retain) NSMutableDictionary * responseCatalogEditable;
@property(assign,retain) NSMutableDictionary * responseCatalogNonEditable;

+ (id)responseCollectionWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithContext:(id)arg1;
- (id)context;
- (void)dumpResponseCatalog;
- (id)init;
- (id)phraseMap;
- (void)resetPhraseMap;
- (void)resetResponseCatalog;
- (id)responseCatalogEditable;
- (id)responseCatalogNonEditable;
- (id)responsesForCategory:(unsigned long long)arg1 gender:(unsigned long long)arg2 maximumResponses:(unsigned long long)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5;
- (id)responsesForFixedPhrase:(id)arg1 withLanguage:(id)arg2;
- (void)setContext:(id)arg1;
- (void)setPhraseMap:(id)arg1;
- (void)setResponseCatalogEditable:(id)arg1;
- (void)setResponseCatalogNonEditable:(id)arg1;

@end