/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaContentTasteItemUpdate : NSObject <NSSecureCoding, SSXPCCoding> {
    SSVMediaContentTasteItem *_item;
    NSDate *_updateDate;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) SSVMediaContentTasteItem * item;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSDate * updateDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void)setUpdateDate:(id)arg1;
- (id)updateDate;

@end
