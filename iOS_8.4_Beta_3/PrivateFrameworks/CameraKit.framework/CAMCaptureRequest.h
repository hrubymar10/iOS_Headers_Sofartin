/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMCaptureRequest : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *__parameterStorage;
    long long _type;
}

@property (nonatomic, readonly, copy) NSDictionary *_customParameterStorage;
@property (nonatomic, readonly) NSMutableDictionary *_parameterStorage;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)_customParameterStorage;
- (id)_parameterStorage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithType:(long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)parameterForKey:(id)arg1;
- (long long)type;

@end
