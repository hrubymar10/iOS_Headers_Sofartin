/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellBorder : NSObject <NSCopying, TSSPropertyCommandSerializing, TSTCellDiffing> {
    TSDStroke *_bottomStroke;
    int _bottomStrokeOrder;
    bool _definedBottomStroke;
    bool _definedBottomStrokeOrder;
    bool _definedLeftStroke;
    bool _definedLeftStrokeOrder;
    bool _definedRightStroke;
    bool _definedRightStrokeOrder;
    bool _definedTopStroke;
    bool _definedTopStrokeOrder;
    TSDStroke *_leftStroke;
    int _leftStrokeOrder;
    TSDStroke *_rightStroke;
    int _rightStrokeOrder;
    TSDStroke *_topStroke;
    int _topStrokeOrder;
}

@property(assign,retain) TSDStroke * bottomStroke;
@property(assign,readonly) int bottomStrokeOrder;
@property(assign,copy) NSString * debugDescription;
@property(assign,readonly) bool definedBottomStroke;
@property(assign,readonly) bool definedLeftStroke;
@property(assign,readonly) bool definedRightStroke;
@property(assign,readonly) bool definedTopStroke;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isEmpty;
@property(assign,retain) TSDStroke * leftStroke;
@property(assign,readonly) int leftStrokeOrder;
@property(assign,retain) TSDStroke * rightStroke;
@property(assign,readonly) int rightStrokeOrder;
@property(assign,readonly) Class superclass;
@property(assign,retain) TSDStroke * topStroke;
@property(assign,readonly) int topStrokeOrder;

+ (id)cellBorder;
+ (id)cellBorderForResettingAllStrokes;
+ (id)cellDiffProperties;

- (void)_clearBottomStroke;
- (void)_clearLeftStroke;
- (void)_clearRightStroke;
- (void)_clearTopStroke;
- (void)applyToCell:(id)arg1;
- (id)bottomStroke;
- (int)bottomStrokeOrder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)definedBottomStroke;
- (bool)definedLeftStroke;
- (bool)definedRightStroke;
- (bool)definedTopStroke;
- (void)didInitFromSOS;
- (id)initFromMessage:(const struct CellBorderArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StrokeArchive {} *x5; struct StrokeArchive {} *x6; int x7; int x8; struct StrokeArchive {} *x9; struct StrokeArchive {} *x10; int x11; int x12; }*)arg1 unarchiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(id)arg2;
- (bool)isEmpty;
- (id)leftStroke;
- (int)leftStrokeOrder;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (id)rightStroke;
- (int)rightStrokeOrder;
- (void)saveToMessage:(struct CellBorderArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StrokeArchive {} *x5; struct StrokeArchive {} *x6; int x7; int x8; struct StrokeArchive {} *x9; struct StrokeArchive {} *x10; int x11; int x12; }*)arg1 archiver:(id)arg2;
- (void)saveToPropertyCommandMessage:(struct Message { int (**x1)(); }*)arg1 archiver:(id)arg2;
- (void)setBottomStroke:(id)arg1 order:(int)arg2;
- (void)setLeftStroke:(id)arg1 order:(int)arg2;
- (void)setRightStroke:(id)arg1 order:(int)arg2;
- (void)setTopStroke:(id)arg1 order:(int)arg2;
- (id)topStroke;
- (int)topStrokeOrder;

@end
