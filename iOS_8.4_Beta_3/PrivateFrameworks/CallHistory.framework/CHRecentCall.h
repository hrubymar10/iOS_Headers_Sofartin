/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHRecentCall : CHSynchronizedLoggable <NSCopying, NSSecureCoding> {
    NSString *_addressBookCallerIDMultiValueId;
    NSString *_addressBookRecordId;
    bool _answered;
    NSNumber *_bytesOfDataUsed;
    NSMutableArray *_callOccurrences;
    unsigned int _callStatus;
    unsigned int _callType;
    NSString *_callerId;
    unsigned int _callerIdAvailability;
    bool _callerIdIsBlocked;
    bool _callerIdIsFormatted;
    NSString *_callerIdLabel;
    NSString *_callerIdLocation;
    NSString *_callerName;
    NSString *_callerNetworkFirstName;
    NSString *_callerNetworkName;
    NSString *_callerNetworkSecondName;
    NSDate *_date;
    NSString *_devicePhoneId;
    NSNumber *_disconnectedCause;
    double _duration;
    NSString *_isoCountryCode;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    bool _mobileOriginated;
    bool _multiCall;
    <CHPhoneBookManagerProtocol> *_phoneBookManager;
    bool _read;
    NSString *_uniqueId;
    unsigned long long _unreadCount;
}

@property(assign,copy) NSString * addressBookCallerIDMultiValueId;
@property(assign,copy) NSString * addressBookRecordId;
@property(assign,readwrite) bool answered;
@property(assign,copy) NSNumber * bytesOfDataUsed;
@property(assign,retain) NSMutableArray * callOccurrences;
@property(assign,readwrite) unsigned int callStatus;
@property(assign,readwrite) unsigned int callType;
@property(assign,copy) NSString * callerId;
@property(assign,readwrite) unsigned int callerIdAvailability;
@property(assign,readwrite) bool callerIdIsBlocked;
@property(assign,readwrite) bool callerIdIsFormatted;
@property(assign,copy) NSString * callerIdLabel;
@property(assign,copy) NSString * callerIdLocation;
@property(assign,copy) NSString * callerName;
@property(assign,copy) NSString * callerNetworkFirstName;
@property(assign,copy) NSString * callerNetworkName;
@property(assign,copy) NSString * callerNetworkSecondName;
@property(assign,copy) NSDate * date;
@property(assign,copy) NSString * devicePhoneId;
@property(assign,copy) NSNumber * disconnectedCause;
@property(assign,readwrite) double duration;
@property(assign,copy) NSString * isoCountryCode;
@property(assign,copy) NSString * mobileCountryCode;
@property(assign,copy) NSString * mobileNetworkCode;
@property(assign,readwrite) bool mobileOriginated;
@property(assign,readwrite) bool multiCall;
@property(assign,retain) <CHPhoneBookManagerProtocol> * phoneBookManager;
@property(assign,readwrite) bool read;
@property(assign,copy) NSString * uniqueId;
@property(assign,readwrite) unsigned long long unreadCount;

+ (id)callStatusAsString:(unsigned int)arg1;
+ (id)callTypeAsString:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addOccurrencesFromArraySync:(id)arg1;
- (id)addressBookCallerIDMultiValueId;
- (id)addressBookCallerIDMultiValueIdSync;
- (void)addressBookChanged;
- (id)addressBookRecordId;
- (id)addressBookRecordIdSync;
- (bool)answered;
- (id)bytesOfDataUsed;
- (id)callOccurrences;
- (id)callOccurrencesAsStringSync;
- (id)callOccurrencesSync;
- (unsigned int)callStatus;
- (unsigned int)callType;
- (id)callerId;
- (unsigned int)callerIdAvailability;
- (id)callerIdForDisplay;
- (id)callerIdForDisplaySync;
- (bool)callerIdIsBlocked;
- (bool)callerIdIsEmailAddress;
- (bool)callerIdIsEmailAddressSync;
- (bool)callerIdIsFormatted;
- (id)callerIdLabel;
- (id)callerIdLabelSync;
- (id)callerIdLocation;
- (id)callerIdLocationSync;
- (id)callerIdSubStringForDisplay;
- (id)callerName;
- (id)callerNameForDisplay;
- (id)callerNameForDisplaySync;
- (id)callerNameSync;
- (id)callerNetworkFirstName;
- (id)callerNetworkName;
- (id)callerNetworkSecondName;
- (bool)canCoalesceSyncWithCall:(id)arg1 withStrategy:(id)arg2;
- (bool)canCoalesceSyncWithCollapseIfEqualStrategyWithCall:(id)arg1;
- (bool)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1;
- (bool)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (bool)coalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (id)coalescingHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createOccurrenceArraySync;
- (id)date;
- (id)description;
- (id)devicePhoneId;
- (id)disconnectedCause;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchAndSetAddressBookIdsSync;
- (id)getLocalizedStringSync:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (bool)isAddressBookContactASuggestion;
- (bool)isAddressBookContactASuggestionSync;
- (bool)isEqual:(id)arg1;
- (id)isoCountryCode;
- (id)mobileCountryCode;
- (id)mobileNetworkCode;
- (bool)mobileOriginated;
- (bool)multiCall;
- (unsigned long long)numberOfOccurrences;
- (unsigned long long)numberOfOccurrencesSync;
- (id)phoneBookManager;
- (bool)read;
- (bool)representsCallAtDate:(id)arg1;
- (void)setAddressBookCallerIDMultiValueId:(id)arg1;
- (void)setAddressBookRecordId:(id)arg1;
- (void)setAnswered:(bool)arg1;
- (void)setBytesOfDataUsed:(id)arg1;
- (void)setCallOccurrences:(id)arg1;
- (void)setCallStatus:(unsigned int)arg1;
- (void)setCallType:(unsigned int)arg1;
- (void)setCallerId:(id)arg1;
- (void)setCallerIdAvailability:(unsigned int)arg1;
- (void)setCallerIdIsBlocked:(bool)arg1;
- (void)setCallerIdIsFormatted:(bool)arg1;
- (void)setCallerIdLabel:(id)arg1;
- (void)setCallerIdLocation:(id)arg1;
- (void)setCallerName:(id)arg1;
- (void)setCallerNetworkFirstName:(id)arg1;
- (void)setCallerNetworkName:(id)arg1;
- (void)setCallerNetworkSecondName:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDevicePhoneId:(id)arg1;
- (void)setDisconnectedCause:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setMobileCountryCode:(id)arg1;
- (void)setMobileNetworkCode:(id)arg1;
- (void)setMobileOriginated:(bool)arg1;
- (void)setMultiCall:(bool)arg1;
- (void)setPhoneBookManager:(id)arg1;
- (void)setRead:(bool)arg1;
- (void)setUniqueId:(id)arg1;
- (void)setUnreadCount:(unsigned long long)arg1;
- (id)uniqueId;
- (unsigned long long)unreadCount;

@end
