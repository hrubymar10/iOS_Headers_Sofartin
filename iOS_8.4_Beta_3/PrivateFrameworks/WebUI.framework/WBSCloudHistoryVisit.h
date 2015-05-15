/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSCloudHistoryVisit : NSObject {
    bool _httpNonGet;
    bool _loadSuccessful;
    WBSCloudHistoryVisit *_redirectDestinationVisit;
    WBSCloudHistoryVisitIdentifier *_redirectDestinationVisitIdentifier;
    WBSCloudHistoryVisit *_redirectSourceVisit;
    WBSCloudHistoryVisitIdentifier *_redirectSourceVisitIdentifier;
    NSString *_title;
    WBSCloudHistoryVisitIdentifier *_visitIdentifier;
}

@property(assign,readonly) NSDictionary * dictionaryRepresentation;
@property(getter=wasHTTPNonGet,assign,readwrite) bool httpNonGet;
@property(getter=loadWasSuccessful,assign,readwrite) bool loadSuccessful;
@property(assign,readwrite) WBSCloudHistoryVisit * redirectDestinationVisit;
@property(assign,copy) WBSCloudHistoryVisitIdentifier * redirectDestinationVisitIdentifier;
@property(assign,readwrite) WBSCloudHistoryVisit * redirectSourceVisit;
@property(assign,copy) WBSCloudHistoryVisitIdentifier * redirectSourceVisitIdentifier;
@property(assign,copy) NSString * title;
@property(assign,copy) WBSCloudHistoryVisitIdentifier * visitIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHistoryVisit:(id)arg1;
- (bool)loadWasSuccessful;
- (id)redirectDestinationVisit;
- (id)redirectDestinationVisitIdentifier;
- (id)redirectSourceVisit;
- (id)redirectSourceVisitIdentifier;
- (void)setHttpNonGet:(bool)arg1;
- (void)setLoadSuccessful:(bool)arg1;
- (void)setRedirectDestinationVisit:(id)arg1;
- (void)setRedirectDestinationVisitIdentifier:(id)arg1;
- (void)setRedirectSourceVisit:(id)arg1;
- (void)setRedirectSourceVisitIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVisitIdentifier:(id)arg1;
- (id)title;
- (id)visitIdentifier;
- (bool)wasHTTPNonGet;

@end
