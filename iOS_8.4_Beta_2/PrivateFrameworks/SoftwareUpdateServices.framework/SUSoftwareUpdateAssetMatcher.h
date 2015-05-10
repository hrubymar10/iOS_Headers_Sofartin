/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUSoftwareUpdateAssetMatcher : SUAssetStateMatcher {
    bool _checkTatsu;
    NSString *_fromBuild;
    NSString *_fromProductType;
    NSString *_fromReleaseType;
    NSString *_fromVersion;
    SUPreferences *_preferences;
}

@property(assign,readwrite) bool compareWithTatsuForEligibility;
@property(assign,readonly) NSString * fromBuild;
@property(assign,readonly) NSString * fromProductType;
@property(assign,readonly) NSString * fromReleaseType;
@property(assign,readonly) NSString * fromVersion;
@property(assign,retain) SUPreferences * preferences;

+ (id)matcherForCurrentDevice;
+ (id)matcherForCurrentDeviceWithInterestedStates:(int)arg1;

- (id)_copyMatchingAssetsAfterSortingAndFiltering:(id)arg1;
- (id)_createSortedAndFilteredAssetResults:(id)arg1 usingFirstKey:(id)arg2 secondKey:(id)arg3;
- (id)_findMatchFromCandidates:(id)arg1 error:(id*)arg2;
- (unsigned long long)_getIndexOfHighestVersionedAsset:(id)arg1 usingFirstKey:(id)arg2 secondKey:(id)arg3;
- (bool)_isDeviceEligibleForUpdate:(id)arg1;
- (bool)_isPossibleSoftwareUpdate:(id)arg1;
- (bool)compareWithTatsuForEligibility;
- (void)dealloc;
- (id)fromBuild;
- (id)fromProductType;
- (id)fromReleaseType;
- (id)fromVersion;
- (id)initWithVersion:(id)arg1 build:(id)arg2 productType:(id)arg3 releaseType:(id)arg4 interestedStates:(int)arg5;
- (id)preferences;
- (void)setCompareWithTatsuForEligibility:(bool)arg1;
- (void)setPreferences:(id)arg1;

@end
