/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMessageStoreGetUpdatesRequest : DAMailboxGetUpdatesRequest <MFDAMailAccountRequest> {
    bool _isUserRequested;
}

@property(assign,readonly) bool isUserRequested;
@property(assign,readonly) bool shouldSend;

- (id)deferredOperation;
- (unsigned long long)generationNumber;
- (id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2 isUserRequested:(bool)arg3;
- (bool)isUserRequested;
- (bool)mf_alwaysReportFailures;
- (bool)shouldSend;

@end
