/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBBackup : NSObject <NSCoding, NSCopying> {
    NSString *_backupUDID;
    NSString *_deviceClass;
    NSString *_hardwareModel;
    NSString *_marketingName;
    NSString *_productType;
    bool _restoreSystemFiles;
    NSArray *_snapshots;
}

@property(assign,readonly) NSString * backupUDID;
@property(assign,readonly) NSString * deviceClass;
@property(assign,readonly) NSString * hardwareModel;
@property(assign,readonly) NSString * marketingName;
@property(assign,readonly) NSString * productType;
@property(getter=canRestoreSystemFiles,assign,readonly) bool restoreSystemFiles;
@property(assign,readonly) NSArray * snapshots;

- (id)backupUDID;
- (bool)canRestoreSystemFiles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceClass;
- (void)encodeWithCoder:(id)arg1;
- (id)hardwareModel;
- (id)initWithBackupUDID:(id)arg1 deviceClass:(id)arg2 productType:(id)arg3 hardwareModel:(id)arg4 marketingName:(id)arg5 snapshots:(id)arg6 restoreSystemFiles:(bool)arg7;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)marketingName;
- (id)productType;
- (id)snapshots;

@end
