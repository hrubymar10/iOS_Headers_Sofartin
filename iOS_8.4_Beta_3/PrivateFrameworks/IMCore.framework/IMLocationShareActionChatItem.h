/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMLocationShareActionChatItem : IMTranscriptChatItem {
    IMHandle *_otherHandle;
    IMHandle *_sender;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) long long direction;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly, retain) IMHandle *otherHandle;
@property (nonatomic, readonly, retain) IMHandle *sender;

- (Class)__ck_chatItemClass;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3;
- (long long)actionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)direction;
- (bool)isFromMe;
- (id)otherHandle;
- (id)sender;

@end
