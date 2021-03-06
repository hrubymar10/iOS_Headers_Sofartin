/* Generated by RuntimeBrowser
   Image: /usr/lib/libextension.dylib
 */

@interface UIKit_PKSubsystem : NSObject <PKModularService> {
    NSDictionary *_infoDictionary;
    bool _initialized;
    bool _plugInKitProcess;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSDictionary * infoDictionary;
@property(getter=isPlugInKitProcess,assign,readwrite) bool plugInKitProcess;
@property(assign,readonly) Class superclass;

+ (id)initForPlugInKit;
+ (id)sharedInstance;

- (void)beginUsing:(id)arg1 withBundle:(id)arg2;
- (void)endUsing:(id)arg1;
- (id)infoDictionary;
- (bool)isPlugInKitProcess;
- (void)setInfoDictionary:(id)arg1;
- (void)setPlugInKitProcess:(bool)arg1;

@end
