/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventDescriptor : NSObject <NSSecureCoding> {
    unsigned int _hidEventType;
}

@property (readonly) unsigned int hidEventType;

+ (id)descriptorWithEventType:(unsigned int)arg1;
+ (id)reusableDescriptorWithEventType:(unsigned int)arg1;
+ (id)reusableKeyboardDescriptorWithPage:(unsigned int)arg1 usage:(unsigned int)arg2;
+ (id)reusableVendorDefinedDescriptorWithPage:(unsigned int)arg1 usage:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (bool)describes:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned int)hidEventType;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;

@end
