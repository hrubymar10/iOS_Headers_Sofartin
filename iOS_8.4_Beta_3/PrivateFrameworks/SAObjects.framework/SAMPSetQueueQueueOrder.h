/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSetQueueQueueOrder : AceObject <SAAceSerializable>

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) bool descending;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * mediaItemProperty;
@property(assign,readonly) Class superclass;

+ (id)setQueueQueueOrder;
+ (id)setQueueQueueOrderWithDictionary:(id)arg1 context:(id)arg2;

- (bool)descending;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mediaItemProperty;
- (void)setDescending:(bool)arg1;
- (void)setMediaItemProperty:(id)arg1;

@end