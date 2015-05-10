/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDAction : NSObject <NSCoding, NSSecureCoding> {
    struct __CFArray { } *_associatedResults;
    bool _cachedAssociatedResults;
    bool _cachedCoalescedResult;
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryRange { struct __DDQueryOffset { long long x_1_2_1; long long x_1_2_2; } x_2_1_1; struct __DDQueryOffset { long long x_2_2_1; long long x_2_2_2; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; } *_coalescedResult;
    NSDictionary *_context;
    id _delegate;
    bool _isDefaultAction;
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryRange { struct __DDQueryOffset { long long x_1_2_1; long long x_1_2_2; } x_2_1_1; struct __DDQueryOffset { long long x_2_2_1; long long x_2_2_2; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; } *_result;
    NSURL *_url;
}

@property(assign,readwrite) NSObject<DDActionDelegate> * delegate;
@property(assign,readwrite) bool isDefaultAction;

+ (id)actionWithURL:(id)arg1 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryRange { struct __DDQueryOffset { long long x_1_2_1; long long x_1_2_2; } x_2_1_1; struct __DDQueryOffset { long long x_2_2_1; long long x_2_2_2; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; }*)arg2 context:(id)arg3;
+ (id)defaultActionWithURL:(id)arg1 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryRange { struct __DDQueryOffset { long long x_1_2_1; long long x_1_2_2; } x_2_1_1; struct __DDQueryOffset { long long x_2_2_1; long long x_2_2_2; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; }*)arg2 context:(id)arg3;
+ (bool)isAvailable;
+ (bool)supportsSecureCoding;

- (void)_copyURL:(id)arg1;
- (void)_copyURL:(id)arg1 andString:(id)arg2;
- (void)addToRecents;
- (struct __CFArray { }*)associatedResults;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryRange { struct __DDQueryOffset { long long x_1_2_1; long long x_1_2_2; } x_2_1_1; struct __DDQueryOffset { long long x_2_2_1; long long x_2_2_2; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; }*)coalescedResult;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasUserInterface;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryRange { struct __DDQueryOffset { long long x_1_2_1; long long x_1_2_2; } x_2_1_1; struct __DDQueryOffset { long long x_2_2_1; long long x_2_2_2; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; }*)arg2 context:(id)arg3;
- (int)interactionType;
- (bool)isDefaultAction;
- (id)localizedName;
- (void)perform;
- (void)prepareViewControllerForActionController:(id)arg1;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryRange { struct __DDQueryOffset { long long x_1_2_1; long long x_1_2_2; } x_2_1_1; struct __DDQueryOffset { long long x_2_2_1; long long x_2_2_2; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; }*)result;
- (void)setDelegate:(id)arg1;
- (void)setIsDefaultAction:(bool)arg1;
- (id)url;
- (id)viewController;

@end
