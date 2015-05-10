/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessAssertionEvent : NSObject <BSXPCCoding> {
    NSString *_identifier;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * identifier;
@property(assign,readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)identifier;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end