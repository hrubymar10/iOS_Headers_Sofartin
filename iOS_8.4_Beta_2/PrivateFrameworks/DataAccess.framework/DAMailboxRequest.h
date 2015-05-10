/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMailboxRequest : NSObject {
    int _bodyFormat;
    NSString *_messageID;
    int _requestType;
}

@property(assign,readwrite) int bodyFormat;
@property(assign,copy) NSString * messageID;
@property(assign,readwrite) int requestType;

- (void).cxx_destruct;
- (int)bodyFormat;
- (id)init;
- (id)messageID;
- (bool)mf_alwaysReportFailures;
- (int)requestType;
- (void)setBodyFormat:(int)arg1;
- (void)setMessageID:(id)arg1;
- (void)setRequestType:(int)arg1;

@end
