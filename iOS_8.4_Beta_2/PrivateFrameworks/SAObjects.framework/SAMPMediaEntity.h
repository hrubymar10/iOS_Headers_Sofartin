/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPMediaEntity : SADomainObject

@property(assign,copy) NSString * sortTitle;
@property(assign,copy) NSString * title;

+ (id)mediaEntity;
+ (id)mediaEntityWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSortTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sortTitle;
- (id)title;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
