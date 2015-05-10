/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGetSessionCertificateResponse : SABaseClientBoundCommand

@property(assign,copy) NSData * certificate;

+ (id)getSessionCertificateResponse;
+ (id)getSessionCertificateResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)certificate;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCertificate:(id)arg1;

@end
