/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioSessionPortDescription : NSObject {
    void *_impl;
}

@property (readonly) NSString *UID;
@property (readonly) NSArray *channels;
@property (readonly) NSArray *dataSources;
@property (readonly) NSString *portName;
@property (readonly) NSString *portType;
@property (readonly) AVAudioSessionDataSourceDescription *preferredDataSource;
@property (readonly) AVAudioSessionDataSourceDescription *selectedDataSource;

+ (id)privateCreateOrConfigureArray:(id)arg1 withRawPortArray:(id)arg2;
+ (bool)privateMatchesInputs:(id)arg1 toRawInputs:(id)arg2;

- (id)UID;
- (id)channels;
- (void)configureChannelsAndDataSources:(id)arg1;
- (id)dataSources;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRawPortDescription:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPort:(id)arg1 compareStrict:(bool)arg2;
- (bool)isHeadphones;
- (id)portName;
- (id)portType;
- (id)preferredDataSource;
- (id)privateGetID;
- (struct PortDescriptionImpl { id x1; id x2; id x3; id x4; bool x5; id x6; id x7; id x8; id x9; }*)privateGetImplementation;
- (bool)privateMatchesRawDescription:(id)arg1;
- (id)selectedDataSource;
- (bool)setPreferredDataSource:(id)arg1 error:(id*)arg2;

@end
