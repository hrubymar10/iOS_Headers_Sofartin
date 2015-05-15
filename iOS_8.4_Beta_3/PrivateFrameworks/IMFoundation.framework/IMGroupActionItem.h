/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMGroupActionItem : IMItem <IMRemoteObjectCoding, NSCoding, NSCopying> {
    long long _actionType;
    NSString *_otherCountryCode;
    NSString *_otherHandle;
    NSString *_otherUnformattedID;
}

@property (nonatomic) long long actionType;
@property (nonatomic, retain) NSString *otherCountryCode;
@property (nonatomic, retain) NSString *otherHandle;
@property (nonatomic, retain) NSString *otherUnformattedID;

- (id)_newChatItems;
- (long long)actionType;
- (id)copyDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)otherCountryCode;
- (id)otherHandle;
- (id)otherUnformattedID;
- (void)setActionType:(long long)arg1;
- (void)setOtherCountryCode:(id)arg1;
- (void)setOtherHandle:(id)arg1;
- (void)setOtherUnformattedID:(id)arg1;

@end
