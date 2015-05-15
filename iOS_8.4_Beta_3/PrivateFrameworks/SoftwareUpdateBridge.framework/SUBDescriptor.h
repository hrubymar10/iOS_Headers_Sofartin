/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
 */

@interface SUBDescriptor : NSObject <NSSecureCoding> {
    NSError *_denialReasons;
    SUBDocumentation *_documentation;
    NSString *_documentationID;
    long long _downloadSize;
    long long _installationSize;
    bool _isAwaitingAdmissionControlForInstallation;
    NSString *_marketingVersion;
    long long _msuHandle;
    long long _msuPrepareSize;
    NSString *_productBuildVersion;
    NSString *_productSystemName;
    NSString *_productVersion;
    NSString *_publisher;
    long long _totalRequiredFreeSpace;
    long long _unarchivedSize;
    bool _userDidAcceptTermsAndConditions;
    bool _willProceedWithInstallation;
}

@property(assign,retain) NSError * denialReasons;
@property(assign,retain) SUBDocumentation * documentation;
@property(assign,retain) NSString * documentationID;
@property(assign,readwrite) long long downloadSize;
@property(assign,retain) NSString * humanReadableUpdateName;
@property(assign,readwrite) long long installationSize;
@property(assign,readwrite) bool isAwaitingAdmissionControlForInstallation;
@property(assign,retain) NSString * marketingVersion;
@property(assign,readwrite) long long msuHandle;
@property(assign,readwrite) long long msuPrepareSize;
@property(assign,readonly) long long preparationSize;
@property(assign,retain) NSString * productBuildVersion;
@property(assign,retain) NSString * productSystemName;
@property(assign,retain) NSString * productVersion;
@property(assign,retain) NSString * publisher;
@property(assign,readwrite) long long totalRequiredFreeSpace;
@property(assign,readwrite) long long unarchivedSize;
@property(assign,readwrite) bool userDidAcceptTermsAndConditions;
@property(assign,readwrite) bool willProceedWithInstallation;

+ (bool)supportsSecureCoding;

- (long long)compare:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)denialReasons;
- (id)description;
- (id)documentation;
- (id)documentationID;
- (long long)downloadSize;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)humanReadableUpdateName;
- (id)initWithCoder:(id)arg1;
- (long long)installationSize;
- (bool)isAwaitingAdmissionControlForInstallation;
- (bool)isEqual:(id)arg1;
- (id)marketingVersion;
- (long long)msuHandle;
- (long long)msuPrepareSize;
- (long long)preparationSize;
- (id)productBuildVersion;
- (id)productSystemName;
- (id)productVersion;
- (id)publisher;
- (void)setDenialReasons:(id)arg1;
- (void)setDocumentation:(id)arg1;
- (void)setDocumentationID:(id)arg1;
- (void)setDownloadSize:(long long)arg1;
- (void)setInstallationSize:(long long)arg1;
- (void)setIsAwaitingAdmissionControlForInstallation:(bool)arg1;
- (void)setMarketingVersion:(id)arg1;
- (void)setMsuHandle:(long long)arg1;
- (void)setMsuPrepareSize:(long long)arg1;
- (void)setProductBuildVersion:(id)arg1;
- (void)setProductSystemName:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setPublisher:(id)arg1;
- (void)setTotalRequiredFreeSpace:(long long)arg1;
- (void)setUnarchivedSize:(long long)arg1;
- (void)setUserDidAcceptTermsAndConditions:(bool)arg1;
- (void)setWillProceedWithInstallation:(bool)arg1;
- (long long)totalRequiredFreeSpace;
- (long long)unarchivedSize;
- (bool)userDidAcceptTermsAndConditions;
- (bool)willProceedWithInstallation;

@end
