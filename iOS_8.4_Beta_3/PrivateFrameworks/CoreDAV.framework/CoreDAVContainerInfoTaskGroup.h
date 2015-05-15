/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
    NSString *_appSpecificHomeSetPropName;
    NSString *_appSpecificHomeSetPropNameSpace;
    int _containerInfoDepth;
    NSMutableSet *_containerURLs;
    NSMutableSet *_containers;
    int _phase;
}

@property (nonatomic) int containerInfoDepth;
@property (nonatomic, readonly) NSSet *containerURLs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CoreDAVContainerInfoTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_copyContainerParserMappings;
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;
- (void)_getContainerHomeSet;
- (void)_getContainerTopLevelInfo;
- (int)containerInfoDepth;
- (int)containerInfoDepthForURL:(id)arg1;
- (id)containerURLs;
- (void)dealloc;
- (id)description;
- (id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)setContainerInfoDepth:(int)arg1;
- (void)startTaskGroup;
- (void)taskGroupWillCancelWithError:(id)arg1;

@end
