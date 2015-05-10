/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMSPIMessage : NSObject {
    NSAttributedString *_attributedText;
    NSArray *_chatGUIDs;
    NSArray *_chatGuids;
    NSDate *_date;
    NSString *_guid;
    bool _isAudioMessage;
    bool _isOutgoing;
    bool _isRead;
    long long _messageID;
    NSArray *_recipients;
    IMSPIHandle *_sender;
    NSString *_subject;
    NSString *_text;
    NSURL *_url;
}

@property(assign,retain) NSAttributedString * attributedText;
@property(assign,retain) NSArray * chatGUIDs;
@property(assign,retain) NSArray * chatGuids;
@property(assign,retain) NSDate * date;
@property(assign,retain) NSString * guid;
@property(assign,readwrite) bool isAudioMessage;
@property(assign,readwrite) bool isOutgoing;
@property(assign,readwrite) bool isRead;
@property(assign,readwrite) long long messageID;
@property(assign,retain) NSArray * recipients;
@property(assign,retain) IMSPIHandle * sender;
@property(assign,retain) NSString * subject;
@property(assign,retain) NSString * text;
@property(assign,retain) NSURL * url;

- (id)attributedText;
- (id)chatGUIDs;
- (id)chatGuids;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)guid;
- (bool)isAudioMessage;
- (bool)isOutgoing;
- (bool)isRead;
- (long long)messageID;
- (id)recipients;
- (id)sender;
- (void)setAttributedText:(id)arg1;
- (void)setChatGUIDs:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setIsAudioMessage:(bool)arg1;
- (void)setIsOutgoing:(bool)arg1;
- (void)setIsRead:(bool)arg1;
- (void)setMessageID:(long long)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setText:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)subject;
- (id)text;
- (id)url;

@end