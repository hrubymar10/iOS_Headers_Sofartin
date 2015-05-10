/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAContext : NSObject

@property(assign,readwrite) struct CGColorSpace { }* colorSpace;
@property(assign,readonly) unsigned int contextId;
@property(assign,retain) CALayer * layer;
@property(assign,readwrite) float level;
@property(assign,readonly) NSDictionary * options;
@property(getter=isSecure,assign,readwrite) bool secure;
@property(assign,readonly) bool valid;

+ (id)allContexts;
+ (id)currentContext;
+ (id)localContext;
+ (id)localContextWithOptions:(id)arg1;
+ (id)objectForSlot:(unsigned int)arg1;
+ (id)remoteContext;
+ (id)remoteContextWithOptions:(id)arg1;
+ (void)setClientPort:(unsigned int)arg1;

- (id)_associatedScreen;
- (void)_setAssociatedScreen:(id)arg1;
- (unsigned int)createFencePort;
- (unsigned int)createImageSlot:(struct CGSize { double x1; double x2; })arg1 hasAlpha:(bool)arg2;
- (unsigned int)createSlot;
- (void)deleteSlot:(unsigned int)arg1;
- (void)invalidate;
- (void)orderAbove:(unsigned int)arg1;
- (void)orderBelow:(unsigned int)arg1;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(id)arg2;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;

@end