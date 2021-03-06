/* Generated by RuntimeBrowser.
 */

@protocol GSProtocol

@required

- (void)createAdditionInStorage:(long long)arg1 stagedFileDescriptor:(NSFileHandle *)arg2 creationInfo:(NSDictionary *)arg3 completionHandler:(id)arg4;
- (void)getAdditionInStorage:(long long)arg1 andNameSpace:(NSString *)arg2 named:(NSString *)arg3 completionHandler:(id)arg4;
- (void)getAdditionsInStorage:(long long)arg1 andNameSpace:(NSString *)arg2 named:(NSArray *)arg3 completionHandler:(id)arg4;
- (void)getFileIdForDocumentId:(unsigned long long)arg1 onDevice:(int)arg2 reply:(id)arg3;
- (void)isPermanentStorageSupportedForHandle:(NSFileHandle *)arg1 reply:(id)arg2;
- (void)listAdditionsOfStorage:(long long)arg1 nameSpace:(NSString *)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 andEnumerationState:(id)arg5 completionHandler:(id)arg6;
- (void)mergeAdditionInfoValueInStorage:(long long)arg1 nameSpace:(NSString *)arg2 additionName:(NSString *)arg3 value:(NSData *)arg4 reply:(id)arg5;
- (oneway void)permanentStorageClose:(unsigned long long)arg1;
- (void)permanentStorageOpenForHandle:(NSFileHandle *)arg1 withRemoteID:(unsigned long long)arg2 andDocumentID:(GSDocumentIdentifier *)arg3 reply:(id)arg4;
- (void)removeAdditionsInStorage:(long long)arg1 removalSpec:(NSDictionary *)arg2 completionHandler:(id)arg3;
- (void)requestFreeSpace:(unsigned long long)arg1 forVolume:(NSURL *)arg2 reply:(id)arg3;
- (void)setAdditionDisplayNameInStorage:(long long)arg1 nameSpace:(NSString *)arg2 additionName:(NSString *)arg3 value:(NSString *)arg4 reply:(id)arg5;
- (void)setAdditionNameSpaceInStorage:(long long)arg1 nameSpace:(NSString *)arg2 additionName:(NSString *)arg3 value:(NSString *)arg4 completionHandler:(id)arg5;
- (void)setAdditionOptionsInStorage:(long long)arg1 nameSpace:(NSString *)arg2 additionName:(NSString *)arg3 value:(unsigned long long)arg4 reply:(id)arg5;
- (oneway void)setLogLevel:(unsigned int)arg1;
- (void)stagingPrefixForDevice:(int)arg1 volumeUUID:(NSUUID *)arg2 reply:(id)arg3;
- (oneway void)stagingPrefixRelinquish:(NSString *)arg1;

@end
