/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMMessageStatusChatItem : IMTranscriptChatItem {
    unsigned long long _count;
    long long _expireStatusType;
    long long _statusType;
    NSDate *_time;
    NSDate *_timeAdded;
    NSDate *_timeStale;
}

@property(assign,readonly) unsigned long long count;
@property(assign,retain) NSString * errorText;
@property(assign,readonly) long long expireStatusType;
@property(assign,readonly) bool isFromMe;
@property(assign,readonly) long long messageStatusType;
@property(assign,readonly) long long statusType;
@property(assign,retain) NSDate * time;

- (Class)__ck_chatItemClass;
- (id)_initWithItem:(id)arg1 expireStatusType:(long long)arg2 count:(unsigned long long)arg3;
- (id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4;
- (id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4 expireStatusType:(long long)arg5;
- (void)_setTimeAdded:(id)arg1;
- (id)_timeAdded;
- (id)_timeStale;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)errorText;
- (long long)expireStatusType;
- (bool)isFromMe;
- (long long)messageStatusType;
- (long long)statusType;
- (id)time;

@end
