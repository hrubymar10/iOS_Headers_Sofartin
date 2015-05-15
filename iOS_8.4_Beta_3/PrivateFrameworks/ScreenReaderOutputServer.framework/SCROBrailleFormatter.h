/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleFormatter : NSObject <NSCopying> {
    bool _anyUnread;
    id _appToken;
    struct __CFArray { } *_chunkArray;
    struct __CFDictionary { } *_chunkDictionary;
    int _contractionMode;
    bool _currentUnread;
    int _displayMode;
    long long _firstToken;
    long long _lastToken;
    int _lineFocus;
    bool _showDotsSevenAndEight;
    bool _showEightDot;
    NSAttributedString *_statusText;
    struct __CFDictionary { } *_tokenDictionary;
}

@property (nonatomic) int lineFocus;

- (void)addText:(id)arg1 language:(id)arg2 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 token:(long long)arg4 focused:(bool)arg5;
- (void)addText:(id)arg1 language:(id)arg2 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 token:(long long)arg4 focused:(bool)arg5 technical:(bool)arg6;
- (void)addText:(id)arg1 overrideText:(id)arg2 language:(id)arg3 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 token:(long long)arg5 focused:(bool)arg6 technical:(bool)arg7;
- (void)addText:(id)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 token:(long long)arg3 focused:(bool)arg4;
- (void)addText:(id)arg1 selection:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 token:(long long)arg3 focused:(bool)arg4 technical:(bool)arg5;
- (bool)anyUnread;
- (id)appToken;
- (struct __CFArray { }*)chunkArray;
- (struct __CFDictionary { }*)chunkDictionary;
- (int)contractionMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)currentUnread;
- (void)dealloc;
- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (int)displayMode;
- (long long)firstToken;
- (id)initWithContractionMode:(int)arg1 showEightDot:(bool)arg2 showDotsSevenAndEight:(bool)arg3;
- (long long)lastToken;
- (int)lineFocus;
- (void)setAnyUnread:(bool)arg1;
- (void)setAppToken:(id)arg1;
- (void)setCurrentUnread:(bool)arg1;
- (void)setDisplayMode:(int)arg1;
- (void)setLineFocus:(int)arg1;
- (void)setStatusText:(id)arg1;
- (bool)showDotsSevenAndEight;
- (bool)showEightDot;
- (id)statusText;
- (void)translate;

@end
