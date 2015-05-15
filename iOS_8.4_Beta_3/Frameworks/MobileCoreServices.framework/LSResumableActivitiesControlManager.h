/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSResumableActivitiesControlManager : NSObject {
    id _delegate;
    NSXPCConnection *connection;
}

@property(assign,retain) NSXPCConnection * connection;
@property(assign,readwrite) id delegate;

+ (id)resumableActivitiesControlManager;

- (id)advertisedItemUUID;
- (id)allUUIDsOfType:(unsigned long long)arg1;
- (void)callDidSaveDelegate:(id)arg1;
- (void)callWillSaveDelegate:(id)arg1;
- (void)callWillSaveDelegate:(id)arg1 completionHandler:(id)arg2;
- (id)connection;
- (id)currentAdvertisedItemUUID;
- (void)dealloc;
- (id)debuggingInfo;
- (id)delegate;
- (id)enabledUUIDs;
- (id)init;
- (void)injectBTLEItem:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 title:(id)arg4 activityPayload:(id)arg5 frameworkPayload:(id)arg6 payloadDelay:(double)arg7;
- (id)matchingUUIDForString:(id)arg1;
- (void)restartServer;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)status;
- (void)terminateServer;

@end
