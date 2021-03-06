/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPushChangeSession : CPLChangeSession <CPLAbstractObject>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) CPLPlatformObject * platformObject;
@property(assign,readonly) Class superclass;

- (id)_sessionLogDomain;
- (void)commitChangeBatch:(id)arg1 withCompletionHandler:(id)arg2;
- (void)commitChangeBatch:(id)arg1 withUnderlyingCompletionHandler:(id)arg2;
- (id)initWithLibraryManager:(id)arg1;

@end
