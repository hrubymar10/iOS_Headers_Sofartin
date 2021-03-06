/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * refId;
@property(assign,copy) NSArray * stockList;
@property(assign,copy) NSArray * stockReferences;
@property(assign,readonly) Class superclass;

+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setStockList:(id)arg1;
- (void)setStockReferences:(id)arg1;
- (id)stockList;
- (id)stockReferences;

@end
