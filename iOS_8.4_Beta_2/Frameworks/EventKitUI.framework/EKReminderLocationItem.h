/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKReminderLocationItem : NSObject {
    NSDictionary *_addressDictionary;
    bool _isLocationBeingDetermined;
    EKStructuredLocation *_location;
    int _type;
}

@property(assign,retain) NSDictionary * addressDictionary;
@property(assign,readwrite) bool isLocationBeingDetermined;
@property(assign,retain) EKStructuredLocation * location;
@property(assign,readwrite) int type;

- (void).cxx_destruct;
- (id)addressDictionary;
- (id)description;
- (bool)isLocationBeingDetermined;
- (id)label;
- (id)location;
- (void)reset;
- (void)setAddressDictionary:(id)arg1;
- (void)setIsLocationBeingDetermined:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setType:(int)arg1;
- (id)stringForSubtitle;
- (int)type;

@end
