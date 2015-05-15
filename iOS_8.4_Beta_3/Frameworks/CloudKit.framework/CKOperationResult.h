/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationResult : NSObject <NSSecureCoding> {
    NSError *_error;
    NSString *_operationID;
    NSArray *_requestUUIDs;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *operationID;
@property (nonatomic, retain) NSArray *requestUUIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)operationID;
- (id)requestUUIDs;
- (void)setError:(id)arg1;
- (void)setOperationID:(id)arg1;
- (void)setRequestUUIDs:(id)arg1;

@end
