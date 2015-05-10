/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhoneCallHistory : SAPhoneCallSearchResult

@property(assign,copy) NSNumber * blocked;
@property(assign,copy) NSNumber * callCount;
@property(assign,copy) NSNumber * faceTime;
@property(assign,copy) NSNumber * faceTimeAudio;
@property(assign,copy) NSNumber * missed;
@property(assign,copy) NSNumber * outgoing;

+ (id)callHistory;
+ (id)callHistoryWithDictionary:(id)arg1 context:(id)arg2;

- (id)blocked;
- (id)callCount;
- (id)encodedClassName;
- (id)faceTime;
- (id)faceTimeAudio;
- (id)groupIdentifier;
- (id)missed;
- (id)outgoing;
- (void)setBlocked:(id)arg1;
- (void)setCallCount:(id)arg1;
- (void)setFaceTime:(id)arg1;
- (void)setFaceTimeAudio:(id)arg1;
- (void)setMissed:(id)arg1;
- (void)setOutgoing:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end