/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebImageResult : SAWebWebResult

@property(assign,copy) NSNumber * fileSize;
@property(assign,retain) SAWebAcePicture * picture;
@property(assign,copy) NSArray * thumbNails;

+ (id)imageResult;
+ (id)imageResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)fileSize;
- (id)groupIdentifier;
- (id)picture;
- (void)setFileSize:(id)arg1;
- (void)setPicture:(id)arg1;
- (void)setThumbNails:(id)arg1;
- (id)thumbNails;

@end
