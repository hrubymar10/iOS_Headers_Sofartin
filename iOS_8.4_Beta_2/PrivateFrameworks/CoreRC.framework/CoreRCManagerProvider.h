/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreRCManagerProvider : CoreRCManager <CoreRCInterfaceControllerDelegate> {
    CoreRCInterfaceController *_interfaceController;
    CoreCECOverride *_pluginOverride;
    CoreCECOverride *_standardOverride;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) CoreRCInterfaceController * interfaceController;
@property(assign,retain) CoreCECOverride * pluginOverride;
@property(assign,retain) CoreCECOverride * standardOverride;
@property(assign,readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)addDeviceWithBus:(id)arg1 logicalAddress:(unsigned char)arg2 physicalAddress:(unsigned long long)arg3 deviceType:(unsigned long long)arg4 message:(id)arg5 reason:(unsigned long long)arg6;
- (void)dealloc;
- (id)firstCECOverrideFromPaths:(id)arg1;
- (void)initCECOverrides;
- (id)initWithSerialQueue:(id)arg1;
- (id)interfaceController;
- (void)interfaceController:(id)arg1 didAddInterface:(id)arg2;
- (void)interfaceController:(id)arg1 didRemoveInterface:(id)arg2;
- (id)pluginOverride;
- (id)propertyForKey:(id)arg1 ofBus:(id)arg2 error:(id*)arg3;
- (void)setPluginOverride:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2 ofBus:(id)arg3 error:(id*)arg4;
- (void)setStandardOverride:(id)arg1;
- (id)standardOverride;

@end
