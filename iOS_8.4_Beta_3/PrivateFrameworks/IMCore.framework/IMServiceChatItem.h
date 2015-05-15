/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMServiceChatItem : IMTranscriptChatItem {
    IMHandle *_handle;
    IMServiceImpl *_service;
}

@property(assign,retain) IMHandle * handle;
@property(assign,retain) IMServiceImpl * service;

- (Class)__ck_chatItemClass;
- (id)_initWithItem:(id)arg1 service:(id)arg2 handle:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)handle;
- (id)service;

@end