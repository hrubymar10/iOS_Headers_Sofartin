/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerObjectLine : AceObject <SAAceSerializable>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSURL * image;
@property(assign,copy) NSNumber * imageInverted;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * text;

+ (id)objectLine;
+ (id)objectLineWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)imageInverted;
- (void)setImage:(id)arg1;
- (void)setImageInverted:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
