/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSSQLiteRowEnumerator : NSEnumerator {
    int _lastResultCode;
    WBSSQLiteRow *_row;
    WBSSQLiteStatement *_statement;
}

@property(assign,readonly) int lastResultCode;
@property(assign,readonly) WBSSQLiteStatement * statement;

- (void).cxx_destruct;
- (id)initWithResultsOfStatement:(id)arg1;
- (int)lastResultCode;
- (id)nextObject;
- (id)statement;

@end
