/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentAuthorizationInvalidDataParam : PKPaymentAuthorizationParam {
    bool _animated;
    long long _dataType;
    NSError *_error;
    long long _status;
}

@property(assign,readwrite) bool animated;
@property(assign,readwrite) long long dataType;
@property(assign,retain) NSError * error;
@property(assign,readwrite) long long status;

- (bool)animated;
- (long long)dataType;
- (id)error;
- (void)setAnimated:(bool)arg1;
- (void)setDataType:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
