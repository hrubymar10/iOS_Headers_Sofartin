/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentDataItem : NSObject <PKPaymentValidating> {
    PKPaymentAuthorizationDataModel *_model;
    long long _status;
    long long _type;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) PKPaymentAuthorizationDataModel * model;
@property(getter=isRejected,assign,readonly) bool rejected;
@property(assign,readwrite) long long status;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) long long type;

+ (long long)dataType;

- (id)initWithModel:(id)arg1;
- (bool)isRejected;
- (bool)isValidWithError:(id*)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)status;
- (long long)type;

@end
