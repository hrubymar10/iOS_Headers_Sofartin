/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPAttachment : TSPObject <TSDOwningAttachment, TSKDocumentObject, TSPCopying> {
    TSWPStorage *_parentStorage;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isAnchored;
@property(assign,readonly) bool isAttachedToBodyText;
@property(assign,readonly) bool isDrawable;
@property(assign,readonly) bool isPartitioned;
@property(assign,readonly) bool isSearchable;
@property(assign,readwrite) TSWPStorage * parentStorage;
@property(assign,readonly) Class positionerClass;
@property(assign,readonly) bool specifiesEnabledKnobMask;
@property(assign,readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (int)attributeArrayKind;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (bool)changesWithPageCount;
- (bool)changesWithPageNumber;
- (id)copyWithContext:(id)arg1;
- (int)elementKind;
- (unsigned long long)findCharIndex;
- (void)infoChanged;
- (id)initWithContext:(id)arg1;
- (bool)isAnchored;
- (bool)isAttachedToBodyText;
- (bool)isDrawable;
- (bool)isEqual:(id)arg1;
- (bool)isPartitioned;
- (bool)isSearchable;
- (void)migrateStyleWithDocumentRoot:(id)arg1;
- (id)objectsForStyleMigrating;
- (id)parentStorage;
- (Class)positionerClass;
- (void)setParentStorage:(id)arg1;
- (bool)specifiesEnabledKnobMask;
- (bool)supportsUUID;
- (id)topLevelAttachment;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end