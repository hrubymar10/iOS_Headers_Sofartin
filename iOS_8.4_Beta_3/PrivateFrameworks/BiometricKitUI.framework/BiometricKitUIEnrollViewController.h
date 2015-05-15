/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

@interface BiometricKitUIEnrollViewController : UIViewController <BiometricKitDelegate> {
    BiometricKit *_biometricKit;
    <BiometricKitUIEnrollResultDelegate> *_delegate;
    NSMutableDictionary *_properties;
}

@property(assign,retain) BiometricKit * biometricKit;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <BiometricKitUIEnrollResultDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)biometricKit;
- (id)delegate;
- (id)propertyForKey:(id)arg1;
- (void)restartEnroll;
- (void)setBiometricKit:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;

@end