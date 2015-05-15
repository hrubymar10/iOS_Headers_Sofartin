/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFFriendshipRequest : NSObject <NSCopying, NSSecureCoding> {
    NSDate *_endDate;
    FMFHandle *_fromHandle;
    NSString *_groupId;
    NSString *_requestId;
    long long _requestType;
    NSSet *_toHandles;
}

@property(assign,retain) NSDate * endDate;
@property(assign,retain) FMFHandle * fromHandle;
@property(assign,retain) NSString * groupId;
@property(assign,retain) NSString * requestId;
@property(assign,readwrite) long long requestType;
@property(assign,retain) NSSet * toHandles;

+ (id)friendshipRequestToHandles:(id)arg1 fromHandle:(id)arg2 withType:(long long)arg3 groupId:(id)arg4 withEndDate:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)fromHandle;
- (id)groupId;
- (id)initWithCoder:(id)arg1;
- (id)initWithFromHandle:(id)arg1 toHandle:(id)arg2 ofType:(long long)arg3 groupId:(id)arg4 endDate:(id)arg5 requestId:(id)arg6;
- (id)requestId;
- (long long)requestType;
- (void)setEndDate:(id)arg1;
- (void)setFromHandle:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setRequestType:(long long)arg1;
- (void)setToHandles:(id)arg1;
- (id)toHandles;

@end