/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemLookupRequest : SSRequest <SSXPCCoding> {
    NSMutableDictionary *_parameters;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SSItemLookupRequestDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSDictionary * parameters;
@property(assign,readonly) Class superclass;

- (id)_convertedValueForValue:(id)arg1;
- (id)_copyItemsFromResponse:(id)arg1 expirationDate:(id)arg2;
- (id)_errorForStatusCode:(long long)arg1;
- (id)copyQueryStringParameters;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (id)parameters;
- (void)setValue:(id)arg1 forParameter:(id)arg2;
- (bool)start;
- (void)startWithCompletionBlock:(id)arg1;
- (void)startWithItemLookupBlock:(id)arg1;
- (id)valueForParameter:(id)arg1;

@end
