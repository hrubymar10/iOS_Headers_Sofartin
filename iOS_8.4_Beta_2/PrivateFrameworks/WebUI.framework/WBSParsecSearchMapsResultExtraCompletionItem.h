/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSParsecSearchMapsResultExtraCompletionItem : NSObject <WBSCompletionListItem> {
    WBSParsecImageRepresentation *_icon;
    WBSParsecSearchMapsResult *_mapsResult;
    NSString *_title;
    NSURL *_url;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) NSString * feedbackIdentifier;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSString * parsecDomainIdentifier;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSString * title;
@property(assign,readonly) NSURL * url;

- (void).cxx_destruct;
- (id)feedbackIdentifier;
- (id)iconWithSession:(id)arg1;
- (id)initWithMapsResult:(id)arg1 text:(id)arg2 url:(id)arg3 icon:(id)arg4;
- (id)parsecDomainIdentifier;
- (id)title;
- (id)url;

@end
