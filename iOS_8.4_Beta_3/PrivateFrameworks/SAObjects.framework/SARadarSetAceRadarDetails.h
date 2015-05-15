/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARadarSetAceRadarDetails : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSString *clientConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *radarTitle;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)setAceRadarDetails;
+ (id)setAceRadarDetailsWithDictionary:(id)arg1 context:(id)arg2;

- (id)attachments;
- (id)clientConfiguration;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)radarTitle;
- (void)setAttachments:(id)arg1;
- (void)setClientConfiguration:(id)arg1;
- (void)setRadarTitle:(id)arg1;

@end
