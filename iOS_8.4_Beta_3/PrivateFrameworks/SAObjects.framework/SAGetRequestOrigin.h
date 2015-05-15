/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGetRequestOrigin : SABaseClientBoundCommand

@property(assign,copy) NSString * desiredAccuracy;
@property(assign,copy) NSNumber * maxAge;
@property(assign,copy) NSNumber * searchTimeout;

+ (id)getRequestOrigin;
+ (id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2;

- (id)desiredAccuracy;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)maxAge;
- (bool)requiresResponse;
- (id)searchTimeout;
- (void)setDesiredAccuracy:(id)arg1;
- (void)setMaxAge:(id)arg1;
- (void)setSearchTimeout:(id)arg1;

@end
