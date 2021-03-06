/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPreviewExporter : KNSlideExporter <TSKImageExporter>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) unsigned long long height;
@property(assign,readwrite) bool scaleToFit;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) unsigned long long width;

- (unsigned long long)height;
- (id)p_renderingExporterDelegate;
- (bool)scaleToFit;
- (void)setHeight:(unsigned long long)arg1;
- (void)setScaleToFit:(bool)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (void)setup;
- (unsigned long long)width;

@end
