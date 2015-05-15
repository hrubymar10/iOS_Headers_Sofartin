/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsCommandEncoder : MTLToolsObject <MTLCommandEncoder>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) <MTLDevice> * device;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * label;
@property(assign,readonly) Class superclass;

- (id)device;
- (void)endEncoding;
- (void)insertDebugSignpost:(id)arg1;
- (id)label;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setLabel:(id)arg1;

@end