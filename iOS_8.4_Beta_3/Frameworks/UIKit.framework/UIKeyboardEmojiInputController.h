/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiInputController : NSObject {
    int _currentSequence;
    int _lastViewedCategory;
    NSMutableArray *_recents;
    NSMutableDictionary *_skinToneBaseKeyPreferences;
    NSMutableDictionary *_usageHistory;
}

@property(assign,readwrite) int lastViewedCategory;

+ (id)activeInputView;
+ (Class)classForInputView;
+ (void)writeEmojiDefaults;
+ (void)writeEmojiDefaultsAndReleaseActiveInputView;

- (void)clearAncientHistory;
- (void)dealloc;
- (id)defaultsDictionary;
- (void)emojiUsed:(id)arg1;
- (id)initWithInputView:(id)arg1;
- (bool)isAncientSequence:(int)arg1;
- (int)lastViewedCategory;
- (id)recents;
- (double)scoreForEmoji:(id)arg1;
- (double)scoreForSequence:(int)arg1;
- (void)setLastViewedCategory:(int)arg1;
- (id)skinToneBaseKeyPreferences;
- (void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2;

@end
