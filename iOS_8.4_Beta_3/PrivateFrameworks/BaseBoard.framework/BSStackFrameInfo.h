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

@property (nonatomic, readonly) unsigned long long address;
@property (nonatomic, readonly, retain) NSString *className;
@property (nonatomic, readonly, retain) NSString *executableName;
@property (nonatomic, readonly, retain) NSString *functionName;

- (unsigned long long)address;
- (id)className;
- (void)dealloc;
- (id)description;
- (id)executableName;
- (id)functionName;
- (id)initWithReturnAddress:(unsigned long long)arg1;

@end
