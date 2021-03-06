/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKImageData : NSObject {
    unsigned long long _count;
    NSData *_data;
    struct CGImageSource { } *_imageSource;
    bool _initializedProperties;
    long long _orientation;
    struct CGSize { 
        double width; 
        double height; 
    } _pxSize;
}

@property (nonatomic, readonly, copy) NSString *MIMEType;
@property (nonatomic, readonly, copy) NSString *UTIType;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly, retain) UIImage *image;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } ptSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pxSize;

+ (id)UTITypeForData:(id)arg1;

- (id)MIMEType;
- (id)UTIType;
- (void)_initializeProperties;
- (id)_thumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 atIndex:(unsigned long long)arg2;
- (id)_thumbnailFitToSize:(struct CGSize { double x1; double x2; })arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)count;
- (id)data;
- (void)dealloc;
- (id)durationsWithMaxCount:(unsigned long long)arg1;
- (id)image;
- (id)initWithData:(id)arg1;
- (long long)orientation;
- (struct CGSize { double x1; double x2; })ptSize;
- (struct CGSize { double x1; double x2; })pxSize;
- (void)setData:(id)arg1;
- (id)thumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)thumbnailFillToSizeCropping:(struct CGSize { double x1; double x2; })arg1;
- (id)thumbnailFitToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)thumbnailsFillToSize:(struct CGSize { double x1; double x2; })arg1 maxCount:(unsigned long long)arg2;
- (id)thumbnailsFitToSize:(struct CGSize { double x1; double x2; })arg1 maxCount:(unsigned long long)arg2;

@end
