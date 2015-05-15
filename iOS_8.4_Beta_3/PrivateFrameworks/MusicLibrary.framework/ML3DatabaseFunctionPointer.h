/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction {
    int (*_functionPointer;
    void *_userData;
}

@property(assign,readwrite) int (* functionPointer;
@property(assign,readwrite) void* userData;

- (int (*)functionPointer;
- (bool)registerWithConnection:(id)arg1;
- (void)setFunctionPointer:(int (*)arg1;
- (void)setUserData:(void*)arg1;
- (void*)userData;

@end