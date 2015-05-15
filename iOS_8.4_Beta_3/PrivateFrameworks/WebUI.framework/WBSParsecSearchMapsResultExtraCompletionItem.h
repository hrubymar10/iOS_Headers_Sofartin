/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSParsecSearchMapsResultExtraCompletionItem : NSObject <WBSCompletionListItem> {
    WBSParsecImageRepresentation *_icon;
    WBSParsecSearchMapsResult *_mapsResult;
    NSString *_title;
    NSURL *_url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *feedbackIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)feedbackIdentifier;
- (id)iconWithSession:(id)arg1;
- (id)initWithMapsResult:(id)arg1 text:(id)arg2 url:(id)arg3 icon:(id)arg4;
- (id)parsecDomainIdentifier;
- (id)title;
- (id)url;

@end
