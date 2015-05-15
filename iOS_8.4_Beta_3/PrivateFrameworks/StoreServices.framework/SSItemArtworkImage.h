/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemArtworkImage : NSObject <NSCopying, SSXPCCoding> {
    NSMutableDictionary *_dictionary;
    NSString *_imageKind;
}

@property(assign,retain) NSURL * URL;
@property(assign,readonly) NSString * URLString;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) long long height;
@property(assign,copy) NSString * imageKind;
@property(assign,readonly) long long imageOrientation;
@property(assign,readonly) double imageScale;
@property(assign,readonly) struct CGSize { double x1; double x2; } imageSize;
@property(getter=isPrerendered,assign,readonly) bool prerendered;
@property(assign,readonly) Class superclass;
@property(assign,readonly) long long width;

- (id)URL;
- (id)URLString;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (long long)height;
- (id)imageKind;
- (long long)imageOrientation;
- (double)imageScale;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithArtworkDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPrerendered;
- (void)setImageKind:(id)arg1;
- (void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2;
- (void)setURL:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (long long)width;

@end