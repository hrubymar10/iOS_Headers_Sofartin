/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverBulletinUpdate : NSObject <NSSecureCoding> {
    BBBulletin *_bulletin;
    unsigned long long _transactionID;
    long long _updateType;
}

@property (nonatomic, readonly, retain) BBBulletin *bulletin;
@property (nonatomic, readonly) unsigned long long transactionID;
@property (nonatomic, readonly) long long updateType;

+ (bool)supportsSecureCoding;

- (id)bulletin;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBulletin:(id)arg1 updateType:(long long)arg2 transactionID:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)transactionID;
- (long long)updateType;

@end
