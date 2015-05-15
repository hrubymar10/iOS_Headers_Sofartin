/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUINanoImageResource : SAUIImageResource

@property(assign,readwrite) bool backgroundNeeded;
@property(assign,copy) NSString * imageDownloadType;
@property(assign,retain) SAUIDecoratedText * monogram;
@property(assign,copy) NSString * placeholderImage;

+ (id)nanoImageResource;
+ (id)nanoImageResourceWithDictionary:(id)arg1 context:(id)arg2;

- (bool)backgroundNeeded;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)imageDownloadType;
- (id)monogram;
- (id)placeholderImage;
- (void)setBackgroundNeeded:(bool)arg1;
- (void)setImageDownloadType:(id)arg1;
- (void)setMonogram:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;

@end
