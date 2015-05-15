/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockSearch : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *companyNameList;
@property (nonatomic, copy) NSArray *stockReferences;
@property (nonatomic, copy) NSURL *targetAppId;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)companyNameList;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCompanyNameList:(id)arg1;
- (void)setStockReferences:(id)arg1;
- (void)setTargetAppId:(id)arg1;
- (id)stockReferences;
- (id)targetAppId;

@end
