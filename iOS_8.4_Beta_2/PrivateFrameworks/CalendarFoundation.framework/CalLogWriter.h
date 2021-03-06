/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogWriter : NSObject <CalLogWriter> {
    <CalLogFormatter> *_formatter;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) <CalLogFormatter> * formatter;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (bool)flush;
- (id)formatter;
- (id)init;
- (id)initWithParameters:(id)arg1;
- (void)setFormatter:(id)arg1;
- (void)write:(id)arg1;

@end
