/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLAreaElement : DOMHTMLElement

@property(assign,copy) NSURL * absoluteLinkURL;
@property(assign,copy) NSString * accessKey;
@property(assign,copy) NSString * alt;
@property(assign,copy) NSString * coords;
@property(assign,copy) NSString * hashName;
@property(assign,copy) NSString * host;
@property(assign,copy) NSString * hostname;
@property(assign,copy) NSString * href;
@property(assign,readwrite) bool noHref;
@property(assign,copy) NSString * pathname;
@property(assign,copy) NSString * port;
@property(assign,copy) NSString * protocol;
@property(assign,copy) NSString * search;
@property(assign,copy) NSString * shape;
@property(assign,copy) NSString * target;

- (id)absoluteLinkURL;
- (struct _WKQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })absoluteQuadWithOwner:(id)arg1;
- (id)absoluteQuadsAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)absoluteQuadsWithOwner:(id)arg1;
- (id)accessKey;
- (id)alt;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxWithOwner:(id)arg1;
- (id)boundingBoxesWithOwner:(id)arg1;
- (id)coords;
- (id)hashName;
- (id)host;
- (id)hostname;
- (id)href;
- (bool)noHref;
- (id)pathname;
- (id)ping;
- (id)port;
- (id)protocol;
- (id)search;
- (void)setAccessKey:(id)arg1;
- (void)setAlt:(id)arg1;
- (void)setCoords:(id)arg1;
- (void)setHref:(id)arg1;
- (void)setNoHref:(bool)arg1;
- (void)setPing:(id)arg1;
- (void)setShape:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)shape;
- (id)target;

@end
