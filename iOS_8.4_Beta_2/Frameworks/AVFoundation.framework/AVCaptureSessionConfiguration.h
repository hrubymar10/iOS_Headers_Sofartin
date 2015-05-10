/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSessionConfiguration : NSObject {
    long long _configurationID;
    NSArray *_connections;
    NSArray *_inputs;
    NSArray *_outputs;
    NSHashTable *_videoPreviewLayers;
}

@property(assign,readonly) long long configurationID;
@property(assign,readonly) NSArray * connections;
@property(assign,readonly) NSArray * inputs;
@property(assign,readonly) NSArray * outputs;
@property(assign,readonly) NSHashTable * videoPreviewLayers;

- (long long)configurationID;
- (id)connections;
- (void)dealloc;
- (id)initWithConfigurationID:(long long)arg1 inputs:(id)arg2 outputs:(id)arg3 videoPreviewLayers:(id)arg4 connections:(id)arg5;
- (id)inputs;
- (id)outputs;
- (id)uniqueConnections:(id)arg1;
- (id)uniqueInputs:(id)arg1;
- (id)uniqueOutputs:(id)arg1;
- (id)uniqueVideoPreviewLayers:(id)arg1;
- (id)videoPreviewLayers;

@end