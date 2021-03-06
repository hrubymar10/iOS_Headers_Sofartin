/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying> {
    bool _changeWasAddedToDocumentRoot;
    NSDate *_date;
    int _kind;
    TSWPStorage *_parentStorage;
    TSWPChangeSession *_session;
}

@property (nonatomic, readonly) TSUColor *changeAdornmentsColor;
@property (nonatomic) bool changeWasAddedToDocumentRoot;
@property (nonatomic, retain) NSDate *date;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) bool isDeletion;
@property (nonatomic, readonly) bool isInsertion;
@property (nonatomic) TSWPStorage *parentStorage;
@property (nonatomic, retain) TSWPChangeSession *session;
@property (nonatomic, readonly) bool showsHiddenDeletionMarkup;
@property (nonatomic, readonly) bool showsMarkup;
@property (nonatomic, readonly) TSUColor *textMarkupColor;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (bool)canMergeWithKind:(int)arg1 session:(id)arg2;
- (id)changeAdornmentsColor;
- (bool)changeWasAddedToDocumentRoot;
- (id)copyWithContext:(id)arg1;
- (id)date;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 kind:(int)arg2 session:(id)arg3;
- (bool)isDeletion;
- (bool)isFromChangeSession:(id)arg1;
- (bool)isHidden;
- (bool)isInsertion;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1 key:(id)arg2;
- (id)parentStorage;
- (void)saveToArchiver:(id)arg1;
- (id)session;
- (void)setChangeWasAddedToDocumentRoot:(bool)arg1;
- (void)setDate:(id)arg1;
- (void)setParentStorage:(id)arg1;
- (void)setSession:(id)arg1;
- (bool)showsHiddenDeletionMarkup;
- (bool)showsMarkup;
- (id)textMarkupColor;
- (void)trackedTextDidChange;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
