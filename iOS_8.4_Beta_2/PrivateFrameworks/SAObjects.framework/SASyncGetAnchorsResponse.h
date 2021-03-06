/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncGetAnchorsResponse : SABaseClientBoundCommand

@property(assign,copy) NSArray * anchors;

+ (id)getAnchorsResponse;
+ (id)getAnchorsResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)anchors;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAnchors:(id)arg1;

@end
