/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDDrawableComment : NSObject <TSDAnnotationHosting> {
    TSDDrawableInfo *mParent;
    TSDCommentStorage *mStorage;
}

@property(assign,readonly) int annotationDisplayStringType;
@property(assign,readonly) int annotationType;
@property(assign,readonly) TSKAnnotationAuthor * author;
@property(assign,readonly) NSString * changeTrackingContentFormatString;
@property(assign,readonly) NSString * changeTrackingContentString;
@property(assign,readonly) NSString * changeTrackingTitleString;
@property(assign,readonly) NSDate * date;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) <TSKModel> * hostingModel;
@property(assign,readwrite) TSDDrawableInfo * parent;
@property(assign,copy) TSDCommentStorage * storage;
@property(assign,readonly) Class superclass;

- (int)annotationDisplayStringType;
- (int)annotationType;
- (id)author;
- (void)commentWillBeAddedToDocumentRoot;
- (void)commitText:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)hostingModel;
- (id)initWithParent:(id)arg1 storage:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parent;
- (void)setAuthor:(id)arg1;
- (void)setHostingModel:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;

@end
