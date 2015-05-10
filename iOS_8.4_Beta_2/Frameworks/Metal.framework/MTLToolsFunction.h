/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsFunction : MTLToolsObject <MTLFunctionSPI> {
    MTLToolsPointerArray *_functions;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) <MTLDevice> * device;
@property(assign,copy) NSString * filePath;
@property(assign,readonly) unsigned long long functionType;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) long long lineNumber;
@property(assign,readonly) NSString * name;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSArray * vertexAttributes;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (id)device;
- (id)filePath;
- (unsigned long long)functionType;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 functions:(id)arg3;
- (long long)lineNumber;
- (id)name;
- (id)vertexAttributes;

@end