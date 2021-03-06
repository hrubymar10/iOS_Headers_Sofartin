/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDirectionalPanPacketEvent : TRPacketEvent {
    long long _gestureState;
    struct CGPoint { 
        double x; 
        double y; 
    } _location;
    struct CGPoint { 
        double x; 
        double y; 
    } _velocity;
}

@property (nonatomic, readonly) long long gestureState;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } location;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } velocity;

+ (unsigned int)_packetEventType;

- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (id)description;
- (long long)gestureState;
- (id)initWithGestureState:(long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2 velocity:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })location;
- (struct CGPoint { double x1; double x2; })velocity;

@end
