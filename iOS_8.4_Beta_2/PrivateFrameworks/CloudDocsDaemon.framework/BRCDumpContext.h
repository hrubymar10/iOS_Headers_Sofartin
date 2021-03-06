/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDumpContext : NSObject {
    PQLConnection *_db;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } *_fp;
    long long _indentation;
    NSString *_indentationBaseString;
    bool _liveDaemon;
    BRCTermDumper *_termDumper;
}

@property(assign,readonly) PQLConnection * db;
@property(assign,readonly) struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }* fp;
@property(assign,retain) NSString * indentationBaseString;
@property(assign,readwrite) bool liveDaemon;

+ (id)highlightedString:(id)arg1 type:(long long)arg2 context:(id)arg3;
+ (id)stringFromBackoff:(double)arg1 context:(id)arg2;
+ (id)stringFromByteCount:(long long)arg1 context:(id)arg2;
+ (id)stringFromByteCount:(long long)arg1 showActualByteCount:(bool)arg2 suffix:(id)arg3 context:(id)arg4;
+ (id)stringFromDueStamp:(unsigned long long)arg1 now:(unsigned long long)arg2 context:(id)arg3 allowsPast:(bool)arg4;
+ (id)stringFromError:(id)arg1 context:(id)arg2;
+ (id)stringFromErrorString:(id)arg1 context:(id)arg2;
+ (id)stringFromItemAsString:(id)arg1 context:(id)arg2;
+ (id)stringFromItemID:(id)arg1 context:(id)arg2;
+ (id)stringFromThrottleState:(int)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)db;
- (struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)fp;
- (id)highlightedString:(id)arg1 type:(long long)arg2;
- (id)indentationBaseString;
- (id)initWithFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (bool)liveDaemon;
- (void)popIndentation;
- (void)pushIndentation;
- (void)setIndentationBaseString:(id)arg1;
- (void)setLiveDaemon:(bool)arg1;
- (void)writeLineWithFormat:(id)arg1;

@end
