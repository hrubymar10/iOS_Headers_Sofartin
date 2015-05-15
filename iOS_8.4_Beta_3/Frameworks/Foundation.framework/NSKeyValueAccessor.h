/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueAccessor : NSObject {
    id _containerClassID;
    void *_extraArgument1;
    void *_extraArgument2;
    void *_extraArgument3;
    unsigned long long _extraArgumentCount;
    int (*_implementation;
    NSString *_key;
    SEL _selector;
}

- (id)containerClassID;
- (void)dealloc;
- (void*)extraArgument1;
- (void*)extraArgument2;
- (unsigned long long)extraArgumentCount;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 implementation:(int (*)arg3 selector:(SEL)arg4 extraArguments:(void*)arg5 count:(unsigned long long)arg6;
- (id)key;
- (SEL)selector;

@end