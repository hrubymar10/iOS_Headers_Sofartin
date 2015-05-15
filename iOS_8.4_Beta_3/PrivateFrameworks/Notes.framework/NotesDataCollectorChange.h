/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NotesDataCollectorChange : NSObject {
    NSString *_accountIdentifier;
    int _accountType;
    long long _entity;
    long long _operation;
}

@property(assign,copy) NSString * accountIdentifier;
@property(assign,readwrite) int accountType;
@property(assign,readwrite) long long entity;
@property(assign,readwrite) long long operation;

+ (id)changeForEntity:(long long)arg1 operation:(long long)arg2 account:(id)arg3;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (int)accountType;
- (long long)entity;
- (long long)operation;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountType:(int)arg1;
- (void)setEntity:(long long)arg1;
- (void)setOperation:(long long)arg1;

@end
