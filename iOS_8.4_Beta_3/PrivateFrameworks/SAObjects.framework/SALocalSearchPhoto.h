/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchPhoto : AceObject <SAAceSerializable>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSURL * fullsize;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * identifier;
@property(assign,copy) NSURL * largeSize;
@property(assign,copy) NSURL * maximumSize;
@property(assign,retain) SAUIAppPunchOut * photoPunchOut;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSURL * thumbnail;

+ (id)photo;
+ (id)photoWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)fullsize;
- (id)groupIdentifier;
- (id)identifier;
- (id)largeSize;
- (id)maximumSize;
- (id)photoPunchOut;
- (void)setFullsize:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLargeSize:(id)arg1;
- (void)setMaximumSize:(id)arg1;
- (void)setPhotoPunchOut:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;

@end
