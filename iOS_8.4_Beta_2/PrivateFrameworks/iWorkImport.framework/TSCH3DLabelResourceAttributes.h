/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLabelResourceAttributes : NSObject <NSCopying> {
    TSCH3DLabelBitmapContextInfo *mBitmapContextInfo;
    double mLabelWidth;
    TSWPParagraphStyle *mParagraphStyle;
    double mRenderSamples;
    NSString *mString;
}

@property(assign,readonly) TSCH3DLabelBitmapContextInfo * bitmapContextInfo;
@property(assign,readonly) double labelWidth;
@property(assign,readonly) TSWPParagraphStyle * paragraphStyle;
@property(assign,readonly) double renderSamples;
@property(assign,readonly) NSString * string;

+ (id)labelAttributesWithParagraphStyle:(id)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(double)arg4 renderSamples:(double)arg5;

- (id)bitmapContextInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithParagraphStyle:(id)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(double)arg4 renderSamples:(double)arg5;
- (bool)isEqual:(id)arg1;
- (double)labelWidth;
- (id)paragraphStyle;
- (double)renderSamples;
- (id)string;

@end
