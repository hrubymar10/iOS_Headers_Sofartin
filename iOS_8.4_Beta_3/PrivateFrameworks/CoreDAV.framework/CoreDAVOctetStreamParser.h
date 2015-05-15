/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser> {
    NSMutableData *_octetStreamData;
    NSError *_parserError;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSMutableData * octetStreamData;
@property(assign,readonly) NSError * parserError;
@property(assign,readonly) Class superclass;

+ (bool)canHandleContentType:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)octetStreamData;
- (id)parserError;
- (bool)processData:(id)arg1 forTask:(id)arg2;
- (void)setOctetStreamData:(id)arg1;

@end
