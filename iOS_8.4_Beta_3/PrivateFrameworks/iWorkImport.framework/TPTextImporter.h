/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPTextImporter : NSObject <TSKImporter> {
    TSUProgressContext *mProgressContext;
    NSURL *mURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) TSUProgressContext *progressContext;
@property (readonly) Class superclass;

- (void)cancel;
- (void)dealloc;
- (bool)importStartsWithThemeOnly;
- (bool)importToDocumentRoot:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (id)initWithURL:(id)arg1;
- (id)initialTemplateName;
- (id)progressContext;
- (void)quit;
- (void)setProgressContext:(id)arg1;
- (void)setURL:(id)arg1;
- (bool)stylesheetUpdatesRequired;

@end
