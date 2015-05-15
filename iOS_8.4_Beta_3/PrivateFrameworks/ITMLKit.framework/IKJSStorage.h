/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSStorage : IKJSObject <IKJSStorage> {
    <IKAppDataStoring> *_appStorage;
    NSMutableDictionary *_storageDict;
    NSObject<OS_dispatch_queue> *_storageQueue;
    unsigned int _usesExternalDataStore;
}

@property(assign,readwrite) <IKAppDataStoring> * appStorage;
@property(assign,readonly) unsigned long long length;
@property(assign,retain) NSMutableDictionary * storageDict;
@property(assign,retain) NSObject<OS_dispatch_queue> * storageQueue;

- (void).cxx_destruct;
- (void)_verifyExternalDataStoreForKey:(id)arg1;
- (id)appStorage;
- (void)clear;
- (id)getItem:(id)arg1;
- (id)initWithAppContext:(id)arg1 appStorage:(id)arg2;
- (id)key:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)removeItem:(id)arg1;
- (void)setAppStorage:(id)arg1;
- (void)setItem:(id)arg1 :(id)arg2;
- (void)setStorageDict:(id)arg1;
- (void)setStorageQueue:(id)arg1;
- (id)storageDict;
- (id)storageQueue;

@end
