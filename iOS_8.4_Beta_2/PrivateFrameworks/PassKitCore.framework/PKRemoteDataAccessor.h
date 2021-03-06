/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKRemoteDataAccessor : PKDataAccessor {
    PKPassLibrary *_library;
    NSString *_objectUniqueID;
}

@property(assign,retain) PKPassLibrary * library;
@property(assign,retain) NSString * objectUniqueID;

- (id)archiveData;
- (void)contentWithCompletion:(id)arg1;
- (void)dealloc;
- (id)displayProfileOfType:(long long)arg1;
- (void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(bool)arg5 withCompletion:(id)arg6;
- (id)initWithLibrary:(id)arg1 objectUniqueID:(id)arg2;
- (id)library;
- (void)noteShared;
- (id)objectUniqueID;
- (void)requestUpdateWithCompletion:(id)arg1;
- (void)revocationStatusWithCompletion:(id)arg1;
- (void)updateSettings:(long long)arg1;

@end
