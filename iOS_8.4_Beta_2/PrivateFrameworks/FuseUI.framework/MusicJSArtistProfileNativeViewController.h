/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSArtistProfileNativeViewController : MusicJSNativeViewController <MusicJSArtistProfileNativeViewController, SKUIDOMFeature> {
    IKAppDocument *_artistBiographyDocument;
    NSDictionary *_artistBiographyDocumentOptions;
    NSDictionary *_artistEntityValueProviderData;
    <MusicJSArtistProfileNativeViewControllerDelegate> *_delegate;
    NSDictionary *_reportingInformation;
    NSMutableDictionary *_segmentDocumentOptions;
    NSMutableDictionary *_segmentDocuments;
    NSMutableDictionary *_segmentJSDocuments;
    IKAppDocument *_shareDocument;
    NSDictionary *_shareDocumentOptions;
}

@property(assign,readonly) IKAppContext * appContext;
@property(assign,readonly) IKAppDocument * artistBiographyDocument;
@property(assign,readonly) NSDictionary * artistBiographyDocumentOptions;
@property(assign,readonly) NSDictionary * artistEntityValueProviderData;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <MusicJSArtistProfileNativeViewControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * featureName;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) IKJSNavigationDocument * navigationDocument;
@property(assign,readonly) NSDictionary * reportingInformation;
@property(assign,readonly) IKAppDocument * shareDocument;
@property(assign,readonly) NSDictionary * shareDocumentOptions;
@property(assign,readonly) Class superclass;

+ (id)featureName;

- (void).cxx_destruct;
- (id)artistBiographyDocument;
- (id)artistBiographyDocumentOptions;
- (id)artistEntityValueProviderData;
- (id)delegate;
- (id)documentForSegmentIdentifier:(id)arg1;
- (id)documentOptionsForSegmentIdentifier:(id)arg1;
- (void)enumerateSegmentIdentifiersAndDocumentsUsingBlock:(id)arg1;
- (id)nativeViewIdentifier;
- (void)navigationDocumentDidChange;
- (void)presentShareDocument:(id)arg1 :(id)arg2;
- (id)reportingInformation;
- (void)setArtistBiographyDocument:(id)arg1 :(id)arg2;
- (void)setArtistEntityValueProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReportingInformation:(id)arg1;
- (void)setSegmentDocument:(id)arg1 :(id)arg2 :(id)arg3;
- (id)shareDocument;
- (id)shareDocumentOptions;

@end
