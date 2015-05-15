/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebEvent : NSObject {
    int _characterSet;
    NSString *_characters;
    NSString *_charactersIgnoringModifiers;
    float _deltaX;
    float _deltaY;
    float _gestureRotation;
    float _gestureScale;
    bool _isGesture;
    unsigned short _keyCode;
    bool _keyRepeating;
    unsigned long long _keyboardFlags;
    struct CGPoint { 
        double x; 
        double y; 
    } _locationInWindow;
    unsigned int _modifierFlags;
    bool _popupVariant;
    bool _tabKey;
    double _timestamp;
    unsigned int _touchCount;
    NSArray *_touchIdentifiers;
    NSArray *_touchLocations;
    NSArray *_touchPhases;
    int _type;
    bool _wasHandled;
}

@property(assign,readonly) int characterSet;
@property(assign,retain) NSString * characters;
@property(assign,retain) NSString * charactersIgnoringModifiers;
@property(assign,readonly) float deltaX;
@property(assign,readonly) float deltaY;
@property(assign,readonly) float gestureRotation;
@property(assign,readonly) float gestureScale;
@property(assign,readonly) bool isGesture;
@property(assign,readonly) unsigned short keyCode;
@property(getter=isKeyRepeating,assign,readonly) bool keyRepeating;
@property(assign,readonly) unsigned long long keyboardFlags;
@property(assign,readonly) struct CGPoint { double x1; double x2; } locationInWindow;
@property(assign,readonly) unsigned int modifierFlags;
@property(getter=isPopupVariant,assign,readonly) bool popupVariant;
@property(getter=isTabKey,assign,readonly) bool tabKey;
@property(assign,readonly) double timestamp;
@property(assign,readonly) unsigned int touchCount;
@property(assign,retain) NSArray * touchIdentifiers;
@property(assign,retain) NSArray * touchLocations;
@property(assign,retain) NSArray * touchPhases;
@property(assign,readonly) int type;
@property(assign,readwrite) bool wasHandled;

- (id).cxx_construct;
- (id)_characterSetDescription;
- (id)_eventDescription;
- (id)_modiferFlagsDescription;
- (id)_touchIdentifiersDescription;
- (id)_touchLocationsDescription:(id)arg1;
- (id)_touchPhaseDescription:(int)arg1;
- (id)_touchPhasesDescription;
- (id)_typeDescription;
- (int)characterSet;
- (id)characters;
- (id)charactersIgnoringModifiers;
- (void)dealloc;
- (float)deltaX;
- (float)deltaY;
- (id)description;
- (float)gestureRotation;
- (float)gestureScale;
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(bool)arg6 isPopupVariant:(bool)arg7 keyCode:(unsigned short)arg8 isTabKey:(bool)arg9 characterSet:(int)arg10;
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(bool)arg6 withFlags:(unsigned long long)arg7 keyCode:(unsigned short)arg8 isTabKey:(bool)arg9 characterSet:(int)arg10;
- (id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (id)initWithScrollWheelEventWithTimeStamp:(double)arg1 location:(struct CGPoint { double x1; double x2; })arg2 deltaX:(float)arg3 deltaY:(float)arg4;
- (id)initWithTouchEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint { double x1; double x2; })arg3 modifiers:(unsigned int)arg4 touchCount:(unsigned int)arg5 touchLocations:(id)arg6 touchIdentifiers:(id)arg7 touchPhases:(id)arg8 isGesture:(bool)arg9 gestureScale:(float)arg10 gestureRotation:(float)arg11;
- (bool)isGesture;
- (bool)isKeyRepeating;
- (bool)isPopupVariant;
- (bool)isTabKey;
- (unsigned short)keyCode;
- (unsigned long long)keyboardFlags;
- (struct CGPoint { double x1; double x2; })locationInWindow;
- (unsigned int)modifierFlags;
- (void)setWasHandled:(bool)arg1;
- (double)timestamp;
- (unsigned int)touchCount;
- (id)touchIdentifiers;
- (id)touchLocations;
- (id)touchPhases;
- (int)type;
- (bool)wasHandled;

@end
