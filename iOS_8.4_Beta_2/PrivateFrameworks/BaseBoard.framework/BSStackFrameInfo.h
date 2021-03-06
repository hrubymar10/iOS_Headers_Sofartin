/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSStackFrameInfo : NSObject {
    unsigned long long _address;
    NSString *_className;
    NSString *_executableName;
    NSString *_functionName;
    NSString *_realFunctionName;
}

@property(assign,readonly) unsigned long long address;
@property(assign,retain) NSString * className;
@property(assign,retain) NSString * executableName;
@property(assign,retain) NSString * functionName;

- (unsigned long long)address;
- (id)className;
- (void)dealloc;
- (id)description;
- (id)executableName;
- (id)functionName;
- (id)initWithReturnAddress:(unsigned long long)arg1;

@end
