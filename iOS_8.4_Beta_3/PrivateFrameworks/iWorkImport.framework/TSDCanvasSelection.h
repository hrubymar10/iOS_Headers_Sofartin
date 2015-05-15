/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection> {
    NSSet *mInfos;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) unsigned long long infoCount;
@property(assign,readonly) NSSet * infos;
@property(assign,readonly) bool isEmpty;
@property(assign,readonly) Class superclass;
@property(assign,readonly) unsigned long long unlockedInfoCount;
@property(assign,readonly) NSSet * unlockedInfos;

+ (Class)archivedSelectionClass;
+ (id)emptySelection;

- (bool)containsKindOfClass:(Class)arg1;
- (bool)containsUnlockedKindOfClass:(Class)arg1;
- (id)copyExcludingInfo:(id)arg1;
- (id)copyIncludingInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)infoCount;
- (id)infos;
- (id)infosOfClass:(Class)arg1;
- (id)initWithArchive:(const struct CanvasSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct Reference {} *x6; }*)arg1 unarchiver:(id)arg2;
- (id)initWithInfos:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (void)saveToArchive:(struct CanvasSelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct Reference {} *x6; }*)arg1 archiver:(id)arg2;
- (unsigned long long)unlockedInfoCount;
- (id)unlockedInfos;

@end