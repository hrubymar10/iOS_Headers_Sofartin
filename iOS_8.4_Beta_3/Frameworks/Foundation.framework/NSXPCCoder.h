/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCCoder : NSCoder {
    id _reserved1;
    <NSObject> *_userInfo;
}

@property(assign,retain) <NSObject> * userInfo;

- (void)dealloc;
- (id)decodeXPCObjectForKey:(id)arg1;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { }*)arg1 forKey:(id)arg2;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (bool)requiresSecureCoding;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
