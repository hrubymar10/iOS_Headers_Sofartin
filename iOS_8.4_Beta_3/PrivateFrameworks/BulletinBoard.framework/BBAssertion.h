/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBAssertion : NSObject {
    BBZeroingWeakReference *_delegate;
    NSString *_identifier;
    unsigned long long _transactionID;
}

- (void)dealloc;
- (id)identifier;
- (void)increaseOrIgnoreTransactionID:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1 identifier:(id)arg2;
- (unsigned long long)transactionID;

@end