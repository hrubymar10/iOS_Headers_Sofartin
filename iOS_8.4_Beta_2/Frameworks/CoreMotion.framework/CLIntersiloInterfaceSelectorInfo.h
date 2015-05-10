/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloInterfaceSelectorInfo : NSObject {
    int _numArguments;
    int _replyBlockIndex;
    int _returnAddressIndex;
    int _returnValueSize;
    SEL _sel;
    NSMethodSignature *_sig;
    NSString *_str;
}

@property(assign,readonly) int numArguments;
@property(assign,readonly) int replyBlockIndex;
@property(assign,readonly) int returnAddressIndex;
@property(assign,readonly) int returnValueSize;
@property(assign,readonly) SEL sel;
@property(assign,retain) NSMethodSignature * sig;
@property(assign,retain) NSString * str;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSelector:(SEL)arg1 andMethodSignature:(id)arg2;
- (int)numArguments;
- (int)replyBlockIndex;
- (int)returnAddressIndex;
- (int)returnValueSize;
- (SEL)sel;
- (id)sig;
- (id)str;

@end