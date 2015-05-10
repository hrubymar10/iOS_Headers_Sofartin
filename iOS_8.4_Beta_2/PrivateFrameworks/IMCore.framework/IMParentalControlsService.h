/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMParentalControlsService : NSObject {
    bool _disableService;
    bool _forceWhiteList;
    NSString *_name;
    NSSet *_whitelist;
}

@property(assign,readwrite) bool disableService;
@property(assign,readwrite) bool forceWhiteList;
@property(assign,retain) NSString * name;
@property(assign,retain) NSSet * whitelist;

- (void)dealloc;
- (bool)disableService;
- (bool)forceWhiteList;
- (id)name;
- (void)setDisableService:(bool)arg1;
- (void)setForceWhiteList:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setWhitelist:(id)arg1;
- (id)whitelist;

@end