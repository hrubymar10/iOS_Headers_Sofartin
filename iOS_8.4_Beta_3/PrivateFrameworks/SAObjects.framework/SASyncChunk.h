/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncChunk : SABaseCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * key;
@property(assign,copy) NSString * postGen;
@property(assign,copy) NSString * preGen;
@property(assign,copy) NSString * refId;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSArray * toAdd;
@property(assign,copy) NSArray * toRemove;
@property(assign,copy) NSString * validity;

+ (id)chunk;
+ (id)chunkWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)key;
- (id)postGen;
- (id)preGen;
- (void)setKey:(id)arg1;
- (void)setPostGen:(id)arg1;
- (void)setPreGen:(id)arg1;
- (void)setToAdd:(id)arg1;
- (void)setToRemove:(id)arg1;
- (void)setValidity:(id)arg1;
- (id)toAdd;
- (id)toRemove;
- (id)validity;

@end