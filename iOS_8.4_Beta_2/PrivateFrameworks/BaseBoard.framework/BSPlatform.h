/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSPlatform : NSObject {
    bool _hasGasGauge;
    bool _isInternalInstall;
    bool _isMultiCore;
    NSString *_localizedProductName;
    NSString *_productBuildVersion;
    NSString *_productClass;
    NSString *_productHardwareModel;
    NSString *_productType;
    NSString *_productVersion;
    NSString *_uniqueDeviceIdentifier;
}

@property(assign,readonly) bool hasGasGauge;
@property(getter=isInternalInstall,assign,readonly) bool internalInstall;
@property(assign,copy) NSString * localizedProductName;
@property(getter=isMultiCore,assign,readonly) bool multiCore;
@property(assign,copy) NSString * productBuildVersion;
@property(assign,copy) NSString * productClass;
@property(assign,copy) NSString * productHardwareModel;
@property(assign,copy) NSString * productType;
@property(assign,copy) NSString * productVersion;
@property(assign,copy) NSString * uniqueDeviceIdentifier;

+ (id)sharedInstance;

- (void)dealloc;
- (bool)hasGasGauge;
- (id)init;
- (bool)isInternalInstall;
- (bool)isMultiCore;
- (id)localizedProductName;
- (id)productBuildVersion;
- (id)productClass;
- (id)productHardwareModel;
- (id)productType;
- (id)productVersion;
- (id)uniqueDeviceIdentifier;

@end
