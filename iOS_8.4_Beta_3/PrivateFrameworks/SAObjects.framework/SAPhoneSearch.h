/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhoneSearch : SADomainCommand

@property(assign,copy) NSArray * contacts;
@property(assign,copy) NSDate * end;
@property(assign,copy) NSNumber * faceTime;
@property(assign,copy) NSNumber * faceTimeAudio;
@property(assign,copy) NSNumber * isNew;
@property(assign,copy) NSNumber * last;
@property(assign,copy) NSNumber * missed;
@property(assign,copy) NSNumber * outgoing;
@property(assign,copy) NSDate * start;
@property(assign,copy) NSNumber * voiceMail;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)contacts;
- (id)encodedClassName;
- (id)end;
- (id)faceTime;
- (id)faceTimeAudio;
- (id)groupIdentifier;
- (id)isNew;
- (id)last;
- (id)missed;
- (id)outgoing;
- (bool)requiresResponse;
- (void)setContacts:(id)arg1;
- (void)setEnd:(id)arg1;
- (void)setFaceTime:(id)arg1;
- (void)setFaceTimeAudio:(id)arg1;
- (void)setIsNew:(id)arg1;
- (void)setLast:(id)arg1;
- (void)setMissed:(id)arg1;
- (void)setOutgoing:(id)arg1;
- (void)setStart:(id)arg1;
- (void)setVoiceMail:(id)arg1;
- (id)start;
- (id)voiceMail;

@end