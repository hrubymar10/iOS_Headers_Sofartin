/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATMessage : NSObject <NSSecureCoding> {
    NSStream *_dataStream;
    unsigned int _messageID;
    NSDictionary *_parameters;
    unsigned int _sessionID;
    double _timestamp;
}

@property(assign,retain) NSStream * dataStream;
@property(assign,readwrite) unsigned int messageID;
@property(assign,readwrite) unsigned int options;
@property(assign,retain) NSDictionary * parameters;
@property(assign,readwrite) unsigned int sessionID;
@property(assign,readwrite) double timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ATPMessage;
- (id)ATPMessageWithPayloadData:(id)arg1;
- (id)additionalDescription;
- (id)dataStream;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithATPMessage:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)messageID;
- (unsigned int)options;
- (id)parameterForKey:(id)arg1;
- (id)parameters;
- (unsigned int)sessionID;
- (void)setDataStream:(id)arg1;
- (void)setMessageID:(unsigned int)arg1;
- (void)setOptions:(unsigned int)arg1;
- (void)setParameters:(id)arg1;
- (void)setSessionID:(unsigned int)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
