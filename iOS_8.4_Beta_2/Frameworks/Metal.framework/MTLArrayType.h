/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLArrayType : NSObject {
    unsigned int _arrayLength;
    id _details;
    unsigned long long _elementType;
    unsigned int _stride;
}

@property(assign,readonly) unsigned long long arrayLength;
@property(assign,readonly) unsigned long long elementType;
@property(assign,readonly) unsigned long long stride;

- (unsigned long long)arrayLength;
- (void)dealloc;
- (id)describe;
- (id)elementArrayType;
- (id)elementStructType;
- (unsigned long long)elementType;
- (id)initWithArrayLength:(unsigned long long)arg1 elementType:(unsigned long long)arg2 stride:(unsigned long long)arg3 details:(id)arg4;
- (unsigned long long)stride;

@end
