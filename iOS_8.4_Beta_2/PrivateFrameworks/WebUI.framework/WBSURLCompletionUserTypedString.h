/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSURLCompletionUserTypedString : NSObject {
    const char *_chars;
    bool _containsAnySpaces;
    int _length;
    bool _ownsChars;
    bool _ownsUnichars;
    NSString *_string;
    const unsigned short *_unichars;
}

@property(assign,readonly) NSString * normalizedString;

+ (void)initialize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)normalizedString;

@end
