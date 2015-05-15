/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPlaybackContext : NSObject <NSCopying, NSMutableCopying> {
    long long _numberOfSkipsUsed;
    NSArray *_trackPlaybackDescriptorQueue;
}

@property(assign,readonly) long long numberOfSkipsUsed;
@property(assign,copy) NSArray * trackPlaybackDescriptorQueue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)numberOfSkipsUsed;
- (id)playbackContextDictionary;
- (id)trackPlaybackDescriptorQueue;

@end
