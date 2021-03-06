/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBGatewayManager : NSObject {
    NSString *_allowedGroupName;
    NSArray *_bbSections;
    NSDateComponents *_dndFromComponents;
    NSDateComponents *_dndToComponents;
    bool _isScheduled;
    unsigned long long _privilegedSenderType;
    BBSettingsGateway *_settingsGateway;
}

@property(assign,readonly) NSString * allowedGroupName;
@property(assign,retain) NSArray * bbSections;
@property(assign,readonly) NSDateComponents * dndFromComponents;
@property(assign,readonly) NSDateComponents * dndToComponents;
@property(assign,readonly) bool isScheduled;
@property(assign,readonly) unsigned long long privilegedSenderType;
@property(assign,retain) BBSettingsGateway * settingsGateway;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)allowedGroupName;
- (id)bbSections;
- (void)dealloc;
- (id)dndFromComponents;
- (id)dndToComponents;
- (id)init;
- (bool)isScheduled;
- (void)loadBBSections;
- (void)loadDNDState;
- (unsigned long long)privilegedSenderType;
- (bool)repeatedCalls;
- (void)setBbSections:(id)arg1;
- (void)setSettingsGateway:(id)arg1;
- (id)settingsGateway;

@end
