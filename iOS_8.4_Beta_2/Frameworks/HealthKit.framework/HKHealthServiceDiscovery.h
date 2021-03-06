/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthServiceDiscovery : NSObject {
    id _discoveryHandler;
    unsigned long long _discoveryIdentifier;
    long long _serviceType;
}

@property(assign,copy) id discoveryHandler;
@property(assign,readwrite) unsigned long long discoveryIdentifier;
@property(assign,readonly) long long serviceType;

- (void).cxx_destruct;
- (id)discoveryHandler;
- (unsigned long long)discoveryIdentifier;
- (id)initForAllTypes;
- (id)initWithType:(long long)arg1;
- (long long)serviceType;
- (void)setDiscoveryHandler:(id)arg1;
- (void)setDiscoveryIdentifier:(unsigned long long)arg1;

@end
