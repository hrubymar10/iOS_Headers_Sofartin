/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalMeCard : NSObject <NSSecureCoding> {
    NSString *_displayName;
    NSArray *_emailAddresses;
    NSString *_uniqueID;
    long long _version;
}

@property(assign,retain) NSString * displayName;
@property(assign,retain) NSArray * emailAddresses;
@property(assign,retain) NSString * uniqueID;
@property(assign,readwrite) long long version;

+ (id)cardFromPath:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 emailAddresses:(id)arg2 uniqueID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMeCard:(id)arg1;
- (id)preferredEmailAddress;
- (void)setVersion:(long long)arg1;
- (id)uniqueID;
- (long long)version;
- (bool)writeToPath:(id)arg1;

@end