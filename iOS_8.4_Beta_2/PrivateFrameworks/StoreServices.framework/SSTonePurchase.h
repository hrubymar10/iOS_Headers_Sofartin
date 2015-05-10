/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSTonePurchase : SSPurchase <NSCoding, NSCopying, SSXPCCoding> {
    NSArray *_allowedToneStyles;
    NSNumber *_assigneeIdentifier;
    NSString *_assigneeToneStyle;
    bool _shouldMakeDefaultRingtone;
    bool _shouldMakeDefaultTextTone;
}

@property(assign,copy) NSArray * allowedToneStyles;
@property(assign,retain) NSNumber * assigneeIdentifier;
@property(assign,copy) NSString * assigneeToneStyle;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool shouldMakeDefaultRingtone;
@property(assign,readwrite) bool shouldMakeDefaultTextTone;
@property(assign,readonly) Class superclass;

- (void)_addEntriesToDatabaseEncoding:(id)arg1;
- (void)_setValuesUsingDatabaseEncoding:(id)arg1;
- (id)allowedToneStyles;
- (id)assigneeIdentifier;
- (id)assigneeToneStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setAllowedToneStyles:(id)arg1;
- (void)setAssigneeIdentifier:(id)arg1;
- (void)setAssigneeToneStyle:(id)arg1;
- (void)setShouldMakeDefaultRingtone:(bool)arg1;
- (void)setShouldMakeDefaultTextTone:(bool)arg1;
- (bool)shouldMakeDefaultRingtone;
- (bool)shouldMakeDefaultTextTone;

@end