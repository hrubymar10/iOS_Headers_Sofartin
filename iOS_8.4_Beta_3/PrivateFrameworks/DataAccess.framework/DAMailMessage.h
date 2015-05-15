/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMailMessage : NSObject <NSCoding>

- (id)attachments;
- (id)body;
- (int)bodySize;
- (int)bodyTruncated;
- (id)cc;
- (id)conversationId;
- (id)conversationIndex;
- (id)date;
- (id)displayTo;
- (void)encodeWithCoder:(id)arg1;
- (bool)flagged;
- (bool)flaggedIsSet;
- (id)folderID;
- (id)from;
- (int)importance;
- (id)initWithCoder:(id)arg1;
- (int)lastVerb;
- (id)longID;
- (bool)meetingRequestIsActionable;
- (id)meetingRequestMetaData;
- (id)meetingRequestUUID;
- (id)messageClass;
- (bool)read;
- (bool)readIsSet;
- (id)remoteID;
- (id)replyTo;
- (id)rfc822Data;
- (int)smimeType;
- (id)subject;
- (id)threadTopic;
- (id)to;
- (bool)verbIsSet;

@end