/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface __NSConcreteUUID : NSUUID {
    unsigned char _uuidBytes;
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)UUIDString;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; })_cfUUIDBytes;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)getUUIDBytes:(unsigned char)arg1;
- (id)init;
- (id)initWithUUIDBytes:(unsigned char)arg1;
- (id)initWithUUIDString:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
