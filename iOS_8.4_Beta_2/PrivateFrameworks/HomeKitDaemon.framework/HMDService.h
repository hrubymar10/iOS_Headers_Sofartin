/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDService : NSObject <NSSecureCoding> {
    HMDAccessory *_accessory;
    NSString *_associatedServiceType;
    NSArray *_characteristics;
    HAPService *_hapService;
    NSNumber *_instanceID;
    NSString *_name;
    NSString *_providedName;
    NSString *_serviceType;
}

@property(assign,readonly) HMDAccessory * accessory;
@property(assign,readonly) NSString * associatedServiceType;
@property(assign,copy) NSArray * characteristics;
@property(assign,retain) HAPService * hapService;
@property(assign,copy) NSNumber * instanceID;
@property(getter=getName,assign,copy) NSString * name;
@property(assign,retain) NSString * providedName;
@property(assign,retain) NSString * serviceType;
@property(assign,copy) NSString * type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_updateName:(id)arg1;
- (id)accessory;
- (id)associatedServiceType;
- (id)characteristics;
- (id)configureWithService:(id)arg1 accessory:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)findCharacteristic:(id)arg1;
- (id)findCharacteristicWithType:(id)arg1;
- (id)getConfiguredName;
- (id)getName;
- (id)hapService;
- (id)initWithCoder:(id)arg1;
- (id)initWithService:(id)arg1 accessory:(id)arg2;
- (id)instanceID;
- (id)providedName;
- (id)serviceType;
- (void)setHapService:(id)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProvidedName:(id)arg1;
- (void)setServiceType:(id)arg1;
- (id)type;
- (void)unconfigure;
- (bool)updateAssociatedServiceType:(id)arg1 error:(id*)arg2;
- (id)updateName:(id)arg1;

@end
