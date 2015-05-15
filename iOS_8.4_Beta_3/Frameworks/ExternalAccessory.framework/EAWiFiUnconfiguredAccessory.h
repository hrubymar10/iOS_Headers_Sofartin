/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAWiFiUnconfiguredAccessory : NSObject {
    NSString *_macAddress;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_name;
    unsigned long long _properties;
    NSString *_ssid;
}

@property(assign,copy) NSString * macAddress;
@property(assign,copy) NSString * manufacturer;
@property(assign,copy) NSString * model;
@property(assign,copy) NSString * name;
@property(assign,readonly) unsigned long long properties;
@property(assign,copy) NSString * ssid;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAirPortAssistantWACDevice:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)macAddress;
- (id)manufacturer;
- (id)model;
- (id)name;
- (unsigned long long)properties;
- (id)ssid;

@end
