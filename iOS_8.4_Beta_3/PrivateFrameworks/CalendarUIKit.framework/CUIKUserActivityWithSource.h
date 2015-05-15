/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKUserActivityWithSource : CUIKUserActivity {
    NSString *_sourceHost;
    NSString *_sourceOwner;
    int _sourceType;
}

- (void).cxx_destruct;
- (bool)_isLocalSource;
- (bool)_requiresHostAndOwner;
- (bool)_supportsConsistentExternalIDAcrossDevices;
- (bool)_supportsConsistentExternalIDAcrossDevices:(int)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSource:(id)arg1 type:(unsigned long long)arg2;
- (unsigned long long)isMatchForSource:(id)arg1;

@end