/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreIRBusProvider : CoreIRBus <IRInterfaceDelegate> {
    IRInterface *_interface;
    CoreIRDeviceProvider *_localDevice;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) IRInterface * interface;
@property(assign,readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)addExternalDevice:(id*)arg1;
- (Class)classForCoder;
- (void)dealloc;
- (id)initWithInterface:(id)arg1;
- (id)interface;
- (void)interface:(id)arg1 receivedCommand:(id)arg2;
- (void)interface:(id)arg1 receivedHIDEvent:(id)arg2;
- (id)localDevice;
- (id)propertyForKey:(id)arg1 error:(id*)arg2;
- (void)setManager:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3;

@end
