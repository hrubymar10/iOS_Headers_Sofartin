/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTWPTokenAttachment : TSWPUIGraphicalAttachment {
    bool mActive;
    struct CGImage { } *mCachedImage;
    double mCachedImageScreenScale;
    TSTExpressionNode *mExpressionNode;
    bool mHighlighted;
    bool mInInvalidate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } mMenuRect;
    bool mNeverShowsMenu;
    bool mSelected;
    struct CGSize { 
        double width; 
        double height; 
    } mTextSize;
}

@property(getter=isActive,assign,readwrite) bool active;
@property(assign,readwrite) struct CGImage { }* cachedImage;
@property(assign,readwrite) double cachedImageScreenScale;
@property(assign,retain) TSTExpressionNode * expressionNode;
@property(getter=isHighlighted,assign,readwrite) bool highlighted;
@property(getter=neverShowsMenu,assign,readwrite) bool neverShowsMenu;
@property(getter=isSelected,assign,readwrite) bool selected;

- (id).cxx_construct;
- (struct CGImage { }*)cachedImage;
- (double)cachedImageScreenScale;
- (id)copyIntoContext:(id)arg1;
- (id)copyIntoContext:(id)arg1 bakeModes:(bool)arg2;
- (void)dealloc;
- (id)description;
- (id)detokenizedText;
- (id)expressionNode;
- (id)formulaPlainText;
- (id)initFromArchive:(const struct TokenAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct UIGraphicalAttachment {} *x5; struct Reference {} *x6; }*)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 expressionNode:(id)arg2;
- (void)invalidate;
- (bool)isActive;
- (bool)isHighlighted;
- (bool)isSelected;
- (bool)neverShowsMenu;
- (void)requestRedraw;
- (void)saveToArchive:(struct TokenAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct UIGraphicalAttachment {} *x5; struct Reference {} *x6; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setCachedImage:(struct CGImage { }*)arg1;
- (void)setCachedImageScreenScale:(double)arg1;
- (void)setExpressionNode:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setNeverShowsMenu:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
