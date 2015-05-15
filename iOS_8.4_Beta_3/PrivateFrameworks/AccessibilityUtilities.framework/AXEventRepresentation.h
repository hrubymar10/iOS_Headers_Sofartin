/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventRepresentation : NSObject <NSCopying, NSSecureCoding> {
    NSData *_HIDAttributeData;
    unsigned long long _HIDTime;
    unsigned long long _additionalFlags;
    NSString *_clientId;
    unsigned int _contextId;
    NSData *_data;
    int _flags;
    AXEventHandInfoRepresentation *_handInfo;
    bool _isBuiltIn;
    bool _isGeneratedEvent;
    AXEventKeyInfoRepresentation *_keyInfo;
    struct CGPoint { 
        double x; 
        double y; 
    } _location;
    int _pid;
    unsigned long long _senderID;
    int _subtype;
    unsigned int _taskPort;
    unsigned long long _time;
    unsigned int _type;
    void *_window;
    struct CGPoint { 
        double x; 
        double y; 
    } _windowLocation;
}

@property (nonatomic, retain) NSData *HIDAttributeData;
@property (nonatomic) unsigned long long HIDTime;
@property (nonatomic) unsigned long long additionalFlags;
@property (nonatomic, retain) NSString *clientId;
@property (nonatomic) unsigned int contextId;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) int flags;
@property (nonatomic, retain) AXEventHandInfoRepresentation *handInfo;
@property (nonatomic) bool isBuiltIn;
@property (nonatomic) bool isGeneratedEvent;
@property (nonatomic, retain) AXEventKeyInfoRepresentation *keyInfo;
@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (nonatomic) int pid;
@property (nonatomic) unsigned long long senderID;
@property (nonatomic) int subtype;
@property (nonatomic) unsigned int taskPort;
@property (nonatomic) unsigned long long time;
@property (nonatomic) unsigned int type;
@property (nonatomic) void*window;
@property (nonatomic) struct CGPoint { double x1; double x2; } windowLocation;

+ (id)_digitizerRepresentation:(struct __IOHIDEvent { }*)arg1 hidStreamIdentifier:(id)arg2;
+ (id)_keyboardButtonEvent:(struct __IOHIDEvent { }*)arg1;
+ (id)buttonRepresentationWithType:(unsigned int)arg1;
+ (id)keyRepresentationWithType:(unsigned int)arg1;
+ (id)representationWithData:(id)arg1;
+ (id)representationWithEventRecord:(struct { int x1; int x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; unsigned int x5; unsigned long long x6; void *x7; int x8; int x9; unsigned int x10; unsigned long long x11; unsigned char x12[0]; }*)arg1;
+ (id)representationWithHIDEvent:(struct __IOHIDEvent { }*)arg1 hidStreamIdentifier:(id)arg2;
+ (id)representationWithLocation:(struct CGPoint { double x1; double x2; })arg1 windowLocation:(struct CGPoint { double x1; double x2; })arg2 handInfo:(id)arg3;
+ (id)representationWithType:(unsigned int)arg1 subtype:(int)arg2 time:(unsigned long long)arg3 location:(struct CGPoint { double x1; double x2; })arg4 windowLocation:(struct CGPoint { double x1; double x2; })arg5 handInfo:(id)arg6;
+ (bool)supportsSecureCoding;
+ (id)touchRepresentationWithHandType:(unsigned int)arg1 location:(struct CGPoint { double x1; double x2; })arg2;

- (id)HIDAttributeData;
- (unsigned long long)HIDTime;
- (unsigned int)_contextIDFromHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (struct __IOHIDEvent { }*)_newButtonHIDEventRef;
- (struct __IOHIDEvent { }*)_newHandHIDEventRef;
- (struct __IOHIDEvent { }*)_newKeyboardHIDEventRef;
- (unsigned long long)additionalFlags;
- (id)clientId;
- (unsigned int)contextId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dataRepresentation;
- (void)dealloc;
- (id)denormalizedEventRepresentation:(bool)arg1 descale:(bool)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fakeTouchScaleEventRepresentation:(bool)arg1;
- (unsigned int)firstPathContextId;
- (int)flags;
- (id)handInfo;
- (id)initWithCoder:(id)arg1;
- (bool)isBuiltIn;
- (bool)isGeneratedEvent;
- (id)keyInfo;
- (struct CGPoint { double x1; double x2; })location;
- (struct { int x1; int x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; unsigned int x5; unsigned long long x6; void *x7; int x8; int x9; unsigned int x10; unsigned long long x11; unsigned char x12[0]; }*)newEventRecord;
- (struct __GSEvent { }*)newGSEventRef;
- (struct __IOHIDEvent { }*)newHIDEventRef;
- (id)normalizedEventRepresentation:(bool)arg1 scale:(bool)arg2;
- (int)pid;
- (unsigned long long)senderID;
- (void)setAdditionalFlags:(unsigned long long)arg1;
- (void)setClientId:(id)arg1;
- (void)setContextId:(unsigned int)arg1;
- (void)setData:(id)arg1;
- (void)setFlags:(int)arg1;
- (void)setHIDAttributeData:(id)arg1;
- (void)setHIDTime:(unsigned long long)arg1;
- (void)setHandInfo:(id)arg1;
- (void)setIsBuiltIn:(bool)arg1;
- (void)setIsGeneratedEvent:(bool)arg1;
- (void)setKeyInfo:(id)arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPid:(int)arg1;
- (void)setSenderID:(unsigned long long)arg1;
- (void)setSubtype:(int)arg1;
- (void)setTaskPort:(unsigned int)arg1;
- (void)setTime:(unsigned long long)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setWindow:(void*)arg1;
- (void)setWindowLocation:(struct CGPoint { double x1; double x2; })arg1;
- (int)subtype;
- (unsigned int)taskPort;
- (unsigned long long)time;
- (unsigned int)type;
- (void*)window;
- (struct CGPoint { double x1; double x2; })windowLocation;

@end
