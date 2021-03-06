/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessAssertionUpdateEvent : BKSProcessAssertionEvent {
    unsigned int _flags;
    NSString *_name;
}

@property(assign,readwrite) unsigned int flags;
@property(assign,copy) NSString * name;

- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned int)flags;
- (id)initWithXPCDictionary:(id)arg1;
- (id)name;
- (void)setFlags:(unsigned int)arg1;
- (void)setName:(id)arg1;

@end
