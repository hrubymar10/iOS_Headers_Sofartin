/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUUserActivityContext : NSObject <NSCopying, NSMutableCopying> {
    NSArray *_containerItems;
    long long _originatorType;
    long long _originatorVersion;
}

@property(assign,copy) NSArray * containerItems;
@property(assign,copy) NSData * dataRepresentation;
@property(assign,readonly) long long originatorType;
@property(assign,readonly) long long originatorVersion;

- (void).cxx_destruct;
- (id)containerItemFollowingContainerItem:(id)arg1;
- (id)containerItems;
- (id)contextByInsertingContainerItem:(id)arg1 afterContainerItem:(id)arg2;
- (id)contextByRemovingContainerItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDataRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)originatorType;
- (long long)originatorVersion;

@end
