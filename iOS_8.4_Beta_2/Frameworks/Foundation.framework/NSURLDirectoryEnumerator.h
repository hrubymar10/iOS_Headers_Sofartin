/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {
    struct __CFURLEnumerator { } *_enumerator;
    id _errorHandler;
    bool shouldContinue;
}

@property(assign,copy) id errorHandler;

- (void)dealloc;
- (id)directoryAttributes;
- (id)errorHandler;
- (id)fileAttributes;
- (void)finalize;
- (id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(id)arg4;
- (unsigned long long)level;
- (id)nextObject;
- (void)setErrorHandler:(id)arg1;
- (void)skipDescendants;
- (void)skipDescendents;

@end
