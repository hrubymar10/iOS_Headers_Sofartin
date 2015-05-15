/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropNode : NSObject {
    UIImage *_displayIcon;
    NSString *_displayName;
    bool _monogram;
    id _node;
    NSString *_realName;
    NSString *_secondaryName;
    struct __SFOperation { } *_sender;
    bool _supportsMixedTypes;
    bool _supportsPasses;
    bool _unknown;
}

@property(assign,retain) UIImage * displayIcon;
@property(assign,retain) NSString * displayName;
@property(getter=isMonogram,assign,readwrite) bool monogram;
@property(assign,retain) id node;
@property(assign,retain) NSString * realName;
@property(assign,retain) NSString * secondaryName;
@property(assign,readonly) bool supportsMixedTypes;
@property(assign,readonly) bool supportsPasses;
@property(getter=isUnknown,assign,readwrite) bool unknown;

+ (id)nodeWithSFNode:(struct __SFNode { }*)arg1;

- (void).cxx_destruct;
- (void)cancelSend;
- (id)description;
- (id)displayIcon;
- (id)displayName;
- (void)handleOperationCallback:(struct __SFOperation { }*)arg1 event:(long long)arg2 withResults:(id)arg3;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isMonogram;
- (bool)isUnknown;
- (id)node;
- (id)realName;
- (id)secondaryName;
- (void)setDisplayIcon:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setMonogram:(bool)arg1;
- (void)setNode:(id)arg1;
- (void)setRealName:(id)arg1;
- (void)setSecondaryName:(id)arg1;
- (void)setUnknown:(bool)arg1;
- (void)startSendWithSessionID:(id)arg1 items:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (bool)supportsMixedTypes;
- (bool)supportsPasses;
- (void)updateWithSFNode:(struct __SFNode { }*)arg1;

@end
