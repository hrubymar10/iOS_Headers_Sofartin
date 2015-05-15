/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiCategory : NSObject {
    int _categoryType;
    NSString *_displaySymbol;
    NSArray *_emoji;
    long long _lastVisibleFirstEmojiIndex;
}

@property int categoryType;
@property (getter=displaySymbol, readonly) NSString *displaySymbol;
@property (retain) NSArray *emoji;
@property (nonatomic) long long lastVisibleFirstEmojiIndex;
@property (getter=name, nonatomic, readonly) NSString *name;

+ (id)categories;
+ (id)categoryForType:(int)arg1;
+ (id)displayName:(int)arg1;
+ (id)emojiRecentsFromPreferences;
+ (bool)emojiString:(id)arg1 inGroup:(unsigned int*)arg2 withGroupCount:(int)arg3;
+ (unsigned long long)hasVariantsForEmoji:(id)arg1;
+ (id)localizedStringForKey:(id)arg1;
+ (long long)numberOfCategories;

- (int)categoryType;
- (void)dealloc;
- (id)displaySymbol;
- (id)emoji;
- (long long)lastVisibleFirstEmojiIndex;
- (id)name;
- (void)releaseCategories;
- (void)setCategoryType:(int)arg1;
- (void)setEmoji:(id)arg1;
- (void)setLastVisibleFirstEmojiIndex:(long long)arg1;

@end
