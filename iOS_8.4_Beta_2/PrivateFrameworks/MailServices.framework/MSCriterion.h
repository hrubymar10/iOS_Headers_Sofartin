/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSCriterion : NSObject <NSSecureCoding> {
    <NSObject> *_criteria;
    NSString *_qualifier;
    NSString *_type;
}

+ (bool)supportsSecureCoding;

- (id)_initWithType:(id)arg1 qualifier:(id)arg2 criteria:(id)arg3;
- (id)criteria;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCriteria:(id)arg1 allRequired:(bool)arg2;
- (id)initWithType:(id)arg1 qualifier:(id)arg2 expression:(id)arg3;
- (id)qualifier;
- (id)type;

@end
