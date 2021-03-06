/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHPhoneBookIOSManager : CHLogger <CHPhoneBookManagerProtocol> {
    bool _callerIdIsEmail;
    int _multiValueId;
    void *_record;
    int _recordId;
    unsigned int _recordIsSuggested;
}

@property(assign,readwrite) bool callerIdIsEmail;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) int multiValueId;
@property(assign,readwrite) void* record;
@property(assign,readwrite) int recordId;
@property(assign,readwrite) unsigned int recordIsSuggested;
@property(assign,readonly) Class superclass;

- (bool)callerIdIsEmail;
- (void)dealloc;
- (void)fetchABRecord:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(bool)arg3;
- (const void*)getABRecordRef;
- (id)getCallerIdPropertyMultiValueId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(bool)arg3;
- (id)getLocalizedCallerIdLabelForRecordId:(id)arg1;
- (id)getPersonsNameForRecordId:(id)arg1;
- (id)getRecordId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(bool)arg3;
- (id)init;
- (bool)isABContactASuggestion;
- (int)multiValueId;
- (void*)record;
- (int)recordId;
- (unsigned int)recordIsSuggested;
- (void)releaseCachedRecord;
- (void)setABRecordId:(id)arg1;
- (void)setABRecordMultiValueId:(id)arg1;
- (void)setABRecordRef:(const void*)arg1;
- (void)setCallerIdIsEmail:(bool)arg1;
- (void)setMultiValueId:(int)arg1;
- (void)setRecord:(void*)arg1;
- (void)setRecordId:(int)arg1;
- (void)setRecordIsSuggested:(unsigned int)arg1;

@end
