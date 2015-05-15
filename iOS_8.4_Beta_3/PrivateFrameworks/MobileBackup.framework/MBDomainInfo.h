/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBDomainInfo : NSObject <NSCoding, NSCopying> {
    NSString *_domainName;
    bool _enabled;
    unsigned long long _localSize;
    unsigned long long _remoteSize;
    bool _restricted;
    bool _systemApp;
}

@property(getter=isAppDomain,assign,readonly) bool appDomain;
@property(assign,readonly) NSString * bundleID;
@property(getter=isCameraRollDomain,assign,readonly) bool cameraRollDomain;
@property(assign,retain) NSString * domainName;
@property(getter=isEnabled,assign,readwrite) bool enabled;
@property(assign,readwrite) unsigned long long localSize;
@property(assign,readwrite) unsigned long long remoteSize;
@property(getter=isRestricted,assign,readwrite) bool restricted;
@property(assign,readonly) unsigned long long size;
@property(getter=isSystemApp,assign,readwrite) bool systemApp;

+ (id)domainInfoWithName:(id)arg1 systemApp:(bool)arg2 remoteSize:(unsigned long long)arg3 localSize:(unsigned long long)arg4 enabled:(bool)arg5 restricted:(bool)arg6;
+ (id)domainNameForBundleID:(id)arg1;

- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)domainName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainName:(id)arg1 systemApp:(bool)arg2 remoteSize:(unsigned long long)arg3 localSize:(unsigned long long)arg4 enabled:(bool)arg5 restricted:(bool)arg6;
- (bool)isAppDomain;
- (bool)isCameraRollDomain;
- (bool)isEnabled;
- (bool)isRestricted;
- (bool)isSystemApp;
- (unsigned long long)localSize;
- (unsigned long long)remoteSize;
- (void)setDomainName:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLocalSize:(unsigned long long)arg1;
- (void)setRemoteSize:(unsigned long long)arg1;
- (void)setRestricted:(bool)arg1;
- (void)setSystemApp:(bool)arg1;
- (unsigned long long)size;

@end
