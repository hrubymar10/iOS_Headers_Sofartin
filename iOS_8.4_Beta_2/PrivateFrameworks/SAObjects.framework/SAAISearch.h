/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAISearch : SABaseCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) double duration;
@property(assign,copy) NSData * fingerprint;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * refId;
@property(assign,readonly) Class superclass;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (double)duration;
- (id)encodedClassName;
- (id)fingerprint;
- (id)groupIdentifier;
- (void)setDuration:(double)arg1;
- (void)setFingerprint:(id)arg1;

@end
