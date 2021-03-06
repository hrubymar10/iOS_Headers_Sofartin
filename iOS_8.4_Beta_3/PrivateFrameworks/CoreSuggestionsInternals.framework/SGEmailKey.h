/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGEmailKey : NSObject <SGEntityKey> {
    NSString *_messageId;
    long long _messageIdHash;
    NSString *_source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *messageId;
@property (nonatomic, readonly) long long messageIdHash;
@property (nonatomic, readonly) NSString *source;
@property (readonly) Class superclass;

+ (bool)isSupportedEntityType:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSerialized:(id)arg1;
- (id)initWithSource:(id)arg1 messageId:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEmailKey:(id)arg1;
- (id)messageId;
- (long long)messageIdHash;
- (id)messageURL;
- (id)serialize;
- (id)source;

@end
