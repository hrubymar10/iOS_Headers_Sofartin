/* Generated by RuntimeBrowser.
 */

@protocol GSAdditionStoring

@required

- (NSURL *)URLforReplacingItemWithError:(id*)arg1;
- (GSAddition *)additionWithName:(NSString *)arg1 inNameSpace:(NSString *)arg2 error:(id*)arg3;
- (NSArray *)additionsWithNames:(NSArray *)arg1 inNameSpace:(NSString *)arg2 error:(id*)arg3;
- (void)cleanupStagingURL:(NSURL *)arg1;
- (void)createAdditionStagedAtURL:(NSURL *)arg1 creationInfo:(NSDictionary *)arg2 completionHandler:(id)arg3;
- (NSURL *)documentURL;
- (struct NSEnumerator { Class x1; }*)enumeratorForAdditionsInNameSpace:(NSString *)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4;
- (<NSCopying><NSSecureCoding> *)persistentIdentifier;
- (NSURL *)prepareAdditionCreationWithItemAtURL:(NSURL *)arg1 byMoving:(bool)arg2 creationInfo:(NSDictionary *)arg3 error:(id*)arg4;
- (void)removeAdditions:(NSArray *)arg1 completionHandler:(id)arg2;
- (void)removeAllAdditionsForNamespaces:(NSArray *)arg1 completionHandler:(id)arg2;
- (bool)replaceDocumentWithContentsOfAddition:(GSAddition *)arg1 preservingCurrentVersionWithCreationInfo:(NSDictionary *)arg2 createdAddition:(id*)arg3 error:(id*)arg4;
- (bool)replaceDocumentWithContentsOfItemAtURL:(NSURL *)arg1 preservingCurrentVersionWithCreationInfo:(NSDictionary *)arg2 createdAddition:(id*)arg3 error:(id*)arg4;
- (void)setDocumentURL:(NSURL *)arg1;
- (NSURL *)stagingURLforCreatingAdditionWithError:(id*)arg1;

@end
