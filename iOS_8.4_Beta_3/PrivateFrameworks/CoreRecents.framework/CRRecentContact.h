/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

@interface CRRecentContact : NSObject <NSSecureCoding> {
    NSString *_address;
    long long _contactID;
    NSNumber *_decayedWeight;
    NSString *_displayName;
    unsigned long long _groupKind;
    NSString *_groupName;
    NSString *_kind;
    NSString *_lastSendingAddress;
    NSArray *_members;
    NSDictionary *_metadata;
    NSString *_originalSource;
    NSString *_rawAddress;
    NSMutableArray *_recentDates;
    long long _recentID;
    NSString *_recentsDomain;
    NSNumber *_weight;
}

@property(assign,copy) NSString * address;
@property(assign,readwrite) long long contactID;
@property(assign,readonly) unsigned long long countOfRecents;
@property(assign,retain) NSNumber * decayedWeight;
@property(assign,copy) NSString * displayName;
@property(getter=isGroup,assign,readonly) bool group;
@property(assign,readwrite) unsigned long long groupKind;
@property(assign,copy) NSString * groupName;
@property(assign,copy) NSString * kind;
@property(assign,copy) NSString * lastSendingAddress;
@property(assign,copy) NSDate * leastRecentDate;
@property(assign,copy) NSArray * members;
@property(assign,copy) NSDictionary * metadata;
@property(assign,copy) NSDate * mostRecentDate;
@property(assign,copy) NSString * originalSource;
@property(assign,copy) NSString * rawAddress;
@property(assign,copy) NSArray * recentDates;
@property(assign,readwrite) long long recentID;
@property(assign,copy) NSString * recentsDomain;
@property(assign,retain) NSNumber * weight;

+ (bool)supportsSecureCoding;

- (id)_addressBookContext;
- (void)_setAddressBookContext:(id)arg1;
- (id)address;
- (void)applyWeight:(id)arg1;
- (id)archivableContactID;
- (id)archivableGroupKind;
- (id)archivableGroupMembers;
- (id)archivableMetadata;
- (id)archivableRecentID;
- (id)contactForPropertyID:(int)arg1;
- (long long)contactID;
- (unsigned long long)countOfRecents;
- (void)dealloc;
- (id)decayedWeight;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateArchivablePropertiesWithBlock:(id)arg1;
- (void*)existingPerson;
- (unsigned long long)groupKind;
- (id)groupName;
- (bool)hasFullTextMatch:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 recentDate:(id)arg4 recentsDomain:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactID:(long long)arg1;
- (id)initWithMembers:(id)arg1 displayName:(id)arg2 recentDate:(id)arg3 recentsDomain:(id)arg4;
- (void)insertDate:(id)arg1 atIndex:(unsigned long long)arg2 required:(bool)arg3;
- (unsigned long long)insertionIndexForDate:(id)arg1 wouldBeUnique:(bool*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isGroup;
- (id)kind;
- (id)lastSendingAddress;
- (void)lazilyCreateRecentDates;
- (id)leastRecentDate;
- (int)matchedIdentifier;
- (id)members;
- (id)metadata;
- (id)mostRecentDate;
- (id)originalSource;
- (void*)person;
- (int)property;
- (id)rawAddress;
- (id)recentDates;
- (long long)recentID;
- (id)recentsDomain;
- (void)recordRecentEventForDate:(id)arg1 userInitiated:(bool)arg2;
- (void)setAddress:(id)arg1;
- (void)setArchivableContactID:(id)arg1;
- (void)setArchivableGroupKind:(id)arg1;
- (void)setArchivableGroupMembers:(id)arg1;
- (void)setArchivableMetadata:(id)arg1;
- (void)setArchivableRecentID:(id)arg1;
- (void)setContactID:(long long)arg1;
- (void)setDecayedWeight:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setGroupKind:(unsigned long long)arg1;
- (void)setGroupName:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setLastSendingAddress:(id)arg1;
- (void)setMembers:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setOriginalSource:(id)arg1;
- (void)setRawAddress:(id)arg1;
- (void)setRecentDates:(id)arg1;
- (void)setRecentID:(long long)arg1;
- (void)setRecentsDomain:(id)arg1;
- (void)setWeight:(id)arg1;
- (id)weight;

@end
