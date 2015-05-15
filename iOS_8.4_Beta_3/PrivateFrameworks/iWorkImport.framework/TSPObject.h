/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObject : NSObject {
    NSUUID *_UUID;
    TSPComponent *_component;
    <TSPObjectDelegate> *_delegate;
    long long _identifier;
    long long _modifyObjectToken;
    long long _unarchiverIdentifier;
    TSPUnknownContent *_unknownContent;
}

@property (nonatomic, readonly) bool allowsImplicitComponentOwnership;
@property (nonatomic, readonly) TSPObject *componentRootObject;
@property (nonatomic, readonly) TSPObjectContext *context;
@property (nonatomic, readonly) unsigned int delayedArchivingPriority;
@property (nonatomic, readonly) bool isCommandObject;
@property (nonatomic, readonly) bool isComponentRoot;
@property (nonatomic, readonly) bool needsArchiving;
@property (nonatomic, copy) NSUUID *objectUUID;
@property (nonatomic, readonly) TSUUUIDPath *objectUUIDPath;
@property (nonatomic, readonly) NSString *packageLocator;
@property (nonatomic, readonly) bool shouldDelayArchiving;
@property (nonatomic, readonly) bool storeOutsideObjectArchive;
@property (nonatomic) TSPComponent *tsp_component;
@property (nonatomic) <TSPObjectDelegate> *tsp_delegate;
@property (nonatomic, readonly) NSString *tsp_description;
@property (nonatomic) long long tsp_identifier;
@property (nonatomic, readonly) bool tsp_isInDocument;
@property (nonatomic) long long tsp_modifyObjectToken;
@property (nonatomic, readonly) long long tsp_unarchiverIdentifier;
@property (nonatomic, readonly) TSPUnknownContent *tsp_unknownContent;

+ (bool)needsObjectUUID;
+ (id)newObjectForUnarchiver:(id)arg1;
+ (bool)tsp_isTransientObjectIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (bool)allowsImplicitComponentOwnership;
- (id)componentRootObject;
- (id)context;
- (void)dealloc;
- (void)deallocSOS;
- (unsigned int)delayedArchivingPriority;
- (void)didFinishUnarchiving;
- (void)didInitFromSOS;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (bool)documentIsRTL;
- (id)documentRoot;
- (id)init;
- (id)initBaseObjectWithContext:(id)arg1;
- (id)initCommon;
- (id)initDocumentObjectWithContext:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (bool)isCommandObject;
- (bool)isComponentRoot;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (bool)needsArchiving;
- (id)objectLocale;
- (id)objectUUID;
- (id)objectUUIDPath;
- (id)owningDocument;
- (id)packageLocator;
- (void)saveToArchiver:(id)arg1;
- (void)setObjectUUID:(id)arg1;
- (void)setTsp_component:(id)arg1;
- (void)setTsp_delegate:(id)arg1;
- (void)setTsp_identifier:(long long)arg1;
- (void)setTsp_modifyObjectToken:(long long)arg1;
- (bool)shouldDelayArchiving;
- (bool)storeOutsideObjectArchive;
- (id)tsp_component;
- (void)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)tsp_deepCopyWithOptions:(id)arg1;
- (void)tsp_deepCopyWithOptions:(id)arg1 completion:(id)arg2;
- (id)tsp_delegate;
- (id)tsp_description;
- (id)tsp_descriptionWithDepth:(unsigned long long)arg1;
- (long long)tsp_identifier;
- (bool)tsp_isInDocument;
- (long long)tsp_modifyObjectToken;
- (id)tsp_objectInfoWithDepth:(unsigned long long)arg1;
- (id)tsp_referencedData;
- (id)tsp_referencedObjects;
- (long long)tsp_unarchiverIdentifier;
- (id)tsp_unknownContent;
- (void)wasAddedToDocument;
- (void)wasAddedToDocumentDuringImport;
- (void)wasAddedToDocumentDuringUnarchive;
- (void)wasAddedToDocumentWithOptions:(unsigned long long)arg1;
- (void)willBeRemovedFromDocument;
- (void)willModify;
- (void)willModifyForUpgrade;
- (void)willModifyToComponentRootObject:(id)arg1;

@end
