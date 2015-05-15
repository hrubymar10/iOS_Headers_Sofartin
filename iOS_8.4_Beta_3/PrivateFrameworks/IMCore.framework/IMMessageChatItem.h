/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMMessageChatItem : IMTranscriptChatItem <IMMessageChatItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool failed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly, retain) IMMessage *message;
@property (nonatomic, readonly, retain) IMHandle *sender;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSDate *time;

- (bool)failed;
- (bool)isFromMe;
- (id)message;
- (id)sender;
- (id)time;

@end
