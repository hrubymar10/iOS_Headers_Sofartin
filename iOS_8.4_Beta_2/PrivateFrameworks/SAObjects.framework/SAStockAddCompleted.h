/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockAddCompleted : SABaseCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,retain) SAStockObject * aceStock;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSURL * identifier;
@property(assign,copy) NSString * refId;
@property(assign,copy) NSArray * results;
@property(assign,copy) NSArray * stockReferences;
@property(assign,copy) NSArray * stocks;
@property(assign,readonly) Class superclass;

+ (id)addCompleted;
+ (id)addCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceStock;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)results;
- (void)setAceStock:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setStockReferences:(id)arg1;
- (void)setStocks:(id)arg1;
- (id)stockReferences;
- (id)stocks;

@end
