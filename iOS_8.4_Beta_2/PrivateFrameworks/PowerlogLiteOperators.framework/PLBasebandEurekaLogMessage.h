/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBasebandEurekaLogMessage : PLBasebandMessage {
    struct _PLBasebandLogHeader { struct _PLBasebandMessageHeader { unsigned char x_1_1_1; } x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; } *_header;
    NSData *_payload;
}

@property(assign,readonly) unsigned int eventCode;
@property(assign,readonly) NSString * eventCodeString;
@property(assign,readwrite) struct _PLBasebandLogHeader { struct _PLBasebandMessageHeader { unsigned char x_1_1_1; } x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; }* header;
@property(assign,retain) NSData * payload;

- (void).cxx_destruct;
- (unsigned int)eventCode;
- (id)eventCodeString;
- (id)eventCodeString:(unsigned int)arg1;
- (struct _PLBasebandLogHeader { struct _PLBasebandMessageHeader { unsigned char x_1_1_1; } x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; }*)header;
- (id)initWithData:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (void)parseData:(id)arg1;
- (id)payload;
- (id)payloadString;
- (void)setHeader:(struct _PLBasebandLogHeader { struct _PLBasebandMessageHeader { unsigned char x_1_1_1; } x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; }*)arg1;
- (void)setPayload:(id)arg1;
- (id)stringForUnknownBytes:(unsigned int)arg1;
- (id)tooShortErrorString;

@end
