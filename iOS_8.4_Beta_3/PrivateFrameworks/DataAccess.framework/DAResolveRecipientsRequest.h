/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAResolveRecipientsRequest : NSObject {
    NSArray *_emailAddresses;
    NSDate *_endTime;
    bool _retrieveAvailablilty;
    bool _retrieveCertificates;
    NSDate *_startTime;
}

@property(assign,retain) NSArray * emailAddresses;
@property(assign,retain) NSDate * endTime;
@property(assign,readwrite) bool retrieveAvailablilty;
@property(assign,readwrite) bool retrieveCertificates;
@property(assign,retain) NSDate * startTime;

- (void).cxx_destruct;
- (id)description;
- (id)emailAddresses;
- (id)endTime;
- (unsigned long long)hash;
- (id)initWithEmailAddresses:(id)arg1;
- (id)initWithEmailAddresses:(id)arg1 retrieveCertificates:(bool)arg2 retrieveAvailability:(bool)arg3 withStartTime:(id)arg4 endTime:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)retrieveAvailablilty;
- (bool)retrieveCertificates;
- (void)setEmailAddresses:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setRetrieveAvailablilty:(bool)arg1;
- (void)setRetrieveCertificates:(bool)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end