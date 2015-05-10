/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchNotificationChangesOperationInfo : CKOperationInfo <NSSecureCoding> {
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
}

@property(assign,retain) CKServerChangeToken * previousServerChangeToken;
@property(assign,readwrite) unsigned long long resultsLimit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)previousServerChangeToken;
- (unsigned long long)resultsLimit;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;

@end
