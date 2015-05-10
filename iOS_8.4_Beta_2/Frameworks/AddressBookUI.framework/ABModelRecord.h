/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABModelRecord : NSObject {
    long long _highlightIndex;
    bool _isGroup;
    NSArray *_namePieces;
    int _recordID;
    struct __CFString { } *_sortKey;
}

- (void)dealloc;
- (long long)highlightIndex;
- (id)initWithRecordID:(int)arg1 highlightIndex:(long long)arg2 group:(bool)arg3 namePieces:(id)arg4 sortKey:(struct __CFString { }*)arg5;
- (bool)isGroup;
- (id)namePieces;
- (int)recordID;
- (struct __CFString { }*)sortKey;

@end
