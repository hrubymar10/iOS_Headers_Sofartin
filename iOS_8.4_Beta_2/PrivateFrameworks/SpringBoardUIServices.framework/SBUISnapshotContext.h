/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUISnapshotContext : NSObject <BSXPCCoding> {
    bool _excludesNotificationCenter;
    UIScreen *_screen;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool excludesNotificationCenter;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) UIScreen * screen;
@property(assign,readonly) Class superclass;

+ (id)snapshotContextForScreen:(id)arg1;

- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (bool)excludesNotificationCenter;
- (id)initWithScreen:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)screen;
- (void)setExcludesNotificationCenter:(bool)arg1;
- (void)setScreen:(id)arg1;

@end
