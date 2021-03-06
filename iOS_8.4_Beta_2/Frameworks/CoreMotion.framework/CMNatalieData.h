/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMNatalieData : CMLogItem {
    double fBasalNatalies;
    double fMets;
    double fNatalies;
    long long fRecordId;
    long long fSession;
    NSUUID *fSourceId;
    double fStartDate;
}

@property(assign,readonly) NSNumber * basalNatalies;
@property(assign,readonly) NSNumber * mets;
@property(assign,readonly) NSNumber * natalies;
@property(assign,readonly) long long recordId;
@property(assign,readonly) long long session;
@property(assign,readonly) NSUUID * sourceId;
@property(assign,readonly) NSDate * startDate;

+ (id)maxNatalieEntries;
+ (id)sessionName:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)basalNatalies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 recordId:(long long)arg2 session:(long long)arg3 mets:(double)arg4 natalies:(double)arg5 basalNatalies:(double)arg6 timestamp:(double)arg7 sourceId:(id)arg8;
- (id)mets;
- (id)natalies;
- (long long)recordId;
- (long long)session;
- (id)sourceId;
- (id)startDate;

@end
