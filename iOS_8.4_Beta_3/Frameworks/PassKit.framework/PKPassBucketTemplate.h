/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassBucketTemplate : NSObject {
    long long _bucketAlignment;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _bucketRect;
    PKPassFieldTemplate *_defaultFieldTemplate;
    NSMutableArray *_fieldTemplates;
    unsigned long long _maxFields;
    double _minFieldPadding;
    bool _sitsOnStripImage;
}

@property(assign,readwrite) long long bucketAlignment;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bucketRect;
@property(assign,retain) PKPassFieldTemplate * defaultFieldTemplate;
@property(assign,retain) NSMutableArray * fieldTemplates;
@property(assign,readwrite) unsigned long long maxFields;
@property(assign,readwrite) double minFieldPadding;
@property(assign,readwrite) bool sitsOnStripImage;

- (void)addFieldTemplate:(id)arg1;
- (long long)bucketAlignment;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bucketRect;
- (void)dealloc;
- (id)defaultFieldTemplate;
- (id)fieldTemplates;
- (unsigned long long)maxFields;
- (double)minFieldPadding;
- (void)setBucketAlignment:(long long)arg1;
- (void)setBucketRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDefaultFieldTemplate:(id)arg1;
- (void)setFieldTemplates:(id)arg1;
- (void)setMaxFields:(unsigned long long)arg1;
- (void)setMinFieldPadding:(double)arg1;
- (void)setSitsOnStripImage:(bool)arg1;
- (bool)sitsOnStripImage;
- (id)templateForFieldAtIndex:(unsigned long long)arg1;

@end
