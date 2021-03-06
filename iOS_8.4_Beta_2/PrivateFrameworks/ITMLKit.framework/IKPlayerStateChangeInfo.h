/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKPlayerStateChangeInfo : NSObject {
    NSDictionary *_jsonValue;
    long long _oldState;
    long long _state;
}

@property(assign,readwrite) double duration;
@property(assign,readwrite) double elapsedTime;
@property(assign,copy) NSDictionary * jsonValue;
@property(assign,readonly) long long oldState;
@property(assign,readonly) long long state;

- (void).cxx_destruct;
- (id)_stateNameForState:(long long)arg1;
- (double)duration;
- (double)elapsedTime;
- (id)initWithState:(long long)arg1;
- (id)initWithState:(long long)arg1 oldState:(long long)arg2;
- (id)jsonValue;
- (id)objectForKeyedSubscript:(id)arg1;
- (long long)oldState;
- (void)setDuration:(double)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setJsonValue:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (long long)state;

@end
