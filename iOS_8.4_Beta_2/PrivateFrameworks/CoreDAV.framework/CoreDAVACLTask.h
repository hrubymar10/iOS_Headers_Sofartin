/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVACLTask : CoreDAVTask {
    NSArray *_accessControlEntities;
}

@property(assign,retain) NSArray * accessControlEntities;
@property(assign,readwrite) <CoreDAVACLTaskDelegate> * delegate;

- (id)accessControlEntities;
- (void)dealloc;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)requestBody;
- (void)setAccessControlEntities:(id)arg1;

@end
