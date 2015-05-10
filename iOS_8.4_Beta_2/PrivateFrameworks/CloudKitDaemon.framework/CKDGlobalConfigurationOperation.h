/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGlobalConfigurationOperation : CKDOperation {
    CKDServerConfiguration *_configuration;
    NSObject<OS_dispatch_group> *_configurationFetchedGroup;
}

@property(assign,retain) CKDServerConfiguration * configuration;
@property(assign,retain) NSObject<OS_dispatch_group> * configurationFetchedGroup;

- (void).cxx_destruct;
- (id)configuration;
- (id)configurationFetchedGroup;
- (void)main;
- (void)setConfiguration:(id)arg1;
- (void)setConfigurationFetchedGroup:(id)arg1;
- (bool)shouldCheckAppVersion;

@end