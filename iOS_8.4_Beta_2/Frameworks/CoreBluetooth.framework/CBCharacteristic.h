/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBCharacteristic : CBAttribute {
    NSArray *_descriptors;
    NSNumber *_handle;
    bool _isBroadcasted;
    bool _isNotifying;
    CBPeripheral *_peripheral;
    unsigned long long _properties;
    CBService *_service;
    NSData *_value;
    NSNumber *_valueHandle;
}

@property(assign,retain) NSArray * descriptors;
@property(assign,readonly) NSNumber * handle;
@property(assign,readonly) bool isBroadcasted;
@property(assign,readwrite) bool isNotifying;
@property(assign,readonly) CBPeripheral * peripheral;
@property(assign,readonly) unsigned long long properties;
@property(assign,readwrite) CBService * service;
@property(assign,retain) NSData * value;
@property(assign,readonly) NSNumber * valueHandle;

- (void)dealloc;
- (id)description;
- (id)descriptors;
- (id)handle;
- (id)handleDescriptorsDiscovered:(id)arg1;
- (id)handleValueBroadcasted:(id)arg1;
- (id)handleValueNotifying:(id)arg1;
- (id)handleValueUpdated:(id)arg1;
- (id)handleValueWritten:(id)arg1;
- (id)initWithService:(id)arg1 dictionary:(id)arg2;
- (void)invalidate;
- (bool)isBroadcasted;
- (bool)isNotifying;
- (id)peripheral;
- (unsigned long long)properties;
- (id)service;
- (void)setDescriptors:(id)arg1;
- (void)setIsNotifying:(bool)arg1;
- (void)setService:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (id)valueHandle;

@end
