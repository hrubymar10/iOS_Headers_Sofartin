/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPSetPlaybackSpeed : SADomainCommand

@property(assign,readwrite) double scalingFactor;

+ (id)setPlaybackSpeed;
+ (id)setPlaybackSpeedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (double)scalingFactor;
- (void)setScalingFactor:(double)arg1;

@end
