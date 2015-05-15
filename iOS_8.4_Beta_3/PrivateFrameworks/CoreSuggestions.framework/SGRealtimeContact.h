/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGRealtimeContact : NSObject <NSCopying, NSSecureCoding> {
    int _abPersonId;
    SGContact *_contact;
    int _state;
}

@property (nonatomic, readonly) int abPersonId;
@property (nonatomic, readonly) SGContact *contact;
@property (nonatomic, readonly) int state;

+ (id)realtimeContactForFields:(id)arg1 addedToCuratedContact:(int)arg2;
+ (id)realtimeContactForNewContact:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)abPersonId;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(int)arg1 contact:(id)arg2 abPersonId:(int)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRealtimeContact:(id)arg1;
- (int)state;

@end
