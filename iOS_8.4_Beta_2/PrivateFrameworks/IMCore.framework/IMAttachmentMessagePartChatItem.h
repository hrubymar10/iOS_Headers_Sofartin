/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMAttachmentMessagePartChatItem : IMMessagePartChatItem {
    NSString *_transferGUID;
    unsigned int _wantsAttachmentContiguous;
}

@property(assign,copy) NSString * transferGUID;

- (Class)__ck_chatItemClass;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 transferGUID:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)isAttachmentContiguousWithChatItem:(id)arg1;
- (id)transferGUID;

@end
