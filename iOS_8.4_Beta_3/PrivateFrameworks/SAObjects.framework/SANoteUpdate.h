/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANoteUpdate : SADomainCommand

@property(assign,copy) NSString * contentsToAppend;
@property(assign,copy) NSURL * identifier;

+ (id)update;
+ (id)updateWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentsToAppend;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (bool)requiresResponse;
- (void)setContentsToAppend:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
